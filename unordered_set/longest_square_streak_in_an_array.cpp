class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {

        std::unordered_set<long long> set;
        int longest_streak = 1;
        for(int i = 0; i < nums.size(); i++)  {
            set.insert(nums[i]);

        }

       
        for(long long base:set){
           int count = 1; 
           while(set.count(base * base))  {
                base *= base;
                count++; 
            } 
            longest_streak = max(longest_streak,count);
            count = 1;

        }
        if(longest_streak == 1) {
            return -1;
        }
        return longest_streak;
    }    
};

