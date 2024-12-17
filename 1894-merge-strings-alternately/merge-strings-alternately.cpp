class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();
        string result = "";
        int i = 0;
        while (i < n1 && i < n2) {
            result += word1[i];
            result += word2[i];
            i++;
        }

        if (i < n1) {
            result += word1.substr(i);
        } else if (i < n2) {
            result += word2.substr(i);
        }

        return result;
    }
};
