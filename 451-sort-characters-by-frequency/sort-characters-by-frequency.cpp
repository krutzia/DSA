class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq; //store freq of each char in map
        for(char c : s){  //for every char of string s
            freq[c]++;  
        }
        vector<pair<char,int>>chars(freq.begin(),freq.end());//store char & its freq in vector
        sort(chars.begin(),chars.end(), //sort freq in decresing order
        [] (auto&a, auto&b){
        return(a.second>b.second);
    });
    string result= ""; //create an empty string where we store result

    for(auto &p : chars){ //add each charters acc to its freq
        result += string(p.second,p.first);  //p.second-->freq ; p.first-->char
    }
    return result;
    }
};