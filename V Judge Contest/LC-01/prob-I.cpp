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
bool isEqual(int a, int b) { return abs(a-b) < 2;	}
void printVec(vector<int> v2, string s = ""){
  cout << s;
  for(int i = 0; i < sz(v2) ; i++)
    cout << v2[i] << " ";
  cout << "\n";
}
int main(){
  int t;cin >> t;
  vi arr;
  for(int i=1; i<=1666; i++){
    if(i%3 != 0 && (i-((i/10)*10)) != 3){
      arr.pb(i);
    }
  }
  while(t--){
    int n;cin >> n;
    cout << arr[n-1] << endl;
  }

  return 0;
}