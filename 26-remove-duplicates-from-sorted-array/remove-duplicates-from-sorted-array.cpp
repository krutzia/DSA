class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int j =1;                      //i-> checks every element
        for (int i = 1; i<n; i++){   //j-> tells us where to put the next unique element
            if (nums[i]!=nums[i-1]){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};