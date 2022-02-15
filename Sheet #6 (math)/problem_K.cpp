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
const int zero = 0;
bool isOdd(int n)	{	return n%2 != 0; }
bool isPostive(int n)	{	return n>0; }
bool isEqual(double a, double b) { return abs(a-b) < 2;	}
void printVec(vector<int> v2, string s = ""){
  cout << s;
  for(int i = 0; i < sz(v2) ; i++)
    cout << v2[i] << " ";
  cout << "\n";
}
ll fact(int n){
  if(n==1)
    return 1;
  return fact(n-1)*n;
}
int main(){
  ll a,b;
  cin >> a >> b;
  ll NCR = (fact(a)/fact(a-b));
  ll NPR = (fact(a)/(fact(a-b)*fact(b)));
  cout << NPR << " " << NCR << endl;
  return zero;
}
// unsolved