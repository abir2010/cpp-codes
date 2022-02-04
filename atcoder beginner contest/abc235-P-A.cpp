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
void printVec(vector<int> v2, string s = ""){
  cout << s;
  for(int i = 0; i < sz(v2) ; i++)
    cout << v2[i] << " ";
  cout << "\n";
}
int main(){
  int n; cin >> n;
  int x = n/100;
  int y = (n-(x*100))/10;
  int z = ((n-(x*100))-(y*10));
  int ans = (x*100)+(y*100)+(z*100)+(x*10)+(y*10)+(z*10)+x+y+z;
  cout << ans << endl;
  return 0;
}