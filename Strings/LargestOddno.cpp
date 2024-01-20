class Solution {
public:
    string largestOddNumber(string num) {
        int stop = -1;
        int n = num.size();

        for(int i = 0; i <= n; i++){
            if((num[i]-'0') % 2 != 0){
                stop = i;
            }
        }

        string res = "";

        if(stop == -1){
            return res;
        }
        else{
            res = num.substr(0, stop+1);;
            return res;
        }
    }
};