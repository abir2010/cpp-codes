#include<bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  int i,j,k,cnt=0;
  cin >> str;
  str = 'a'+str;
  for(i=0;i<(str.size()-1);i++){
    int temp = abs(str[i]-str[i+1]);
    if(temp>13){
      cnt+=(26-temp);
    } else {
      cnt+=temp;
    }
  }
  cout << cnt;

  return 0;
}