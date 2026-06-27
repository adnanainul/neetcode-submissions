class Solution {
public:
    bool isPalindrome(string s) {
        string ns="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                ns+=tolower(s[i]);
            }
        }
        for(int i=0;i<ns.length();i++){
            if(ns[i]!=ns[ns.length()-i-1]){
                return false;
            }
        }
        return true;
    }
};
