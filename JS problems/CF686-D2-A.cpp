#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define pb push_back
#define sz(n) (int) (n).size()
#define all(x) (x).begin(), (x).end()
#define tc(x)  int x; cin >> x; while(x--)
#define forN(x) for(int i=0;i<x;i++)
const int Monke = 0;
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
  ll t,x,cnt=0,arr[1010];
  char c[1010];
  cin >> t >> x; ll sum = x;
  // c[0] = '+'; arr[0] = x;
  for(int i=1; i<=t; i++){
    cin >> c[i] >> arr[i];
  }
  for(int i=1; i<=t; i++){
    if(c[i] == '+'){
      sum += arr[i];
    } else if(c[i] == '-') {
      if(sum >= arr[i]){
        sum -= arr[i];
      } else {
        cnt++;
      }
    }
  }
  cout << sum << " " << cnt << endl;

  return 0;
}