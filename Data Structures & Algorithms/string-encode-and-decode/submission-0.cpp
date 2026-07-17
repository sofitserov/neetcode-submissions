#include <iostream>
class Solution {
public:

    string encode(vector<string>& strs) {
        std::string out = "";
        int len;
        for(std::string str : strs){
            len = str.length();
            out += (std::to_string(len) + "#");
            out += str;
        }
        return out;
    }

    vector<string> decode(string s) {
        vector<std::string> out;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') j++; 
            int len = std::stoi(s.substr(i, j - i));  
            std::string str = s.substr(j + 1, len);        
            out.push_back(str);
            i = j + 1 + len;                 
        }
    return out;
    }
};
