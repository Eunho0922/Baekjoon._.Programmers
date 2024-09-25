/*
    Return 입력한 location에 해당하는 프로세스가 몇 번째로 실행되는지 반환
    
    
    1. priorities의 길이와 같은 오름차순 알파벳 배열 생성, location - 1 인덱스에 해당하는 알파벳을 location_Alpha에 저장;
    2. 알파벳 배열의 첫번 째 요소와 그 뒤에 요소들을 전체 비교.
        2-2. 첫번 째 요소의 우선순위가 가장 크다면 priorities의, 알파벳 pop하고 실행
            2-2-1. pop하고 실행한 요소가 location_Alpha와 같다면? count 출력
        2-2. 첫번 째 요소보다 큰 요소가 있다면  priorities의, 알파벳 pop하고 다시 push_back
    2. 
*/

#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    priority_queue<int> pq;
    queue<pair<int,int>> q;
    for(auto c: priorities) pq.push(c);
    for(int i=0; i<priorities.size();i++) q.push({priorities[i],i});
    int t=1;
    
    while(!q.empty()){
        if(q.front().first==pq.top()){
            if(q.front().second==location)  return t;
            q.pop();
            pq.pop();
            t++;
        }else{
            pair<int,int> tmp=q.front();
            q.push(tmp);
            q.pop();
        }
    }
    return answer;
}