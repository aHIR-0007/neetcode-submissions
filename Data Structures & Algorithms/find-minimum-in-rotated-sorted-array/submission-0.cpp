class Solution {
public:
    int findMin(vector<int> &nums) {
        int left=0;
        int right=nums.size()-1;
        int a=nums[0];
        while(left<=right){
            if(nums[left]<=nums[right]){
                a=min(a,nums[left]);
                break;
            }
            int mid=left+(right-left)/2;
            a=min(a,nums[mid]);
            if(nums[mid]>=nums[left]){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return a;
    }
};
