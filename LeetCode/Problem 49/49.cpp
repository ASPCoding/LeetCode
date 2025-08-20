class Solution {
public:
    unordered_map<char,int> letter_frequency(string& word){
        unordered_map<char, int> frequency;
        for(char c: word){
            ++frequency[c];
        }
        return frequency;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int strs_length = strs.size();
        vector<unordered_map<char, int>> anagrams;
        vector<vector<string>> solution;
        //Could instead be solved by using std::sort function

        for(int i = 0; i < strs_length;++i){
            unordered_map<char, int> frequency = letter_frequency(strs[i]);
            int solution_index = -1;
            int k = 0;
            for(auto j = anagrams.begin(); j != anagrams.end(); ++j, ++k){
                if(*j == frequency){
                    solution_index = k;
                }
            }
            if(solution_index != -1){
                solution[solution_index].push_back(strs[i]);
            }else{
                anagrams.push_back(frequency);
                vector<string> new_vector;
                new_vector.push_back(strs[i]);
                solution.push_back(new_vector);
            }
        }
        return solution;
    }
};