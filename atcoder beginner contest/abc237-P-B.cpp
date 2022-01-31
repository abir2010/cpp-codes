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
  int m,n,i,j,arr[100][100];
  cin >> m >> n;
  for(i=1; i<=m; i++){
    for(j=1; j<=n; j++){
      cin >> arr[i][j];
    }
  }
  for(j=1; j<=n; j++){
    for(i=1; i<=m; i++){
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}