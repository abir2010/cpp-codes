#include<bits/stdc++.h>
using namespace std;

string lower(string str)
{
  for(int i=0; i<str.length(); i++){
    str[i] = tolower(str[i]);
  }
  return str;
}
string upper(string str)
{
  for(int i=0; i<str.length(); i++){
    str[i] = toupper(str[i]);
  }
  return str;
}
int main()
{
  string str;
  int i,j,k,f=0,low_cnt=0,up_cnt=0;
  getline(cin,str);
  for(i=0; i<str.length(); i++){
    if((str[i]+0)>=97 && (str[i]+0)<=122){
      low_cnt++;
    } else {
      up_cnt++;
    }
  }
  if(up_cnt<=low_cnt){
    cout << lower(str) << endl;
  } else {
    cout << upper(str) << endl;
  }

  return 0;
}