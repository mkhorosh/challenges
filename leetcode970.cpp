// leetcode 30.04.21 970. Powerful Integers

class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        vector<int> xx = build(x,bound);
        vector<int> yy = build(y, bound);
        set<int>ans;
        for(auto x : xx){
            for(auto y : yy){
                if(x+y>bound){
                    break;
                }
                ans.insert(x+y);
            }
        }
        vector<int>res(ans.begin(),ans.end());
        return res;
    }
    
    vector<int> build(int digit, int bound){
        vector<int> result;
        result.push_back(1);
        for(int i=digit; i<= bound && digit!=1 ; i*=digit){
            result.push_back(i);
        }
        return result;
    }
};
