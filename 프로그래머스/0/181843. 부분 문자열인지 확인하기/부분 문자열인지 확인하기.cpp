#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(string my_string, string target) {
    if (my_string.find(target) == string::npos) {
        return 0;
    }
    return 1;
}