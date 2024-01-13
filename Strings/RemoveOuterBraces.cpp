class Solution {
public:
    string removeOuterParentheses(string s) {
        std::stack<char> sre;
        std::string ans;

        for(auto yu : s){
            if(yu == '('){
                if(sre.size() > 0){
                    ans+='(';
                }
                sre.push('(');
            }
            else{
                if(sre.size() > 1){
                    ans+=')';
                }
                sre.pop();
            }
        }

        return ans;

    }
};