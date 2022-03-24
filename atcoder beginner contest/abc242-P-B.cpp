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
vs x;
void permutations(string str, int i, int n){
  if (i == n - 1){
    x.pb(str);
    return;
  }
  for (int j = i; j < n; j++){
    swap(str[i], str[j]);
    permutations(str, i + 1, n);
    swap(str[i], str[j]);
  }
}
string convertToString(char* a, int size)
{
    int i;
    string s = "";
    for (i = 0; i < size; i++) {
        s = s + a[i];
    }
    return s;
}
void solve(){
  string s;
  char ans[100];
  cin >> s;
  permutations(s,0,s.length());
  for(int i=0; i<SZ(x); i++){
    char a[x[i].length()];
    strcpy(a,x[i].c_str());
    char b[x[i+1].length()];
    strcpy(b,x[i+1].c_str());
    int s1=x[i].length(), s2=x[i+1].length();
    if(lexicographical_compare(a,a+s1, b,b+s2)){
      strcpy(ans,a);
    } else {
      strcpy(ans,b);
    }
  }
  convertToString(ans,sizeof(ans) / sizeof(char));
  cout << ans << nl;
}
int main(){
  FASTIO;

  solve();

  return zero;
}