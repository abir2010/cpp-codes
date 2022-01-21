#include<bits/stdc++.h>
using namespace std;

int main()
{
  int i,j,k,f=0,sum=0,cnt=0,res=0,arr[6][6];
  for(i=1;i<=5;i++){
    for(j=1;j<=5;j++){
      cin >> arr[i][j];
      if(arr[i][j] == 1){
        res = (abs(3-i)+abs(3-j));
      }
    }
  }
  cout << res << endl;
  return 0;
}