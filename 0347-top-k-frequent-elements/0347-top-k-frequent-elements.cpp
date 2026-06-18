class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        //tamim
        // Count frequencies
        for (int num : nums) {
            freq[num]++;
        }

        // Max heap: {frequency, number}
        priority_queue<pair<int, int>> pq;

        for (auto& p : freq) {
            pq.push({p.second, p.first});
        }

        vector<int> result;

        // Extract top k frequent elements
        for (int i = 0; i < k; i++) {
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};