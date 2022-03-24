#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define PI 3.1415926535897932384626
#define INF 0x7fffffff
#define nl "\n"
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define pb push_back
#define SZ(n) (int) (n).size()
#define all(x) (x).begin(), (x).end()
#define SORT(x) sort(all(x)) 
#define REVERSE(x) reverse(all(x)) 
#define tc(x)  int x; cin >> x; while(x--)
#define forN(x) for(int i=0;i<x;i++)
const int zero = 0;
bool isOdd(int n)	{	return n%2 != 0; }
bool isPostive(int n)	{	return n>0; }
int max_3(int a, int b, int c){ return max(a,max(b,c)); }
int min_3(int a, int b, int c){ return min(a,min(b,c)); }
void printVec(vector<int> v2, string s = ""){
  cout << s;
  for(int i = 0; i < SZ(v2) ; i++)
    cout << v2[i] << " ";
  cout << "\n";
}
int comp_double(double a, double b){
  if(fabs(a-b) <= 1e-10)
    return 0;
  return a<b ? -1 : 1;
}
void solve(){
  ll n,cnt=0,cnt2=0;
  vi a,b;
  cin >> n;
  forN(n){
    ll x; cin >> x; a.pb(x);
  }
  forN(n){
    ll x; cin >> x; b.pb(x);
  }
  forN(n){
    if(a[i] == b[i]){
      cnt++;
    }
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(a[i] == b[j] && i!=j){
        cnt2++;
      }
    }
  }
  cout << cnt << nl << cnt2 << nl;
}
int main(){
  FASTIO;

  solve();

  return zero;
}