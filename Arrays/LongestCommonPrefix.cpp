class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = "";
        int n = strs[0].size();
        for (int k=0;k<n;k++) {
            char c=strs[0][k];
            for (int i=1;i<strs.size();i++){
                if (k>=strs[i].size()||strs[i][k]!=c) {
                    return prefix;
                }
            }
            prefix+=c;
        }
        return prefix;
    }
};
