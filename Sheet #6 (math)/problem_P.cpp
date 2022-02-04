#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
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
vi factorial(int n){
  vi res;
  res.pb(1);
  for(int x=2; x<=n;x++){
    int carry = 0;
    for(int i=0; i<sz(res); i++){
      int val = (res[i]*x) + carry;
      res[i] = (val%10);
      carry = val/10;
    }
    while(carry != 0){
      res.pb(carry%10);
      carry /= 10;
    }
  }
  reverse(all(res));
  return res;
}
int fact(int n){
    return std::tgamma(n + 1);  
}
ll s_factorial(long long n){
  long long counter;
  long double sum = 0;
  
  // if (n == 0)
  //   return 1;
  
  for (counter = 1; counter <= n; counter++) {
    sum = sum + log10(counter);
  }
  // string result = to_string(round(exp(sum)));
  // ll ans = (result.length()-7);
  return sum+1;
}
int main(){
  // clock_t tStart = clock();
  // vi ans;
  // int n; cin >> n;
  // ans = factorial(n);
  // cout << "Number of digits of " << n << "! is " << ans.size() << endl;
  // cout << "Time taken: " << setprecision(10) << ((double)(clock() - tStart)/CLOCKS_PER_SEC) << " s" << endl;
  ll n; cin >> n;
  ll ans = s_factorial(n);
  cout << "Number of digits of " << n << "! is " << ans << endl;
  return 0;
}