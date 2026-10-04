class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n =  nums.size(); //stores array size
        k = k%n; //handels k>n

        vector<int>temp;  //creates a temporary vector where we store new array

        for (int i = n-k; i<n; i++) {
            temp.push_back(nums[i]);  //add last k element first in temp
        }
        for (int i = 0 ; i<n-k; i++) {
            temp.push_back(nums[i]);  //add eemaing elements i temp
        }
        nums=temp;  //updates original array
    }
};