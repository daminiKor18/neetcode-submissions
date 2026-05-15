class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int maxlen =0;
        
        int left=0;
        for(int right=0;right<s.length();right++)
        {
            while(st.find(s[right])!=st.end())//already exists
            {
                st.erase(s[left]);
                //shrink window whenduplicate is found until it become valid
                left++;
            }
            st.insert(s[right]);
            maxlen = max(maxlen, right-left+1);
    

        }
        return maxlen;
    }
};
