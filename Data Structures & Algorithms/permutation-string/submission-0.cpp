class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length())
    return false;
        unordered_map<char,int>map1;
        unordered_map<char,int>map2;

        int left=0;

        for(char ch:s1)
        {
            map1[ch]++;
        }
        for(int right=0;right<s2.size();right++)
        {
            map2[s2[right]]++;
            if(right-left+1>s1.length())
            {
                map2[s2[left]]--;
                if(map2[s2[left]]==0)
                {
                    map2.erase(s2[left]);
                }
                left++;

            }
             

             if(right-left+1==s1.length())
            {
                if(map1==map2)
                {
                    return true;
                }
               
            }
        }
        
        return false;
        
    }
};
