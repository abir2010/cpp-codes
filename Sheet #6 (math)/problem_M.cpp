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
  string str;
  cin >> str;
  ll n,i,r=0;
  cin >> n;
  for(i=0;i<str.length();i++){
    r = (r*10+(int)str[i]-'0')%n;
  }
  if(r==0){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}