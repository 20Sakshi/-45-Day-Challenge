//Leetcode Solution:

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        int t=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i] != nums[t]){
                t++;
                nums[t]=nums[i];
            }
        }
        return t+1;
    }
};
