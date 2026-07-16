class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> myMap;
        std::vector<int> out;
        for(int i = 0; i < nums.size(); i++){
            myMap[nums[i]]++;
        }
        for(int j = 0; j < k; j++){
            int max = 0;
            int maxKey = 0;
            for(auto& key : myMap){
                if (key.second > max){
                    max = key.second;
                    maxKey = key.first;
                }

            }
            out.push_back(maxKey);
            myMap.erase(maxKey);
        }
        return out;
    }
};
