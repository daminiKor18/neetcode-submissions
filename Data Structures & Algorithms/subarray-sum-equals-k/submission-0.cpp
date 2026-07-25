class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        map[0]=1;
        int prefixsum=0,count=0;
        for(int num:nums)
        {
            prefixsum+=num;
            int need= prefixsum-k;
            if(map.find(need)!=map.end())
            {
                count+=map[need];
            }
            map[prefixsum]++;
        }
        return count;
        
        
        
    }
};