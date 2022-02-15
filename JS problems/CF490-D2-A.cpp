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
  int n,cone=0,ctwo=0,cthree=0,b[3]={1,2,3};
  cin >> n;
  vi arr;
  for(int i=0; i<n; i++){
    int t;cin >> t;arr.pb(t);
  }
  for(int i=0; i<sz(arr); i++){
    if(arr[i] == 1){
      cone++;
    } else if(arr[i] == 2){
      ctwo++;
    } else{
      cthree++;
    }
  }
  int w = min(cone,min(ctwo,cthree));
  cout << w << endl;
  for(int k=0; k<w; k++){
    for(int i=0; i<3; i++){
      for(int j=0; j<sz(arr); j++){
        if(b[i] == arr[j]){
          cout << j+1 << " ";
          arr[j] = 0; break;
        }
      }
    } cout << endl;
  }

  return 0;
}