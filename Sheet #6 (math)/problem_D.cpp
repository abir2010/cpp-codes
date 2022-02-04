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
  ll a,b,q;
  cin >> a >> b >> q;
  if(q%3 == 0){
    cout << (a^b) << endl;
  } else if(q%3 == 1){
    cout << a << endl;
  } else if(q%3 == 2){
    cout << b << endl;
  }

  return 0;
}