class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()){
            return "";
        }
        string answer;
        int minlength = 200;
        for (string s : strs)
        {
            minlength = min(minlength, (int)s.length());
        }
        for (int i = 0; i < minlength; i++){
            char ch = strs[0][i];
            for(int j = 0; j<strs.size(); j++ ){
                if (strs[j][i]!=ch){
                    return answer;
                }
                
            }
            answer.push_back(ch);
        }
        return answer;
    }
};