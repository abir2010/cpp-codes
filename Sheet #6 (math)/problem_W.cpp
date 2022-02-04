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
double dis(double a1, double b1, double a2, double b2){
  return (sqrt((pow(a2-a1,2) + pow(b2-b1,2))));
}
int main(){
  double x1,x2,x3,x4,y1,y2,y3,y4,c1,c2,c3,c4,cr1,cr2,t_dis;
  cin >> x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
  c1 = (x1+x2)/2;
  c2 = (y1+y2)/2;
  c3 = (x3+x4)/2;
  c4 = (y3+y4)/2;
  cr1 = dis(x1,y1,c1,c2);
  cr2 = dis(x3,y3,c3,c4);
  t_dis = dis(c1,c2,c3,c4);
  if((cr1+cr2) >= t_dis){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}