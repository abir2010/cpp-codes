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
  ll l,r,x,a,cnt1=0,cnt2=0,sum1=0,sum2=0,sum=0;
  cin >> l >> r >> x;
  ll mx = max(l,r), mn = min(l,r);
  cnt1 = mx/x;
  cnt2 = (mn-1)/x;
  sum1 = x*((cnt1*(cnt1+1))/2);
  sum2 = x*((cnt2*(cnt2+1))/2);
  sum = sum1-sum2;
  
  cout << sum << endl;
  return zero;
}