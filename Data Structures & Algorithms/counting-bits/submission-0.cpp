class Solution {
public:
//just do simulation

    int bin(int nn){
        string s="";
        while(nn!=0){
            s+=(nn%2)+'0';
            nn/=2;
        }
        reverse(s.begin(),s.end());
        int one=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') one++;
        }
        return one;
    }

    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            ans.push_back(bin(i));
        }
        return ans;
    }
};
