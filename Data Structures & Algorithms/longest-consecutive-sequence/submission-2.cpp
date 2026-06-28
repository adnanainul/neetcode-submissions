class Solution {
public:
// cant we just sort it then take the consecutive?
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int l=0;
        int ans=1;
        int c=1;
        for(int r=1;r<nums.size();r++){
            if(nums[r]==nums[r-1]) continue;
            else if(nums[r]==nums[r-1]+1){
                c++;;
            }else{
                ans=max(ans,c);
                c=1;
            }
        }
        return max(ans,c);
    }
};
