#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int result = 0;
    int count;
    do {
        count = num_list.size();
        result += 1;
        for (int i = 0; i < num_list.size(); i++) {
        if (num_list[i] == 1) {
            count -= 1;
        } else if (num_list[i] % 2 == 0) {
            num_list[i] /= 2;
            answer += 1;
        } else {
            num_list[i] = (num_list[i] - 1) / 2;
            answer += 1;
        }
        }
    } while(count != 0);
    
    return answer;
}