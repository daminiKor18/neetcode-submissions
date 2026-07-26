class Solution {
public:
    string mergeAlternately(string word1, string word2) {
         string mergestring="";
         int i=0,j=0;
         while(i<word1.length()&& j<word2.length())
         {
            mergestring+=word1[i];
            mergestring+=word2[j];
            i++;
            j++;
         }
         while(i<word1.length())
         {
            mergestring+=word1[i];
            i++;
         }
         while(j<word2.length())
         {
            mergestring+=word2[j];
            j++;
         }
         return mergestring;
        
    }
};