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
  ll a,b,i,j,k,f=0,t_sum=0,e_sum=0,o_sum=0;
  double n;
  cin >> a >> b;
  n = abs(a-b);
  if(a>b)
    swap(a,b);
  t_sum = ((n+1)/2)*((2*a)+((n)*1));
  ll m = b, o = a;
  if(b%2!=0)
    m=b-1;
  if(a%2!=0)
    o=a+1; 
  n = (((m-o)/2)+1);
  e_sum = ((n)/2)*((2*o)+((n-1)*2));
  m = b, o = a;
  if(b%2==0)
    m=b-1;
  if(a%2==0)
    o=a+1;
  n = (((m-o)/2)+1);
  o_sum = ((n)/2)*((2*o)+((n-1)*2));
  cout << t_sum << endl << e_sum << endl << o_sum << endl;
  return 0;
}