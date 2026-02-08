class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) { 

        int left = 0;
        int curr_sum = 0;
        int count = 0;
     
        for(int right = 0; right < arr.size();right++) { 
            curr_sum += arr[right]; 
            if((right - left + 1) == k) {
                if((curr_sum / k) >= threshold) { 
                    count++;
                }
                curr_sum -= arr[left];
                left++;
            }         
        } 
        return count;
                  
    }
};

