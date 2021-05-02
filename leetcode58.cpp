// leetcode 02.05.21 58. Length of Last Word

class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size()==1 && s[0] == ' '){
            return 0;
        }
        // remove ending spaces
        while(s[s.size()-1]==' '){
            s=s.substr(0,s.size()-1);
            if(s.size()==1 && s[0] == ' '){
            return 0;
        }
        }
        // remove leading spaces
        while(s[0]==' '){
            s=s.substr(1,s.size());
            if(s.size()==1 && s[0] == ' '){
            return 0;
        }
        }
        while(s.find(' ')!=string::npos){
            s = s.substr(s.find(' ')+1,s.size());
        }
        return s.size();
    }
};
