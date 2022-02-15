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
class myclass {
  int who;
  public:
  myclass(int n){
    who = n;
    cout << "Constructing " << who << endl;
  }
  ~myclass(){
    cout << "Destructing " << who << endl;
  }
  int id(){
    return who;
  }
};
void f(myclass &o){
  cout << "Received " << o.id() << endl;
}
int main(){
  myclass x(1);

  f(x);

  return 0;
}