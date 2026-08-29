class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0,high=nums.size()-1;
        while(left<=high){
            int mid=left+(high-left)/2;
            if(nums[mid]==target){
                return mid;
                break;
            }
            else if(nums[mid]<target){
                left=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};
