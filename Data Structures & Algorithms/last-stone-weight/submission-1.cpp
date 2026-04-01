class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> max_heap;
        for(auto stone:stones){
            max_heap.push(stone);
        }
        while(max_heap.size() > 1){
            int ist=max_heap.top();
            max_heap.pop();
            int second=max_heap.top();
            max_heap.pop();
            if(second < ist) max_heap.push(ist-second);
        }
        max_heap.push(0);
        return max_heap.top();
    }
};
