#include <algorithm>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<vector<string>> out;
        std::unordered_map<std::string, std::vector<std::string>> x;
        for(int i = 0; i < strs.size(); i++){
            std::string temp = strs[i];
            std::sort(temp.begin(), temp.end());
            x[temp].push_back(strs[i]);
        }
        for(auto& key : x){
            out.push_back(key.second);
        }
        return out;
    }
};
