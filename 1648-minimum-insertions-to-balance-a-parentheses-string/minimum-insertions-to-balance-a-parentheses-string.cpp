class Solution {
public:
    int minInsertions(string s) {
        int insertion=0, need=0;   //insertion-> how many brackets we add
           for (char c :s) {       //need-> how many brackes we need
              if (c=='(') {
                 if (need % 2 == 1) {  //if need is odd, 
                    insertion++;       //we add extra ) to complete previous pair
                    need--;            //one required ) HAS BEEN SUPLIED
                 }
                 need+=2;             //add 2 because every'(' need 2 ')'
              }
              else {
                need--;
                if (need<0) { //means we found extra ) witout suitable opening bracket
                    insertion++;  //we add ( to fix extra )
                    need=1; //but remember, for every '(' we NEED 2 CONSECUTIVE ')'
                }
              }
           }
           return insertion+need;
    }
};