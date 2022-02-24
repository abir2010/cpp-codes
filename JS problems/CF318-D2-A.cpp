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
  ll n,k;
  vi arr;
  cin >> n >> k;
  // ll z = (n%2==0) ? n/2 : (n/2)+1;
  // forN(z){
  //   int x=i;
  //   arr.pb((2*x)+1);
  // }
  // forN(n/2){
  //   int y=i+1;
  //   arr.pb(2*y);
  // }
  if(n%2 == 0){
    if((n/2) >= k){
      cout << (2*k)-1 << nl;
    } else {
      cout << (k-(n/2))*2 << nl;
    }
  } else{
    if(((n+1)/2) >= k){
      cout << (2*k)-1 << nl;
    } else {
      cout << (k-((n+1)/2))*2 << nl;
    }
  }
}
int main(){
  FASTIO;

  solve();

  return zero;
} 