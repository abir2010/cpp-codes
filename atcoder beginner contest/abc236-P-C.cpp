#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long n,m,i,j,f=0;
  string s[100010],t[100010];
  cin >> n >> m;
  for(i=0;i<n;i++){
    cin >> s[i];
  }
  for(i=0;i<m;i++){
    cin >> t[i];
  }
  for(i=0;i<n;i++){
    f=0;
    for(j=0;j<m;j++){
      if(t[j] == s[i]){
        f=1; break;
      }
    }
    if(f==1){
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}