class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        // max heap question 

        priority_queue<int> maxHeap;
        
        for(int i = 0; i < stones.size(); i++){
            maxHeap.push(stones[i]);
        }
 
        while(maxHeap.size() > 1){
            int y = maxHeap.top();
            maxHeap.pop();
            int x = maxHeap.top();
            maxHeap.pop(); 

            /*  
            if(y == x) {
               if(!maxHeap.size()) {
                    return 0;
               }
               continue;
            }
            */
            if(y != x ){
                maxHeap.push(y - x);
            }
        }
        return maxHeap.empty() ? 0 : maxHeap.top();
         

    }
};
