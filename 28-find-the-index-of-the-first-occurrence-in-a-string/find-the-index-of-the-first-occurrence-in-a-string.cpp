class Solution {
public:
    int strStr(string haystack, string needle) {
        int flag = -1;
        int size = haystack.size()-needle.size()+1;
        for(int i =0; i<=size; i++)
        {
            if(haystack[i]==needle[0])
            {
                for(int j = 0; j< needle.size(); j++)
                {
                    if(haystack[i+j]!=needle[j])
                    {
                            flag = -1;
                            break;
                    }
                    if(j == needle.size()-1)
                    {
                        flag = i;
                        return flag;
                    }
                }
            }
            else
            {
                flag = -1;
            }
            

        }
        return flag;
    }
};