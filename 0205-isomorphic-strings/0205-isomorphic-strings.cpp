class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {

        int arr_1[256] = {0};
        int arr_2[256] = {0};

        if(s.size() != t.size())
        {
            return false;
        }

        for(int i = 0; i<s.size(); i++)
        {
            if(arr_1[s[i]] != arr_2[t[i]])
            {
                return false;
            }

            arr_1[s[i]] = i+1;
            arr_2[t[i]] = i+1;
        }

        return true;
        
    }
};