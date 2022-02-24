#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define PI 3.1415926535897932384626
#define INF 0x7fffffff
#define nl "\n"
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define pb push_back
#define SZ(n) (int) (n).size()
#define all(x) (x).begin(), (x).end()
#define SORT(x) sort(all(x)) 
#define REVERSE(x) reverse(all(x)) 
#define tc(x)  int x; cin >> x; while(x--)
#define forN(x) for(int i=0;i<x;i++)
const int zero = 0;
bool isOdd(int n)	{	return n%2 != 0; }
bool isPostive(int n)	{	return n>0; }
int max_3(int a, int b, int c){ return max(a,max(b,c)); }
int min_3(int a, int b, int c){ return min(a,min(b,c)); }
void printVec(vector<int> v2, string s = ""){
  cout << s;
  for(int i = 0; i < SZ(v2) ; i++)
    cout << v2[i] << " ";
  cout << "\n";
}
int comp_double(double a, double b){
  if(fabs(a-b) <= 1e-10)
    return 0;
  return a<b ? -1 : 1;
}
void solve(){
  int n,cnt=0; cin >> n;
  vi arr;
  forN(n){
    int x; cin >> x; arr.pb(x);
  }
  for(int i=1; i<n-1; i++){
    if((arr[i]<arr[i-1] && arr[i]<arr[i+1]) && n>4){
      if(arr[i+1] < arr[i-1]){
        arr[i] = arr[i-1];
        cnt++;
      } else if(arr[i+1] > arr[i-1]) {
        arr[i] = arr[i+1];
        cnt++;
      } else {
        if(arr[i-2] != arr[i-1]){
          arr[i] = arr[i-1];
          cnt++;
        }
      }
    } else if(n==4){
      if(arr[i]<arr[i-1] || arr[i]<arr[i+1]){
        if(arr[i+1] <= arr[i-1]){
          arr[i] = arr[i-1];
          cnt++;
        } else if(arr[i+1] > arr[i-1]) {
          arr[i] = arr[i+1];
          cnt++;
        }
      }
    } else if(n==3){
      if(arr[i]<arr[i-1] && arr[i]<arr[i+1]){
        continue;
      } else {
        cnt++;
      }
    } else {
      continue;
    }
  }
  // for(int i=1; i<n-1; i++){
  //   if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
  //     arr[i] = min(arr[i+1],arr[i-1]);
  //     cnt++;
  //   }
  // }
  cout << cnt << nl;
  printVec(arr);
}
int main(){
  FASTIO;

  tc(t){
    solve();
  }

  return zero;
}