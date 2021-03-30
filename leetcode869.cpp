// 21.03.21 leetcode 869. Reordered Power of 2

class Solution {
public:
    bool reorderedPowerOf2(int N) {
        vector<int> n = countDigits(N);
        for(int i=0;i<31;i++){
            vector<int>two=countDigits(pow(2,i));
            bool flag = 1;
            for(int j = 0;j<10;j++){
                if(n[j]!=two[j]){
                    flag = 0;
                }
            }
            if(flag){
                return true;
            }
        }
        return false;
    }
    
    vector<int> countDigits(int n){
        vector<int>digits(10,0);
        while(n!=0){
            digits[n%10]++;
            n=n/10;
        }
        return digits;
    }
};