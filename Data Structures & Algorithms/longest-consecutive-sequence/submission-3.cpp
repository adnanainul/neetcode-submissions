class Solution {
public:
//use unordered set then find the next ele
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>us(nums.begin(),nums.end());
        int ans=0;
        for(int i:us){
            if(us.find(i-1)==us.end()){
                int curr=i;
                int c=1;
                while(us.find(curr+1)!=us.end()){
                    curr++;
                    c++;
                }
                ans=max(ans,c);
            }
        }
        return ans;
    }
};
