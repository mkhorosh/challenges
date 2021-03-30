// 30.03.21 leetcode 354. Russian Doll Envelopes

class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        int n = envelopes.size();
        sort(envelopes.begin(), envelopes.end());
        vector<int>ls(n+1,1); // longest subsecuence
        int ans = 1;
        for (int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if (envelopes[i][0]>envelopes[j][0] && envelopes[i][1]>envelopes[j][1] && ls[i]<ls[j]+1){
                    ls[i]=ls[j]+1;
                }
                if (ans < ls[i]){
                    ans = ls[i];
                }
            }
        }
        return ans;
    }
};
