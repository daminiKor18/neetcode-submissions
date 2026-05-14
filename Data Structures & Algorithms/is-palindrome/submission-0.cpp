class Solution {
public:
 bool isalphanumeric(char ch)
{
    
    
        if((ch>='a'&&ch<='z')|| ch>='A'&& ch<='Z'||(ch>='0' && ch<='9'))
        {
            return true;
        }
    
    return false;
}
    bool isPalindrome(string s) {
        int left=0;
        int right = s.length()-1;
        
        while(left<right)
        {
            if(!isalphanumeric(s[left]))
            {
                left++;
                continue;
            }
            if(!isalphanumeric(s[right]))
            {
                right--;
                continue;
                
            }
            if(tolower(s[left])!=tolower(s[right]))
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
        
    }
};
