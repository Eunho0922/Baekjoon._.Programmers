#include <iostream>
#include <vector>
using namespace std;

int n, x;
vector<int> v; // 뽑기번호, 순서

int main(int argc, char **argv){
  scanf("%d",&n);

  for(int i=1; i<=n; i++){
    scanf("%d", &x);
    v.insert(v.begin() + x, i); // 어떤 위치에, 어떤 값 을 넣을지
  }


  for(int i=n-1; i>= 0; i--){ // 역순 출력
    cout << v[i] << " ";
  }

  return 0;
}