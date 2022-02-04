#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
  int r1,r2,c1,c2,i,j,k,s,matrix1[200][200],matrix2[200][200],mul[100][100];
  scanf("%d %d", &r1, &c1);
  for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
      scanf("%d",&matrix1[i][j]);
    }
  }
  scanf("%d%d",&r2,&c2);
  for(i=0;i<r2;i++){
    for(j=0;j<c2;j++){
      scanf("%d",&matrix2[i][j]);
    }
  }
  for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
      for(s=0;s<r2;s++){
        mul[i][j]=mul[i][j]+matrix1[i][s]*matrix2[s][j];
      }
    }
  }
  for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
      printf("%d ",mul[i][j]);
    }
    printf("\n");
  }

  return 0;
}
// solved with help