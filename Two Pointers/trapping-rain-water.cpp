class Solution {
public:
    int trap(vector<int> &height) 
    {
        int start = 0, end = height.size() - 1;
        int water = 0, startMax = height[start], endMax = height[end];

        while (start < end)
        {
            if (startMax < endMax)
            {
                startMax = max(height[++start], startMax);
                water += startMax - height[start];
            }
            else 
            {
                endMax = max(height[--end], endMax);
                water += endMax - height[end];
            }
        }    

        return water;
    }
};
