class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::unordered_set<char> seen;
        int max_length = 0;
        int left = 0;

        for(int right = 0; right < s.size(); right++) { 
            while(seen.count(s[right])) {
                seen.erase(s[left]);
                left++
            }
            seen.insert(s[right]);
            max_length = max(max_length, right - left + 1)
        }
        return max_length;
    }
};

