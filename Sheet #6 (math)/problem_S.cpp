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
bool isTri(int a, int b, int c){
  if(a+b<=c || a+c<=b || b+c<=a){
    return false;
  } else {
    return true;
  }
}
int main(){
  int a,b,c;
  cin >> a >> b >> c;
  double s = (a+b+c)/2;
  if(isTri(a,b,c)){
    cout << "Valid" << endl;
    double area = sqrt((s*(s-a)*(s-b)*(s-c)));
    cout << fixed << setprecision(6) << area << endl;
  } else {
    cout << "Invalid" << endl;
  }
}