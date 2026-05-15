class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxarea =0;
        int left=0;
        int right=n-1;
        while(left<right)
        {
            maxarea = max(maxarea,(right-left)*min(heights[left],heights[right]));
            if(heights[left]<heights[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return maxarea;
        
    }
};
