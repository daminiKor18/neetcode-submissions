class Solution {
public:
int robi(vector<int>&nums,int start,int end)
{
    int n= end-start+1;
    if(n==1)
    {
        return nums[start];

    }
    vector<int>dp(n,0);
    dp[0]= nums[start];
    dp[1]= max(nums[start],nums[start+1]);
    for(int i=2;i<n;i++)
    {
        dp[i] = max(nums[start+i]+dp[i-2],dp[i-1]);
    }
    return dp[n-1];
    
}
    int rob(vector<int>& nums) {
        int n= nums.size();
        if(n==0)
        {
            return 0;
        
        }
if(n==1)
{
    return nums[0];
}
if(n==2)
{
    return max(nums[0],nums[1]);
}
int profit1 = robi(nums,0,n-2);
int profit2 =robi(nums,1,n-1);
return max(profit1,profit2);
        
    }
};
