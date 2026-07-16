#include <iostream>
class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> myMap;
        for(int i = 0; i < s.length(); i++){
            myMap[s[i]]++;
        }
        for(int j = 0; j < t.length(); j++){
            myMap[t[j]]--;
        }
        for (const auto& pair : myMap){
            if (pair.second != 0)
                return false;
        }
        return true;
    }
};
