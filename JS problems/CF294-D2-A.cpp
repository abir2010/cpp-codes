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
  ll n,i,t,x,y,sum;
  cin>>n;
  ll arr[n+1];
  for(i=1;i<=n;i++){
    cin>>arr[i];
  }
  cin>>t;
  ll a1[t+1][2];
  for(i=1;i<=t;i++){
    cin>>x>>y;
    if((x-1)==0){
      sum=abs(arr[x]-y);
      arr[x+1]=arr[x+1]+sum;
      arr[x]=0;
    } else if((x+1)==(n+1)){
      sum=abs(arr[x]-y);
      arr[x-1]=(arr[x-1]+y)-1;
      arr[x]=0;
    } else {
      sum=abs(arr[x]-y);
      arr[x-1]=(arr[x-1]+y)-1;
      arr[x+1]=arr[x+1]+sum;
      arr[x]=0;
    }
  }
  for(i=1;i<=n;i++){
    cout<<arr[i]<<endl;
  }
  
  return 0;
}