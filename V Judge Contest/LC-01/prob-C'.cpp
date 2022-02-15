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
bool isOdd(int n)	{	return n%2 != 0; }
bool isPostive(int n)	{	return n>0; }
bool isEqual(int a, int b) { return abs(a-b) < 2;	}
void printVec(vector<int> v2, string s = ""){
  cout << s;
  for(int i = 0; i < sz(v2) ; i++)
    cout << v2[i] << " ";
  cout << "\n";
}
int main(){
  ll n,m;
  vl v,w;
  cin >> n;
  for(int i=0; i<n; i++){
    ll in; cin >> in;
    v.pb(in);w.pb(in);
  }
  cin >> m;
  while(m--){
    int t,l,r;
    cin >> t >> l >> r;
    if(t==1){
      ll sum1 = 0;
      for(int i=l-1; i<r; i++){
        sum1 += v[i];
      }
      cout << sum1 << endl;
    } else if(t==2){
      ll sum2 = 0;
      sort(all(w));
      for(int i=l-1; i<r; i++){
        sum2 += w[i];
      }
      cout << sum2 << endl;
    }
  }

  return 0;
}
// unsolved