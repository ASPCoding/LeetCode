class Solution {
public:
    int check_subtraction(string::iterator & index){
        auto next_index = index;
        ++next_index;
        if(*index == 'I'){
            if(*next_index == 'V'){
                ++index;
                return 4;
            }
            else if(*next_index == 'X'){
                ++index;
                return 9;
            }
            else{
                return 1;
            }
        }
        else if(*index == 'X'){
            if(*next_index == 'L'){
                ++index;
                return 40;
            }
            else if(*next_index == 'C'){
                ++index;
                return 90;
            }
            else{
                return 10;
            }
        }
        else{
            if(*next_index == 'D'){
                ++index;
                return 400;
            }
            else if(*next_index == 'M'){
                ++index;
                return 900;
            }
            else{
                return 100;
            }
        }
    }

    int convert_roman_char(const string::iterator & index){
        if(*index == 'V'){
            return 5;
        }
        else if(*index == 'L'){
            return 50;
        }
        else if(*index == 'D'){
            return 500;
        }
        else{
            return 1000;
        }
    }

    int romanToInt(string s) {
        auto i = s.begin();
        auto end = s.end();
        int result = 0;
        for(;i != end; ++i){
            if(*i == 'I' || *i == 'X' || *i == 'C'){
                result += check_subtraction(i);
            }
            else{
                result += convert_roman_char(i);
            }
            //Could be broken if end is a charcter that meets check_subtraction's test
        }
        return result;
    }
};