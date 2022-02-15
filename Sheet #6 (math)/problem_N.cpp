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
int main(){
  ll t,x,z,p,ans=0,q;
  string n;
  vs arr;
  cin >> t >> n >> x;
  if(t==1){
    reverse(all(n));
    for(int i=0; i<n.length(); i++){
      if(n[i] >= 'A' && n[i] <= 'Z'){
        q=n[i] - 55;
      } else if(n[i] >= '0' && n[i] <= '9'){
        q=n[i] - '0';
      }
      // cout << q << endl;
      ans += (q*pow(x,i));
      // cout << "i : " << i << " ans : " << (n[i]*pow(x,i)) << " ans : " << ans << endl;
    }
    cout << ans << endl;
  } else {
    int m = stoi(n);
    while(m!=0){
      if(m%x < m){
        string c = to_string(m%x);
        arr.pb(c);
      }
      z = m;
      m/=x;
    } arr.pb(to_string(z));
    for(int i = sz(arr)-1; i>=0; i--){
      if(stoi(arr[i]) > 9){
        arr[i] = (stoi(arr[i]) + 7) + '0';
      }
      cout << arr[i];
    }
  }

  return 0;
}