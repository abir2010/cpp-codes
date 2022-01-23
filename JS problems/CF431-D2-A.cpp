#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,b,c,d,i,j,k,f=0,cnt=0,sum=0;
  string str;
  cin >> a >> b >> c >> d >> str;
  for(i=0;i<str.size();i++){
    if(str[i]=='1'){
      sum+=a;
    } else if(str[i]=='2'){
      sum+=b;
    } else if(str[i]=='3'){
      sum+=c;
    } else if(str[i]=='4'){
      sum+=d;
    }
  }
  cout << sum << endl;

  return 0;
}