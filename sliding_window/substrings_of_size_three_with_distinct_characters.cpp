class Solution {
public:
    int countGoodSubstrings(string s) {
        std::unordered_set<char> seen;       
        int left = 0;
        int substring_count = 0;
        
       
        for(int right = 0; right < s.size();right++){ 
            while(seen.count(s[right])) {
                seen.erase(s[left]); 
                left++;
            }
            if((right - left + 1) == 3) {
                substring_count += 3;
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);
        }
        return substring_count;
    }
};
