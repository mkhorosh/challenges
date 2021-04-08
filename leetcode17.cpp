// 08.04.21 leetcode 17. Letter Combinations of a Phone Number

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits==""){
            return {};
        }
        vector<string>ans{""};
	    vector<string> telephone{"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	    for(int i=0;i<digits.size();i++){
		    vector<string> combination;
		    for(int j = 0;j<ans.size();j++){
			    for(auto& ch : telephone[digits[i] - '2']){
				    combination.push_back(ans[j] + ch);
                }
            }
		    ans = move(combination);
	    }
	    return ans;
    }
};
