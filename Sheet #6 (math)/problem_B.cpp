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
  ll n,i,j,k,f=0,cnt=0;
  cin >> n;
  if(n==1)
    f=1;
  for(i=2; i<=sqrt(n); i++){
    if(n%i == 0){
      f=1;
      break;
    }
  }
  if(f==1)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
  
  return 0;
}