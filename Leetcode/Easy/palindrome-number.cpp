// 

class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }
        int temp = x;
        long long int reverse = 0;
        int remainder;
        while (temp!=0){
            remainder = temp%10;
            reverse = reverse * 10 + remainder;
            temp = temp/10;
        }
        if (x==reverse){
            return true;
        }
        return false;
        
        
    }
};