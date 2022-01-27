#include<bits/stdc++.h>
using namespace std;
int swap(int *a, int *b)
{
  int temp;
  temp = *b;
  *b = *a;
  *a = temp;
}
int main()
{
  int n,i,j,k,f=0,cnt=0,sum1=0,sum2=0,arr[1010];
  cin >> n;
  for(i=0;i<n;i++){
    cin >> arr[i];
  }
  int last_index = n-1;
  int first_index = 0;
  for(i=0;i<n;i++){
    if(i%2==0){
      if(arr[first_index] > arr[last_index]){
        sum1 += arr[first_index];
        first_index += 1;
      } else if(arr[first_index] < arr[last_index]){
        sum1 += arr[last_index];
        last_index -= 1;
      } else if((first_index == last_index)){
        if(n%2==0){
          sum2 += arr[first_index];
        } else {
          sum1 += arr[first_index];
        }
      }
    } else {
      if(arr[first_index] > arr[last_index]){
        sum2 += arr[first_index];
        first_index += 1;
      } else if(arr[first_index] < arr[last_index]){
        sum2 += arr[last_index];
        last_index -= 1;
      } else if((first_index == last_index)){
        if(n%2==0){
          sum2 += arr[first_index];
        } else {
          sum1 += arr[first_index];
        }
      }
    }
  }
  cout << sum1 << " " << sum2 << endl;

  return 0;
}