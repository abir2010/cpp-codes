#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,arr[100010],i,j,k,f=0,sum=0,cnt=0;
  cin >> n;
  for(i=0;i<n;i++){
    cin >> arr[i];
  }
  for(i=0;i<n;i++){
    sum+=arr[i];
    if(sum <= -1){
      cnt++;
    }
  }
  cout << cnt << endl;

  return 0;
}