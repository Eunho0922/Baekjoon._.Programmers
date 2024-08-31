#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    
    reverse(my_string.begin() + s, my_string.begin() + e + 1);
    answer = my_string;
    return answer;
}