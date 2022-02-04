#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s,t;
  int cnt=1,i=0;
  // cin >> s >> t;
  getline(cin,s);
  getline(cin,t);
  while(i<s.size()){
    for(int j=i;j<t.size();j++){
      if(s[i]==t[j]){
        cnt++;
        i++;
        break;
      } else {
        continue;
      }
    }
  }
  cout << cnt << endl;

  return 0;
}
//unsolved