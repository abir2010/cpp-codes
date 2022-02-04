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
  int t,n,x,z,p,i=0,ans=0;
  vs arr;
  cin >> t >> n >> x;
  if(t==1){
    while(n%10 != n){
      p = n%10;
      ans += (p*pow(x,i));
      n/=10; i++;
      // cout << "n : " << n << " x : " << x << " i : " << i << endl;
    } ans += ((n%10)*pow(x,i));
    cout << ans << endl;
  } else {
    while(n!=0){
      if(n%x < n){
        string c = to_string(n%x);
        arr.pb(c);
      }
      z = n;
      n/=x;
    } arr.pb(to_string(z));
    for(int i = 0; i<sz(arr); i++){
      if(stoi(arr[i]) > 9){
        arr[i] = 2;
      }
      cout << arr[i];
    }
  }

  return 0;
}
//unsolved