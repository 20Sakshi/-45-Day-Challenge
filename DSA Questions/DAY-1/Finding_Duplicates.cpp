// Leetcode Solution:

class Solution {
public:
    int count(vector<int>& nums, int ele) {
        int flag=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=ele){
                flag++;
            }
        }
        return flag;
    }
    int findDuplicate(vector<int>& nums) {
        int low=1,high=nums.size();
        int duplicate=-1;
        while(low<=high){
            int mid=(low+high) / 2;
            if(count(nums,mid) > mid){
                duplicate=mid;
                high = mid-1;
            }
            else{
                low = mid +1;
            }
        }
        return duplicate;
    }
};
