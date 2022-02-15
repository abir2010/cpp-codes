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
  int n,arr[100010],i,j,k,f=0,sum=0,h=0,u=0;
  cin >> n;
  for(i=0;i<n;i++){
    cin >> arr[i];
  }
  for(i=0;i<n;i++){
    if(arr[i]>0){
      h+=arr[i];
    } else if(arr[i]<0 && h>0){
      h-=1;
    } else if(arr[i]<0 && h<1){
      u++;
    }
  }
  cout << u << endl;

  return 0;
}