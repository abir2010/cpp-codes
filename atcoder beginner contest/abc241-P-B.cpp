#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define PI 3.1415926535897932384626
#define INF 0x7fffffff
#define nl "\n"
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define pb push_back
#define SZ(n) (int) (n).size()
#define all(x) (x).begin(), (x).end()
#define SORT(x) sort(all(x)) 
#define REVERSE(x) reverse(all(x)) 
#define tc(x)  int x; cin >> x; while(x--)
#define forN(x) for(int i=0;i<x;i++)
const int zero = 0;
bool isOdd(int n)	{	return n%2 != 0; }
bool isPostive(int n)	{	return n>0; }
int max_3(int a, int b, int c){ return max(a,max(b,c)); }
int min_3(int a, int b, int c){ return min(a,min(b,c)); }
void printVec(vector<int> v2, string s = ""){
  cout << s;
  for(int i = 0; i < SZ(v2) ; i++)
    cout << v2[i] << " ";
  cout << "\n";
}
int comp_double(double a, double b){
  if(fabs(a-b) <= 1e-10)
    return 0;
  return a<b ? -1 : 1;
}
vector<int>removeDuplicates(vector<int>&arr, int size){
  int num[100] ={0};
  vi vec;
  for(int i=0;i<size;i++){
    if(num[arr[i]] == 0){
      num[arr[i]]=1;
      vec.push_back(arr[i]);
    }
  }
  return vec;
}
void solve(){
  bool flag = false;
  int n,m;
  cin >> n >> m;
  vi arr(n),brr(m);
  forN(n){
    cin >> arr[i];
  }
  forN(m){
    cin >> brr[i];
  }
  // if((n==1 || m==1) || (n==1 && m==1)){
  //   flag = true;
  // } else{
  //   vi answer = removeDuplicates(arr,n);
  //   sort(answer.rbegin(),answer.rend());
  //   sort(brr.rbegin(),brr.rend());
  //   forN(m){
  //     if(answer[i] != brr[i]){
  //       flag = true;
  //     }
  //   }
  // }
  for(int i=0;i<n;++i){
    for(int j=i+1;j<n;){
      if(arr[i]==arr[j]){
        for(int k=j;k<n-1;++k)
          arr[k]=arr[k+1];
          --n;
        }
      else
        ++j;
    }
  }
  sort(arr.rbegin(),arr.rend());
  sort(brr.rbegin(),brr.rend());
  forN(m){
    if(arr[i] != brr[i]){
      flag = true;
    }
  }
  if(flag == true){
    cout << "No" << nl;
  } else {
    cout << "Yes" << nl;
  }
}
int main(){
  FASTIO;

  solve();

  return zero;
}