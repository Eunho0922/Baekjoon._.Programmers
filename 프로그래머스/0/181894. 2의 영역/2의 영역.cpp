#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int idx1 = -1;
    int idx2 = -1;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == 2) {
            idx1 = i;
            break;
        }
    }
    
    for (int i = arr.size() - 1; i > 0; --i) {
        if (arr[i] == 2) {
            idx2 = i;
            break;
        }
    }
    
    if (idx1 == -1 && idx2 == -1) {
        answer.push_back(-1);
        return answer;
    }
    
    for (int i = idx1; i <= idx2; ++i) {
        answer.push_back(arr[i]);
    }
    
    return answer;
}