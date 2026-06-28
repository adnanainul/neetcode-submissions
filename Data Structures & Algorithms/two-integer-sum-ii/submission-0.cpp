class Solution {
public:
//we just find the t-a[j] ele using upper bound
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            auto it=lower_bound(nums.begin()+i+1,nums.end(),target-nums[i]);
            if(it!=nums.end() && *it==target-nums[i]){
                return {i+1,(int)(it-nums.begin())+1};
            }
        }
        return {};
    }
};
