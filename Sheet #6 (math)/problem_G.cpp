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
  ll n,i,j,sum=0;
  vi a;
  cin >> n;
  ll num = sqrt(n);
  // cout << num << endl;
  for(i=1;i<=num;i++){
    if((n)%i == 0){
      // cout << "i :" << i << endl;
      a.push_back(i);
      if(i != (n/i)){
        // cout << "num/i :" << n/i << endl;
        a.push_back(n/i);
      } else {
        continue;
      }
    }
  }
  // printVec(a,"printing vector : ");
  for(int i = 0; i < sz(a) ; i++){
    sum += a[i];
  }
  cout << sum << " ";
  return 0;
}