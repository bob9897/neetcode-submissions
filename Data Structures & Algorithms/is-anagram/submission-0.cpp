class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> stringS;
        std::unordered_map<char, int> stringT;
        for (const char c: s){
            if (stringS.find(c) == stringS.end()){
                stringS.insert({c, 1});
            }
            else {
                stringS[c] = stringS[c] + 1;
            }
        }
        for (const char c: t){
            if (stringT.find(c) == stringS.end()){
                stringT.insert({c, 1});
            }
            else {
                stringT[c] = stringT[c] + 1;
            }
        }
        if (stringS == stringT){
            return true;
        }
        return false;
    }
};
