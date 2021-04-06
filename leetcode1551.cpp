// 06.04.21 leetcode 1551. Minimum Operations to Make Array Equal

class Solution {
public:
    int minOperations(int n) {
        int ans=0;
        int plus = 1;
        for (int i=1;i<n;i++){
            if(i>1 && i%2==1){
                plus++;
            }
            ans += plus;   
        }
        return ans;
    }
};
