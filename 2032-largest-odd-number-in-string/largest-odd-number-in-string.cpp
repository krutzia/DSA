class Solution {
public:
    string largestOddNumber(string s) {
        for (int i=s.size()-1; i>=0; i--) {  //start from last digit and move towards first
            if ( (s[i]-'0') %2 ==1 ) //convert character into number & check if its odd
            return s.substr (0, i+1); //if odd, return string from beginning upto that digit
        }
        return "";
    }
};