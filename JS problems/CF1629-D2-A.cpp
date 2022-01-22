#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n,k,i,j,f=0,sum=0,cnt=0,arr[110],brr[110];
    cin >> n >> k;
    for(i=0;i<n;i++){
      cin >> arr[i];
    }
    for(i=0;i<n;i++){
      cin >> brr[i];
    }
    i=0;
    while(i<n){
      if(k>=arr[i]){
        k+=brr[i];
        arr[i] = 99999;
        i=0;
      } else {
        i++;
      }
    }
    cout << k << endl;
  }

  return 0;
}