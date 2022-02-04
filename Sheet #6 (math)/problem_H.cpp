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
int LCM(int n, int m){
  int f = 1,max = (n>m) ? n:m;
  while(f){
    if(max % n == 0 && max % m == 0)  {
      return max;
    }  
    ++max;
  }
}
int main(){
  ll a,b;
  cin >> a >> b;
  cout << __gcd(a,b) << " " << ((a/__gcd(a,b))*b) << endl;

  return 0;
}