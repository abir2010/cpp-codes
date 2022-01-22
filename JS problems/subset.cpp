#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[10],n;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int size = pow(2, n);
    for(int counter = 0; counter < size; counter++) {
      for(int j = 0; j < size; j++) {
        if(counter & (1<<j)){
          cout << arr[j] << " ";
        }
      }
      cout << "\n";
    }
   
  return 0;
}