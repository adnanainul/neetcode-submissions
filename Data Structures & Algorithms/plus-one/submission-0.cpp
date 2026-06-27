class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>ans;
        //typecasting is a better implementation
        int n=digits.size();
        long long no=0;
        for(int i=0;i<n;i++){
            no=no*10+digits[i];
        }
        no+=1;
        string s=to_string(no);
        for(int i=0;i<s.size();i++){
            ans.push_back(s[i]-'0');
        }
        return ans;
    }
};
