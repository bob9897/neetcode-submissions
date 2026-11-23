class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
    unordered_map<int,int> frequency;

    vector<int> result;

    for (int i = 0; i < nums.size(); i++){
        frequency[nums[i]]++;
    }

    priority_queue<pair<int,int>> sortedFrequency;
    for (auto& [num, count] : frequency) {
            sortedFrequency.push({count, num});
        }

    for (int i = 0; i < k; i++){
        result.push_back(sortedFrequency.top().second);
        sortedFrequency.pop();
    }
    return result;
    }
};
