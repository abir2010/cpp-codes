#include<bits/stdc++.h>
using namespace std;

int swap(int *a, int *b)
{
  int temp;
  temp = *b;
  *b = *a;
  *a = temp;
}

void space_printer(int i,int n)
{
  if(i!=n-1){
    cout << " ";
  } else {
    cout << endl;
  }
}

int main()
{
  int n,arr[110],i,j,k,f=0,cnt=0,sum=0;
  cin >> n;
  for(i=0; i<n; i++)
    cin >> arr[i];
  
  for(i=0; i<n; i++){
    for(j=0; j<n-1; j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }

  for(i=0; i<n; i++){
    cout << arr[i];
    space_printer(i,n);
  }

  return 0;
}