#include <iostream>>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

string computeEncodedName(string nameString){
    int n = nameString.size();

    vector<int> charCount(26, 0);

    for(char c : nameString){
        charCount[ c - 'a'] ++;
    }

    string half = "";
    string middle = "";

    //creating first half of the palindrom3

    for(int i = 0; i < 26; i++){
        if(charCount[i] % 2 != 0){
            middle += string(1, i + 'a');
        }

        half += string(charCount[i] / 2, i + 'a');
    }

    if(middle.size() > 1){
        return "";
    }

    string result = half;

    if(!middle.empty()){
        result += middle;
    }

    reverse(half.begin(), half.end());

    result += half;

    return result;

}

int main(){

    string namesString = "babab";

    std::cout << computeEncodedName(namesString) << std::endl;

    return 0;
}



