#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for (int i = 0; i < myString[i]; ++i) {
        if (myString[i] > 65 && myString[i] <= 90) {
            answer += myString[i] + 32;
        } else if (myString[i] == 65 || myString[i] == 97) {
            answer += 'A';
        } else {
            answer += myString[i];
        }
    }
    return answer;
}