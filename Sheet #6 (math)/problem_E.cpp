#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
  long long int n;
  scanf("%lld",&n);
  long long int l=0,r=1414213563,mid,cnt=0;
  mid=((l+r)/2);
  while(l<=r){
    if(((mid*mid+mid)/2)==n){
        printf("%lld",mid);
        cnt=1;
        break;
    }
    else if(((mid*mid+mid)/2)<n){
        l=mid+1;
    }
    else if(((mid*mid+mid)/2)>n){
        r=mid-1;
    }
    mid=((l+r)/2);
  }
  if(cnt==0)
    printf("%lld",mid);

  return 0;
}
// solved with help