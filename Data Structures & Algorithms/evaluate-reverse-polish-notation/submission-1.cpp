class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        
        
        
        for(int i=0;i<tokens.size();i++)
        {
            

        if(tokens[i]!="+"&&tokens[i]!="-"&&
        tokens[i]!="*"&&tokens[i]!="/")
            {
                st.push(stoi(tokens[i]));

            }
            else
            {
                int right= st.top();
                st.pop();
                  int left=st.top();
                st.pop();
            if(tokens[i]=="+")
            {
             st.push(left + right);
        
           
            }
             else if(tokens[i]=="/")
            {
                 
            
             st.push(left / right);
        
          
            }
            else if(tokens[i]=="-")
            {
                
              st.push(left - right);
        
            
            }
           else 
            {
                 
            
              st.push(left * right);
        
            
            }
            
             
            }

        }
        return st.top();
        
        
    }
};



















































































































