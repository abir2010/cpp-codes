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
bool isEqual(double a, double b) { return abs(a-b) < 2;	}
void printVec(vector<int> v2, string s = ""){
  cout << s;
  for(int i = 0; i < sz(v2) ; i++)
    cout << v2[i] << " ";
  cout << "\n";
}
int main() {
  ll l,r,x,a,cnt=0;
  double sum=0;
  cin >> l >> r >> x;
  if(l%x == 0 && r%x == 0){
    cnt = 1;
  }
  cnt += ((r-l)/x);
  for(int i=l; i<=r; i++){
    if(i%x == 0){
      a = i; break;
    }
  }
  // cout << cnt << a << x << endl;
  sum = (cnt*((2*a)+((cnt-1)*x))/2);
  cout << sum << endl;
  return 0;
}
// unsolved