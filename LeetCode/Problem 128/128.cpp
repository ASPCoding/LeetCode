class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> ordered_nums(nums.begin(), nums.end());
        int longest = 0;
        int current = *(ordered_nums.begin());
        int num_consec = 1;
        for(auto index = ordered_nums.begin(); index != ordered_nums.end(); ++index){
            if(*index == current + 1){
                ++num_consec;
            }else{
                num_consec = 1;
            }
            if(num_consec > longest){
               longest = num_consec;
            }
            current = *index;
        }
        return longest;
    }
};
