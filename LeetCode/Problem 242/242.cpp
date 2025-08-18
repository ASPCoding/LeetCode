class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> map_s;
        unordered_map<char, int> map_t;
        for(char c: s){
            map_s[c] += 1;
        }
        for(char c: t){
            map_t[c] += 1;
        }
        return map_s == map_t;
    }
};