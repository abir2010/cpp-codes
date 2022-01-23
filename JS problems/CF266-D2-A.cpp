#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,j,k,cnt=0,f=0;
  char str[100];
  cin >> n;
  for(i=0;i<n;i++){
    cin >> str[i];
  }
  for(i=0;i<n;i++){
    if(str[i]==str[i+1]){
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}