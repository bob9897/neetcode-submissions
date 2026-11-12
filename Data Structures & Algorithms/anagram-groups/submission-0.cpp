class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> group;
        for(string word: strs){
            string key(26,0);
            for (char ch: word){
                key[ch-'a']++;
            }
            group[key].push_back(word);
        }

        vector<vector<string>> result;
        for (auto& pair: group){
            result.push_back(pair.second);
        }
        return result;
    }
};
