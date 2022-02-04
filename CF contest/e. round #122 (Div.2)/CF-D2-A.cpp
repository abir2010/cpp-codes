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
int last_digit(int s){
  return (s-((s/10)*10));
}
int main(){
  int t;
  cin >> t;
  while(t--){
    int n,i,p,q;
    cin >> n;
    int f = floor(n/7);
    int c = ceil((double)n/7);
    if(n%7 == 0){
      cout << n << endl;
    } else {
      int p = (f*7);
      int q = (c*7);
      if((last_digit(n)-last_digit(p)) >= 0){
        cout << p << endl;
      } else {
        cout << q << endl;
      }
    }
  }
  return 0;
}