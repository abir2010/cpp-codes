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
  int n,arr[33][33] = {0,0}; cin >> n;
  for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
      arr[i][j] = 1;
    }
  }
  for(int i=2;i<n;i++){
    for(int j=1;j<n;j++){
      arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
    
  return 0;
}