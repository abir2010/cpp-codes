#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,arr[1010][3],f=0,cnt=0,sum,i,j,k;
  cin >> n;
  for(i=0;i<n;i++){
    sum=0;
    for(j=0;j<3;j++){
      cin >> arr[i][j];
      sum+=arr[i][j];
    }
    if(sum>=2){
      cnt++;
    }
  }
  cout << cnt << endl;

  return 0;
}