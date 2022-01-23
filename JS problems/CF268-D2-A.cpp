#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t,h[110],a[110],i,j,k,f=0,cnt=0,sum=0;
  cin >> t;
  for(i=0;i<t;i++){
    cin >> h[i] >> a[i];
  }
  for(i=0;i<t;i++){
    for(j=0;j<t;j++){
      if(h[i]==a[j]){
        cnt++;
      }
    }
  }
  cout << cnt << endl;

  return 0;
}