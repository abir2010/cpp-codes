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
  double x1,x2,x3,x4,y1,y2,y3,y4,i,j,k,m1,m2;
  cin >> x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
  m1 = ((y2-y1)*(x4-x3));
  m2 = ((y4-y3)*(x2-x1));
  if(m1==m2){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}