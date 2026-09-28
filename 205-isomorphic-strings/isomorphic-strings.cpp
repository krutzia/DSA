class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp1,mp2;//store charchter relationships

        for (int i =0; i<s.size(); i++) { //check charc 1 by 1
            if ( mp1.count(s[i]) && mp1[s[i]] != t[i]) //s char have diff match
            return false;

            if ( mp2.count(t[i]) && mp2[t[i]] != s[i]) // t char have diff match
            return false;

            mp1[s[i]]=t[i]; //map s-> t
            mp2[t[i]]=s[i]; //map t-> s
        }
        return true;
    }
};