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
bool isEqual(int a, int b) { return abs(a-b) < 2;	}
void printVec(vector<int> v2, string s = ""){
  cout << s;
  for(int i = 0; i < sz(v2) ; i++)
    cout << v2[i] << " ";
  cout << "\n";
}

int main(){
  ll n;
  cin >> n;
  ll max = pow(2,31);
  if((n >= (-max)) && (n <= (max-1))){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}