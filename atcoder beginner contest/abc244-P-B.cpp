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
  int n;
  vector<char> s;
  cin >> n;
  forN(n){
    char a;
    cin >> a;
    s.pb(a);
  }
  int r = 0, x = 0, y = 0;
  forN(n){
    if(s[i]=='R'){
      r+=1;
    }
    if(r>3){
      r=0;
    }
    if(s[i]=='S' && r==0){
      x+=1;
    } else if(s[i]=='S' && r==1){
      y-=1;
    } else if(s[i]=='S' && r==2){
      x-=1;
    } else if(s[i]=='S' && r==3){
      y+=1;
    }
  }
  cout << x << " " << y << nl;
}
int main(){
  FASTIO;

  solve();

  return zero;
}