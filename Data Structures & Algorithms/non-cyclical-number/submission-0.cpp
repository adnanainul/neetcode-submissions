class Solution {
public:
//if 100 or 10 or 1 will come then is always true else false
    int sumofsq(int n){
        long long sum=0;
        while(n>0){
            int d=n%10;
            sum+=d*d;
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int t=100;
        while(t--){
            //sum of squares of digits
            n=sumofsq(n);
            if(n==100 || n==10 || n==1){
                return true;
            }
        }
        return false;
    }
};
