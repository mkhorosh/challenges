// 05.04.21 775. Global and Local Inversions

class Solution {
public:
    bool isIdealPermutation(vector<int>& A) {
        int max = -1;
        if(A.size()<=2){
            return true;
        }
        for (int i = 0; i<A.size()-2; i++) {
            max = (A[i]>max) ? A[i] : max;
            if (max > A[i+2]) {
                return false;
            }
        }
        return true;
    }
};
