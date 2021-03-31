// 31.03.21 leetcode 66. Plus One

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits[digits.size()-1] < 9){
            digits[digits.size()-1]++;
            return digits;
        }
        if(digits.size()==1 && digits[digits.size()-1] == 9){
            digits[0]=0;
            digits.insert(digits.begin(),1);
            return digits;
        }
        digits[digits.size()-1]=0;
        int i = digits.size()-2;
        while(digits[i]==9 && i>0){
            digits[i]=0;
            i--;
        }
        if(i == 0 && digits[i]==9){
            digits[i]=0;
            digits.insert(digits.begin(),1);
            return digits;
        }
        digits[i]++;
        return digits;
    }
};
