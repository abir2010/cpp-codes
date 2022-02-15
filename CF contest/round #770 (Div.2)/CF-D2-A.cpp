#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define pb push_back
#define sz(n) (int) (n).size()
#define all(x) (x).begin(), (x).end()
#define tc(x)  int x; cin >> x; while(x--)
#define forN(x) for(int i=0;i<x;i++)
const int zero = 0;
bool isOdd(int n)	{	return n%2 != 0; }
bool isPostive(int n)	{	return n>0; }
bool isEqual(double a, double b) { return abs(a-b) < 2;	}
void printVec(vector<int> v2, string s = ""){
  cout << s;
  for(int i = 0; i < sz(v2) ; i++)
    cout << v2[i] << " ";
  cout << "\n";
}
int main() {
  tc(x){
    int n,k,flag = 0;
    cin >> n >> k;
    string s;
    s.clear();
    cin >> s;
    for(int i=0,j=n-1; i<n; i++,j--){
      if(s[i]!=s[j]){
        flag = 1; break;
      }
    }
    if(flag==1){
      if(k > 0){
        cout << 2 << endl;
      } else if(k==0) {
        cout << 1 << endl;
      }
    } else {
      cout << 1 << nl;
    }
  }
  return zero;
}