// 19.03.21 leetcode 841. Keys and Rooms

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        set <int> visited;
        visited.insert(0);
        stack <int> s;
        s.push(0);
        while(!s.empty()){
            vector<int>keys = rooms[s.top()];
            s.pop();
            for(auto k : keys){
                if(!visited.count(k)){
                    visited.insert(k);
                    s.push(k);
                }
            }
        }
        return (visited.size() == rooms.size());
    }
};
