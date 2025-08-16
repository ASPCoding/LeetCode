class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> container;
        for(int num: nums){
            if(container[num] == 1){
                return true;
            }else{
                container[num] = 1;
            }
        }
        return false;
    }
};