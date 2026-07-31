class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequencyMap;
        priority_queue<pair<int, int>> maxHeap;

        // Count each number's frequency
        for (int i = 0; i < nums.size(); i++) {
            if (frequencyMap.find(nums[i]) != frequencyMap.end()) {
                frequencyMap[nums[i]]++;
            } else {
                frequencyMap[nums[i]] = 1;
            }
        }

        // Store {frequency, number} in the max heap
        for (auto entry : frequencyMap) {
            int number = entry.first;
            int frequency = entry.second;

            maxHeap.push({frequency, number}); // notice how maxHeap is ordered based on frequency
        }

        vector<int> answer;

        // Extract the k most frequent numbers
        for (int i = 0; i < k; i++) {
            int number = maxHeap.top().second;
            answer.push_back(number);
            maxHeap.pop();
        }

        return answer;
    }
};
