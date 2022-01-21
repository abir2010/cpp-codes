#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, n, i, f=0, cnt=1;
  cin >> a >> b;
  while(a<b){
    if((a*3)<=(b*2)){
      a*=3;
      b*=2;
      cnt++;
    } else {
      break;
    }
  }
  cout << cnt << endl;

  return 0;
}