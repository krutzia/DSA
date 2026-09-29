class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){ //anagrams must have same length
            return false;
        }
        int freq[26]={0}; //store the freq of each lower char
        for(char c: s) {  //count char in strin s
            freq[c-'a']++;
        }
        for(char c: t) {
            freq[c-'a']--;  //subtract char found in t
        }
        for(int i=0; i<26; i++) {
            if(freq[i] != 0) {  //after subtracting , freq of each char must be 0
                return false;
            }
        }
        return true;
    }
};