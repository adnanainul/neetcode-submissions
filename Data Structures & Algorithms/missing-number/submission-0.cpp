class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x=0;
        for(int i=0;i<=nums.size();i++){
            x^=i;
        }
        int z=0;
        for(int i=0;i<nums.size();i++){
            z^=nums[i];
        }
        return x^z;
    }
};
