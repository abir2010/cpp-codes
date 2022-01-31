#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define pb push_back
#define sz(n) (int) (n).size()
#define all(x) (x).begin(), (x).end()
void printVec(vector<int> v2, string s = ""){
  cout << s;
  for(int i = 0; i < sz(v2) ; i++)
    cout << v2[i] << " ";
  cout << "\n";
}

int main(){
  string str = {};
  int i,j,k,f=0;
  cin >> str;
  for(i=str.length(); i!=0; i--){
    if(str[i] == 'a'){
      f=1;
    } else{
      break;
    }
  }
  for(i=0,j=str.length(); i<str.length(); i++,j--){
    if(str[i] != str[j]){
      f=0;
    }
  }
  if(f==1){
    cout << "Yes" << endl;
  } else{
    cout << "No" << endl;
  }

  return 0;
}