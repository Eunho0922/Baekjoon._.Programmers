/*
    배열 arr에서 연속적으로 나타나는 숫자는 제거하고 남은 수들을 반환
    1. arr 배열을 순회한다.
    2. 요소를 새로운 배열에 추가한다. 단 해당하는 요소와 이미 추가되어 있던 마지막 요소와 다를 경우만.
*/

#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)  {
    vector<int> answer;

    answer.push_back(arr[0]);
    
    for (int i = 1; i < arr.size(); ++i) {
        if (answer[answer.size() - 1] != arr[i]) {
            answer.push_back(arr[i]);
        }
    }

    return answer;
}