#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long n,i,sum=0,arr[1000010];
  cin >> n;
  for(i=0;i<((4*n)-1);i++){
    cin >> arr[i];
    sum+=arr[i];
  }
  long long ans = (4*((n*(n+1))/2))-sum;
  cout << ans << endl;

  return 0;
}