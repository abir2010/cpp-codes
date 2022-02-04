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
  int n,k,i,l=0,cnt=0,arr[110]={0},arr1[110]={0};
  cin >> n;
  k=n;
  for(i=2;i<=k;i++){
    while(1){
      if(n%i==0){
        n=n/i;
        arr[l]=i;
        arr1[l]++;
        cnt=1;
      } else {
        break;
      }
    }
    if(n==1){
      break;
    }
    if(cnt==1){
      l++;
      cnt=0;
    }
  }
  for(int j=0;j<=l;j++){
    if(arr[j]>0){
      cout << "(" << arr[j] << "^" << arr1[j] << ")";
      if(j<l){
        cout<<"*";
      }
    }
  }

  return 0;
}
// solved with help