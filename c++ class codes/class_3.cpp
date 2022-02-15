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
void swapargs(int &x, int &y);
int main(){
  int i,j;
  i = 10;
  j = 19;
  cout << "i: " << i << ", ";
  cout << "j: " << j << "\n";

  swapargs(i,j);

  cout << "After swapping: ";
  cout << "i: " << i << ", ";
  cout << "j: " << j << "\n";

  return 0;
}
void swapargs(int &x, int &y){
  int t;
  
  t = x;
  x = y;
  y = t;
}