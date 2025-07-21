class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> complementMap;
        //unordered map is used here because using a map will use more memory because
        //it holds unnecessary data
        int length = nums.size();

        for(int i = 0; i < length; ++i){
            int complement = target - nums[i];
            if (complementMap.count(complement)) {
                // the .count method returns how many times the item appears in the map
                //This means if the complement exists, the condition evals to true
                return {complementMap[complement], i};
            }
            complementMap[nums[i]] = i;
        }

        return {};
    }
};