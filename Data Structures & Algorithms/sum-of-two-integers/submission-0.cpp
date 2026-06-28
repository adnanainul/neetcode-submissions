class Solution {
public:
// we know a+b=(a^b)+2(a&b)
    int getSum(int a, int b) {
        return ((a^b)+2*(a&b));
    }
};
