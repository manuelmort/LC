class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max_sum = 0, sum = 0; 
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        max_sum = sum;

        for (int i = k; i < nums.size(); i++) {
            sum += nums[i] - nums[i-k];
            max_sum = max(max_sum, sum);
        }
       return max_sum / k;
    }
};

