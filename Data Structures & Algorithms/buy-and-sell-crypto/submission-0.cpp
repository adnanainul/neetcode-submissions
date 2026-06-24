class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int l,r;
        int ans= -1e7;
        for(int l=0;l<n-1;l++){
            for(int r=l+1;r<n;r++){
                ans=max(ans,prices[r]-prices[l]);
            }
        }
        if(ans<0) return 0;
        else return ans;
    }
};
