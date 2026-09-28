class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         string prefix = strs[0];//take first string as prefix

         for (int i=1; i<strs.size(); i++){ //compare with remaning strings
           int j=0; //start from the first character

            while (j<prefix.size() && j<strs[i].size() && 
            prefix[j]==strs[i][j]) {  //check matching characters
            j++;
         }
         prefix= prefix.substr(0,j);  //keep only common part

         if (prefix=="") {
            return "";  //no common prefix
         }
        }
         return prefix; //return common prefix
    }
};