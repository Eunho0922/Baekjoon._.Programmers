#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    
    stringstream ss(myString);

    vector<string> words;

    string word;
    
    while (getline(ss, word, 'x')){
        words.push_back(word);
    }
    
    for (int i = 0; i < words.size(); i++) {
        answer.push_back(words[i].size());
    }
    
    if (myString[myString.size() - 1] == 'x') {
       answer.push_back(0);
    }

    return answer;
}