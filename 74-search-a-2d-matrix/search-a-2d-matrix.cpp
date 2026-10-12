class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();       //m is no. of rows
        int n = matrix[0].size();    //n is no. of colums

        int low=0;     //setting binary search range
        int high=m*n-1;

        while (low<=high) {
            int mid= low + (high - low)/2;   //midle index

            int row = mid/n;   //gives the row index
            int col = mid%n;    //gives the column index

            if (matrix[row][col]==target) {
                return true;
            }
            else if (matrix[row][col]<target) {
                low=mid+1;
            }
            else {
                high=mid-1;
            }
        }
        return false;
    }
};