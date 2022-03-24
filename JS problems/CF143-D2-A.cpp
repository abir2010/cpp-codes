#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define PI 3.1415926535897932384626
#define INF 0x7fffffff
#define nl "\n"
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vc vector<char>
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
  int r1,r2,c1,c2,d1,d2,a1,a2,a3,a4,sum=0,f=0;
  cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
  for(int i=1; i<10; i++){
    a1 = i;
    a2 = r1-a1;
    a3 = c1-a1;
    a4 = d1-a1;
    sum = a1+a2+a3+a4;
    if(sum == (r1+r2) && (a1!=a2)&&(a2!=a3)&&(a3!=a4)&&(a1!=a3)&&(a1!=a4)&&(a2!=a4)&&a1<10&&a2<10&&a3<10&&a4<10&&a1>0&&a2>0&&a3>0&&a4>0){
      f=1;
      break;
    }
  }
  if(f)
    cout << a1 << " " << a2 << nl << a3 << " " << a4 << nl;
  else
    cout << -1 << nl;
}
int main(){
  FASTIO;

  solve();

  return zero;
}