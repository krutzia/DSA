class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) { //diffrent length->impossible
            return false;
        }
        string doubled = s+s ; //join s by itself

        return doubled.find(goal) != string::npos; //check if goal is inside
    }
};