#include<bits/stdc++.h>
using namespace std;

int main()
{
  char str[100010];
  int n,i,j,f=0,cntA=0,cntD=0;
  cin >> n;
  for(i=0; i<n; i++){
    cin >> str[i];
    if(str[i] == 'A'){
      cntA++;
    } else {
      cntD++;
    }
  }
  if(cntA>cntD){
    cout << "Anton" << endl;
  } else if(cntD>cntA) {
    cout << "Danik" << endl;
  } else {
    cout << "Friendship" << endl;
  }
  return 0;
}