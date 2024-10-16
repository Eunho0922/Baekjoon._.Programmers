/*
    return 모든 사람들을 구출하기 위해 필요한 구명보트 개수의 최솟값을 
    
    1. 오름 차순으로 people 배열을 정렬
    2. people을 순회하면서 첫 번째 요소와 다음 요소를 쭉 순회하면서 첫 요소와 순회하는 요소의 합이 100이 초과되는 시점에 앞에 있는 요소를 합치고 삭제, count++;
    3. 100을 초과하는게 첫 번째 요소의 바로 다음 요소일 경우에는 첫 번째 요소를 꺼내고 배 개수 추가
    
    
*/

#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int s = 0;
    int e = people.size() - 1;
    
    sort(people.begin(), people.end());
    
    while (s <= e) {
        if (people[s] + people[e] <= limit) s++;
     
        e--;
        answer++;
    }
    
    return answer;
}