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
  vl v;
  int i,j,k,n,x,l,r;
  cin >> n;
  for(i=0;i<n;i++){
    ll in;cin >> in;
    v.pb(in);
  }
  cin >> x >> l >> r;
  v.erase(v.begin()+(x-1));
  v.erase(v.begin()+l-1,v.begin()+r-1);
  cout << v.size() << endl;
  for(i=0;i<(int)v.size();i++){
    cout << v[i] << " ";
  }
  return 0;
}