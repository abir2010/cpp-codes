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
  int t;
  cin >> t;
  while(t--){
    int n,i,j;
    char str[110];
    cin >> n;
    for(i=0; i<n; i++){
      cin >> str[i];
    }
    if(n>2){
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
  return 0;
}