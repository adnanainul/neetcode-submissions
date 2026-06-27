class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        priority_queue<int>pq;
        for(int i:stones){
            pq.push(i);
        }
        while(pq.size()>1){
            //take the last and second last ele
            int last=pq.top();
            pq.pop();
            int lastlast=pq.top();
            pq.pop();
            if(last!=lastlast){
                pq.push(last-lastlast);
            }
        }
        return pq.empty()? 0:pq.top();
    }
};
