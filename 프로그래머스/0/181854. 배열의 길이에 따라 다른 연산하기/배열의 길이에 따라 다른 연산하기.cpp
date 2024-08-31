#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr.size() % 2 == 0 && i % 2 != 0)
            arr[i] += n;
        else if (arr.size() % 2 != 0 && i % 2 == 0)
            arr[i] += n;
    }
    answer = arr;
    return answer;
}