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
  long long n,i,sum=0,arr[1010];
  cin >> n;
  for(i=0;i<((4*n)-1);i++){
    cin >> arr[i];
    sum+=arr[i];
  }
  long long ans = (4*((n*(n+1))/2))-sum;
  cout << ans << endl;

  return 0;
}