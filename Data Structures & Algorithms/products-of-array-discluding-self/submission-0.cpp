#include <iostream>
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> out;
        const int size = nums.size();
        int prefix[size];
        int runPre;
        int suffix[size];
        int runSuf;
        int j = nums.size() - 1;
        for (int i = 0; i < nums.size(); i++){
            if(j == (nums.size() - 1)){
                runSuf = 1;
                suffix[j] = 1;
            }
            else{
                runSuf *= nums[j+1];
                suffix[j] = runSuf;
            }
            j--;
            if(i == 0){
                runPre = 1;
                prefix[i] = 1;
            }
            else{
                runPre *= nums[i-1];
                prefix[i] = runPre;
            }
              
        }
        for (int k = 0; k < nums.size(); k++){
            out.push_back(prefix[k] * suffix[k]);
        }
        return out;
    }
};
