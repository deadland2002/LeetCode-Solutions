class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s=nums.size();
        int i,j,a=0,b=0;
        for(i=0;i<s-1;i++){
            for(j=i+1;j<s;j++){
                if(nums[i]+nums[j]==target){
                    a=i;
                    b=j;
                    break;   
                }
            }
        }
        return {a,b};
    }
};