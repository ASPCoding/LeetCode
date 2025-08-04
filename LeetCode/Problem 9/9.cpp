class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        if(x == 0){
            return true;
        }
        else{
            int x_copy = x;
            long reversed = 0;
            while(x_copy !=0){
                reversed *= 10;
                reversed += x_copy % 10;
                x_copy /= 10;
            }
            if(reversed == x){
                return true;
            }
            return false;
        }
    }
};