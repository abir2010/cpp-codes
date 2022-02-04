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
  int l,r,i,j;
  string s,ans;
  cin >> l >> r >> s;
  ans = s;
  const char *str = s.c_str();
  for(i=l-1,j=r-1; i<r; i++,j--){
    ans[i] = s[j];
  }
  for(i=0; i<s.length(); i++){
    cout << ans[i];
  }

  return 0;
}