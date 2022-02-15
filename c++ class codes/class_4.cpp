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
void roundd(double &num);
int main(){
  double i = 100.4;

  cout << i << " rounded is ";
  roundd(i);
  cout << i << "\n";

  i = 10.9;
  cout << i << " rounded is ";
  roundd(i);
  cout << i << "\n";

  return 0;
}
void roundd(double &num){
  double frac,val;
  frac = modf(num, &val);

  if(frac < 0.5){
    num = val;
  }
  else{
    num = val+1.0;
  }
}