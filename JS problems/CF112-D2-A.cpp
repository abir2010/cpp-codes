#include<bits/stdc++.h>
using namespace std;
string lower(string str)
{
  for(int i=0; i<str.length(); i++){
    str[i] = tolower(str[i]);
  }
  return str;
}
int main()
{
  string str1, str2;
  int i,j,k,f=0,cnt=0,res;
  cin >> str1 >> str2;
  
  res = lower(str1).compare(lower(str2));

  if(res == 0){
    cout << 0 << endl;
  } else if(res > 0){
    cout << 1 << endl;
  } else {
    cout << -1 << endl;
  }

  return 0;
}