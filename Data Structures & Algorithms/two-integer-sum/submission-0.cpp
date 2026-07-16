class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> out;
        std::unordered_map<int, int> myMap;
        for (int i = 0; i < nums.size(); i++){
            int difference = target - nums[i];
            if(myMap.contains(difference)){
                auto it = myMap.find(difference);
                out.push_back(it->second);
                out.push_back(i);
                return out;
            }
            else{
                myMap[nums[i]] = i;
            }
        }
    }
};
