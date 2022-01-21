#include<bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  int i,j,k;
  getline(cin, str);
  int cnt=str.length();
  for(i=0; i<str.length(); i++){
    for(j=0; j<str.length() && i!=j; j++){
      if((str[i]==str[j]) && (cnt!=0)){
        cnt--;
        break;
      }
    }
  }

  if(cnt%2!=0){
    cout << "IGNORE HIM!" << endl;
  } else {
    cout << "CHAT WITH HER!" << endl;
  }
  
  return 0;
}