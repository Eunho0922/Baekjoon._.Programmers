#include <vector>
#include <string>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string temp;
    
    for(int i = 0; i < myStr.size(); ++i) {
        if(myStr[i] != 'a' && myStr[i] != 'b' && myStr[i] != 'c') temp += myStr[i];
        else if(temp != "") { 
            answer.push_back(temp);
            temp = "";
        }
    }
    if(temp != "") answer.push_back(temp);
    else answer.push_back("EMPTY");
    return answer;
}
