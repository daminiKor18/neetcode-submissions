class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int ans;
        int rightop,leftop;
        
        for(int i=0;i<tokens.size();i++)
        {
            

            if(tokens[i]!="+"&&tokens[i]!="-"&&tokens[i]!="*"&&tokens[i]!="/")
            {
                st.push(stoi(tokens[i]));

            }
            else
            {
                 rightop= st.top();
                st.pop();
                 leftop=st.top();
                st.pop();
            if(tokens[i]=="+")
            {
             ans = leftop + rightop;
        
           
            }
             else if(tokens[i]=="/")
            {
                 
            
             ans = leftop / rightop;
        
          
            }
            else if(tokens[i]=="-")
            {
                
             ans = leftop - rightop;
        
            
            }
           else 
            {
                 
            
             ans = leftop * rightop;
        
            
            }
            
             st.push(ans );
            }

        }
        ans=st.top();
        st.pop();
       return ans; 
    }
};



















































































































