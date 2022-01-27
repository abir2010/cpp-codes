#include<bits/stdc++.h>
using namespace std;
int main()
{
  string operations[101];
  int i=0,j,k,f=0,cnt=0;
  for(int i=0; i<operations.size(); i++){
    if(operations[i][1] == '+'){
      cnt++;
    } else {
      cnt--;
    }
  }
  cout << cnt << endl;

  return 0;
}