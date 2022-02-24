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
  int n, f=0, f1=0, f2=0, cnt=0; cin >> n;
  char arr[n][n];
  string v;
  int frq[27] = {0};
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cin >> arr[i][j];
    }
  }

  char ch = arr[0][0];
  char ch2 = arr[0][1];
  for(int i=0; i<n; i++){
    v.pb(arr[i][i]);
  }
  for(int i=0,j=n-1; j>=0 && i<n ; i++,j--){
    v.pb(arr[i][j]);
  }
  for(int i=0; i<SZ(v); i++){
    if(v[i] != ch){
      f=1;break;
    }
  }
  for(int i=0; i<n; i++){
    arr[i][i] = ch2;
  }
  for(int i=0,j=n-1; j>=0 && i<n ; i++,j--){
    arr[i][j] = ch2;
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(arr[i][j] != ch2){
        f1=1; break;
      } else if(arr[i][j] == ch){
        cnt++;
      }
    }
  }
  if(f==1 || f1==1 || cnt==(n*n)){
    cout << "NO" << nl;
  } else {
    cout << "YES" << nl;
  }
}
int main(){
  FASTIO;

  solve();

  return zero;
}