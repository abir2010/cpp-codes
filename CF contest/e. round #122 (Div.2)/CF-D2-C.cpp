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
bool isEqual(int a, int b) { return abs(a-b) < 2;	}
void printVec(vector<int> v2, string s = ""){
  cout << s;
  for(int i = 0; i < sz(v2) ; i++)
    cout << v2[i] << " ";
  cout << "\n";
}
set<string> distinctSubstring(string str)
{
  set<string> result ;
  for (int i = 0; i <= str.length(); i++){
    for (int j = 1; j <= str.length()-i; j++){
      result.insert(str.substr(i, j));
    }
  }
  return result;
}
int main(){
  ll hc,dc,hm,dm,k,w,a,f=0;
  cin >> hc>>dc>>hm>>dm;
  while((hc-dm)>=0 || (hm-dc)>=0){
    if((hm-dc-dc) <= 0){
        f=1;break;
    } else if((hc-dm-dm) <= 0) {
      f=2;break;
    }
    hc-=dm;
    hm-=dc;
  }
  if(f==1){
    cout << "character" << endl;
  } else if(f==2) {
    cout << "Monster" << endl;
  }

  return 0;
}
//unsolved