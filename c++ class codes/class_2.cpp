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
class student{
  public:
    int id;
    student(){
      id = 0;
      cout << "from constructor function!" << endl;
    }
    ~student(){
      
    }
    void set_id(int ID){
      id = ID;
      cout << "id is : " << id << endl;
    }
};

int main(){
  student st;
  st.set_id(10020);
  return 0;
}