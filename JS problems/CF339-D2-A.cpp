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
  string s;
  vi arr;
  cin >> s;
  for(int i=0; i<s.length(); i++){
    if(s[i]>='0' && s[i]<='9'){
      arr.pb((s[i]-48));
    }
  }
  sort(all(arr));
  for(int i=0; i<sz(arr); i++){
    cout << arr[i];
    if(i!=(sz(arr)-1)){
      cout << '+';
    } else {
      cout << endl;
    }
  }

  return 0;
}