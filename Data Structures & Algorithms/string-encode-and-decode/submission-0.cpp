class Solution {
public:

    string encode(vector<string>& strs) {
        //5#hello5#world
        string res="";
        for(string s:strs)
        {
            res+= to_string(s.length())+"#" + s;
        }
        return res;

    }

    vector<string> decode(string s) {
        vector<string>res;
        int i=0;
        while(i<s.length())
        {
            int j =i;
            while(s[j]!='#')
            {
                j++;
            }

            int length= stoi(s.substr(i,j-i));
            j++;
            string word = s.substr(j,length);
            res.push_back(word);
            i=j+length;


            
        }
        return res;
    

    }
};
