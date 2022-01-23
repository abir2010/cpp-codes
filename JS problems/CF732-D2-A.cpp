#include<bits/stdc++.h>
using namespace std;

int main()
{
  int k,r,i,j,f=0,cnt=1;
  cin >> k >> r;
  while(cnt!=0){
    if((((k*cnt)%10)/(float)r==1.00) || ((k*cnt)%10==0)){
      break;
    } else {
      cnt++;
    }
  }
  cout << cnt << endl;

  return 0;
}