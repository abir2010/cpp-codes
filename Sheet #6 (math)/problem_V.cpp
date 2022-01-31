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
  int x1,x2,x3,x4,y1,y2,y3,y4,i,j,k;
  cin >>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
  // cout << x1 << " " << x3 << " " << x2 << " " << x4;
  if((x1 == x3) && (x2 == x4)){
    if((y3-y1) == (y4-y2)){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  } else if((y1 == y3) && (y2 == y4)){
    if((x3-x1) == (x4-x2)){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  } else if((x1==x2 && x3==x4) || (y1==y2 && y3==y4)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}