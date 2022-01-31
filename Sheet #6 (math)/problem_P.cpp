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
ll factorial(int x){
  if(x==1){
    return 1;
  } else if(x==2){
    return 2;
  }
  return (x*factorial(x-1));
}
int fact(int n){
    return std::tgamma(n + 1);  
} 
int main(){
  int n;
  cin >> n;
  ll f = fact(n);
  string str = to_string(f);
  char const* c = str.c_str();
  cout << "Number of digits of " << n << "! is " << strlen(c) << endl;
  return 0;
}