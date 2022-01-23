#include<bits/stdc++.h>
using namespace std;
int swap(int *a, int *b)
{
  int temp;
  temp = *b;
  *b = *a;
  *a = temp;
}
int main()
{
  int n,arr[1010],i,j,k,f=0,cnt1=0,cnt2=0;
  cin >> n;
  for(i=0;i<n;i++){
    cin >> arr[i];
  }
  // for(i=0;i<n;i++){
  //   for(j=0;j<n-1;j++){
  //     if(arr[j]>arr[j+1]){
  //       swap(arr[j],arr[j+1]);
  //     }
  //     // cout << j << " ";
  //   }
  //   // cout << i << " ";
  // }
  

  return 0;
}