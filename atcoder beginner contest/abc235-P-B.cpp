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
  int n,arr[100010],i,j,k,f=0,cnt=0;
  cin >> n;
  for(i=0;i<n;i++){
    cin >> arr[i];
  }
  int ans = arr[0];
  for(i=1;i<n;i++){
    if(arr[i]>arr[i-1]){
      ans = arr[i];
    } else {
      break;
    }
  }
  cout << ans << endl;
  
  return 0;
}