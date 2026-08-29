auto speedup = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int col=matrix[0].size();
        int low=0,high=col*rows-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int val = matrix[mid/col][mid%col];
            if(val==target){
                return true;
                break;
            }
            else if(val<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
};
