#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n,i,arr[100010],sum=0,f=0,res;
  cin >> n;
  for(i=0; i<n; i++){
    cin >> arr[i];
  }
  sort(arr, arr + n);
  for (i=0; i<n; i++){
    sum+=arr[i];
  }
  for (i=0; i<n; i++){
    if((arr[i]*n)>sum){
      res=arr[i];
      break;
    }
  }
  cout << res << endl;
  return 0;
}