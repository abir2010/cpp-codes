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
  ll x[5],y[5],i,j;
  for(i=1; i<=3; i++){
    cin >> x[i] >> y[i];
  }
  ll f1 = (x[3]*y[2]) - (x[2]*y[3]);
  ll f2 = (x[1]*y[3]) - (x[3]*y[1]);
  ll f3 = (x[2]*y[1]) - (x[1]*y[2]);
  if((f1+f2+f3) == 0){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}