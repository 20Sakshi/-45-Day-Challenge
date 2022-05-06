// Leetcode Solution:

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int temp,counter=0,j=0;
        while(j<3 && counter<=nums.size()){
            for(int i=counter;i < nums.size();i++){
                if(nums[i]==j){
                    temp=nums[counter];
                    nums[counter]=nums[i];
                    nums[i]=temp;
                    counter++;
                }
            }
            j++;
        }

    }
};
