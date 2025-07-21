class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> num;
        int length;
        if(x < 0){
            return false;
        }
        if(x == 0){
            return true;
        }
        else{
            for(int i = x;i != 0; i /= 10){
                num.push_back(i%10);
            }
            length = num.size()/2;
            auto i = num.begin();
            auto j = num.end() - 1;
            for(int index = 0; index < length; ++index){
                if(*i != *j){
                    return false;
                }
                ++i;
                --j;
            }
            return true;
        }
    }
};