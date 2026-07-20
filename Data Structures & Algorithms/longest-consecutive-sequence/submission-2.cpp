#include <iostream>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        std::set<int> mySet;
        for(int i : nums){
            mySet.insert(i);
        }
        int currNum;
        int maxLen = 1;
        std::unordered_map<int, int> lens;
        for(int j : mySet){
            int currLen = 1;
            currNum = j;
            while(1){
                if(mySet.find(currNum-1) != mySet.end()){
                    currNum--;;
                    currLen++;
                    std::cout << currNum << "\t" << currLen << std::endl;
                }
                else{
                    break;
                }
                if(currLen > maxLen)
                    maxLen = currLen;
            }
        }
        return maxLen;
    }
};
