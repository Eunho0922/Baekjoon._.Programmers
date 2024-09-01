#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    int count = 0;
    int n;

    
    do {
        n = arr.size();
        count += 1;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] >= 50 && arr[i] % 2 == 0) {
                arr[i] /= 2;
            } else if (arr[i] < 50 && arr[i] % 2 != 0) {
                arr[i] = arr[i] * 2 + 1;
            } else {
                n -= 1;
            }
        }
    } while (n != 0);
    answer = count - 1;

    return answer;
}