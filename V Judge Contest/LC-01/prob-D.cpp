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
int min_max(int arr[], int n, string s){
  if(s == "min"){
    int min = arr[0];
    for(int i=0; i<n; i++){
      if(arr[i]<min){
        min = arr[i];
      }
    }
    return min;
  } else if(s == "max"){
    int max = arr[0];
    for(int i=0; i<n; i++){
      if(arr[i]>max){
        max = arr[i];
      }
    }
    return max;
  }
}

int main(){
  int n,x,y,i,j,k,f=0,cnt1=0,cnt2=0,a[110],b[110];
  cin >> n;
  for(i=0; i<n; i++){
    cin >> a[i] >> b[i];
  }
  for(i=0; i<n-1; i++){
    for(j=0; j<n-i-1; j++){
      ll dis_x = a[j]-a[j+1], dis_y = b[j]-b[j+1];

    }
  }

  return 0;
}
//unsolved