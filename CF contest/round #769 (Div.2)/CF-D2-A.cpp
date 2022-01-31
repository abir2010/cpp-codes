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
set<string> distinctSubstring(string str)
{
  set<string> result ;
  for (int i = 0; i <= str.length(); i++){
    for (int j = 1; j <= str.length()-i; j++){
      result.insert(str.substr(i, j));
    }
  }
  return result;
}
bool p_check(string s){
  int f=0,q=0,cnt=0;
  for(int j=0, k=s.length()-1; j<s.length(); j++,k--){
    if(s[j] != s[k]){
      break;
    } else {
      cnt++;
    }
  }
  if(cnt==ceil(s.length()/2)){
    return cnt;
  } else {
    return 0;
  }
}

int main(){
  int z = 0;
  string s;
  getline(cin,s);
  set<string> subs = distinctSubstring(s);
  for(auto i : subs){
    // cout << i << endl;
    z = p_check(i);
  }
  if(z != 0){
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }

  return 0;
}