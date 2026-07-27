class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>temp;
        int left =0;
        int right= numbers.size()-1;
        while(left<right)
        {
            int sum = numbers[left]+numbers[right];
            if(sum<target)
            {
                left++;
            }
    else if(sum>target)
    {
        right--;
    }
        else
        {
            temp.push_back(left+1);
            temp.push_back(right+1);
            break;
            
            
        }
        }
        return temp;
        
    }
};
