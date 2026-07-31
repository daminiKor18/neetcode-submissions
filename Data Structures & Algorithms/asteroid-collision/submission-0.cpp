class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int i=0;i<asteroids.size();i++)
        {
            bool alive =true;
            //right-> <-left
            while(alive&&!st.empty()&&st.top()>0&&asteroids[i]<0)
            {
                if(abs(st.top())<abs(asteroids[i]))
                {
                    st.pop();
                }
               else if(abs(st.top())==abs(asteroids[i]))
                {
                    st.pop();
                    alive=false;
                }
                else
                {
                    alive =false;

                }
            }
                if(alive)
                {
                    st.push(asteroids[i]);
                }
            
        }
        vector<int>ans(st.size());
        for(int i=st.size()-1;i>=0;i--)
        {
            ans[i]=st.top();
            st.pop();

        }
        return ans;
        
    }
};