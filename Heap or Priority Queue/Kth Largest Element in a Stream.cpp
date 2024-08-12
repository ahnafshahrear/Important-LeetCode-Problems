class KthLargest {
private:
    int size;
    priority_queue<int, vector<int>, greater<int>> minHeap;

public:
    KthLargest(int k, vector<int>& nums) {  
        size = k;
        for (int n : nums) {
            minHeap.push(n);
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }
    }
    int add(int val) {
        if (minHeap.size() < size or minHeap.top() < val) {
            minHeap.push(val);
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }    
        return minHeap.top();
    }
};
