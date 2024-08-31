#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(string my_string, string is_suffix) {
    vector<string> v;
    string str = "";
    
    if (my_string.size() < is_suffix.size()) 
        return 0;
    
    for (int i = 0; i < my_string.size(); ++i) {
        for (int j = i; j < my_string.size(); ++j) {
            str += my_string[j];
        }
        v.push_back(str);
        str = "";
    }
    
    if (find(v.begin(), v.end(), is_suffix) != v.end()) {
        return 1;
    }
         
    return 0;
}