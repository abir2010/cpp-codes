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
  int n, arr[100][3];
  cin >> n;
  for(int i=0; i<n; i++){
    for(int j=0; j<2; j++){
      cin >> arr[i][j];
    }
  }
  double Max = 0;
  for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; i++){
      double ans = sqrt((pow((arr[j][0]-arr[i][0]),2))+(pow((arr[j][1]-arr[i][1]),2)));
      cout << ans << endl;
      if(ans > Max){
        Max = ans;
      }
    }
  }
  cout << Max << endl;

  return 0;
}
// unsolved