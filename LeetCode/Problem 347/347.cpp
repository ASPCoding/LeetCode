class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequencies;
        for(int num: nums){
            ++frequencies[num];
        }
        vector<pair<int, int>> ordered_frequencies(frequencies.begin(), frequencies.end());

        sort(ordered_frequencies.begin(), ordered_frequencies.end(), 
            [](auto &l, auto &r){return l.second > r.second;});
        vector<int> solution;
        for(int i = 0; i < k; ++i){
            solution.push_back((*(ordered_frequencies.begin() + i)).first);
        }
        return solution;        
    }
};