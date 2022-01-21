#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,h,i,f=0,cnt=0,arr[1010];
  cin >> n >> h;
  for(i=0; i<n; i++){
    cin >> arr[i];
    if(arr[i] <= h){
      cnt++;
    } else {
      cnt+=2;
    }
  }

  cout << cnt << endl;

  return 0;
}