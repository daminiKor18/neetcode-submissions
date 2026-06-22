class Solution {
public:
    int numDecodings(string s) {
      int  n= s.length();
      if (n == 0 || s[0] == '0') return 0;
        vector<int>dp(n+1,0);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            
            int singledigit= s[i-1]-'0';
            if(singledigit>=1&& singledigit<=9)
            {
            dp[i]= dp[i-1]+dp[i];
            }
        
        int doubledigit = stoi(s.substr(i-2,2));
        if(doubledigit>=10 && doubledigit<=26)
        {
            dp[i]= dp[i-2]+dp[i];
        }
        }
        return dp[n];
        
    }
};
