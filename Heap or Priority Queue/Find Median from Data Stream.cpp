class MedianFinder {
private:
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

public:
    void addNum(int num) {
        if (maxHeap.empty() or maxHeap.top() > num) {
            maxHeap.push(num);
        } else {
            minHeap.push(num);
        }
        if (maxHeap.size() > minHeap.size() + 1) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        } else if (minHeap.size() > maxHeap.size() + 1) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }
    
    double findMedian() {
        if (maxHeap.size() == minHeap.size()) {
            if (maxHeap.empty()) {
                return 0;
            } else {
                return (maxHeap.top() + minHeap.top()) / 2.0;
            }
        } else {
            if (maxHeap.size() > minHeap.size()) {
                return maxHeap.top();
            } else {
                return minHeap.top();
            }
        }
    }
};
