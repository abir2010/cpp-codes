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
int min_max(int arr[], int n, string s){
  if(s == "min"){
    int min = arr[0];
    for(int i=0; i<n; i++){
      if(arr[i]<min){
        min = arr[i];
      }
    }
    return min;
  } else if(s == "max"){
    int max = arr[0];
    for(int i=0; i<n; i++){
      if(arr[i]>max){
        max = arr[i];
      }
    }
    return max;
  }
}

int main(){
  int n,x,y,i,j,k,f=0,cnt1=0,cnt2=0,a[110],b[110];
  cin >> n;
  for(i=0; i<n; i++){
    cin >> a[i] >> b[i];
  }
  // int dis_a = min_max(a,n,"max") - min_max(a,n,"min");
  // int dis_b = min_max(b,n,"max") - min_max(b,n,"min");
  // double ans = sqrt((dis_a*dis_a) + (dis_b*dis_b));
  // cout << ans << endl;
  int max = a[0];
  for(i=0; i<n; i++){
    for(j=1; j<n && j!=i; j++){
      if(abs((a[i]-a[j])) > max){
        max = abs((a[i]-a[j]));
      }
    }
  }
  cout << max << endl;

  return 0;
}