#include<bits/stdc++.h>
using namespace std;

int main()
{
  int arr[5],cnt=0;
  for(int i=0;i<4;i++){
    cin >> arr[i];
  }
  for(int i=0;i<4;i++){
    for(int j=0;j<4 && i!=j;j++){
      if(arr[i]==arr[j]){
        arr[j] = -1;
        cnt++;
      }
    }
  }
  cout << cnt << endl;

  return 0;
}