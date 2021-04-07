// 07.04.21 1704. Determine if String Halves Are Alike

class Solution {
public:
    bool halvesAreAlike(string s) {
        return countVowels(s.substr(0,s.size()/2))==countVowels(s.substr(s.size()/2,s.size()/2));
    }
    
    int countVowels(string s){
        set<char, greater<char> > set={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int counter = 0;
        for(int i = 0;i<s.size();i++){
            if(set.find(s[i]) != set.end()){
                counter++;
            }
        }
        return counter;
    }
};
