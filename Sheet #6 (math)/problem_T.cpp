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
  ll x,y,r,n,a[110],b[110];
  cin >> x >> y >> r >> n;
  for(int i=0; i<n; i++){
    cin >> a[i] >> b[i];
  }
  for(int i=0; i<n; i++){
    double dis = 0;
    if((sqrt((pow((a[i]-x),2) + pow((b[i]-y),2)))) <= r){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}