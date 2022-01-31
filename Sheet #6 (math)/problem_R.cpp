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
  ll x1,y1,x2,y2;
  cin >> x1 >> y1 >> x2 >> y2;
  double ans = sqrt((pow((x2-x1),2)+pow((y2-y1),2)));
  cout << fixed << setprecision(9) << ans << endl;
  return 0;
}