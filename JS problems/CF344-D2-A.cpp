#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,arr[100010],i,j,k,f=0,cnt=1;
  cin >> n;
  for(i=0;i<n;i++){
    cin >> arr[i];
  }

  for(i=0,j=1; i<n-1 && j<n; i++,j++){
    if(arr[i] != arr[j]){
      cnt++;
    }
  }
  cout << cnt << endl;

  return 0;
}