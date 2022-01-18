#include<stdio.h>
int main(){
    int x,i,j,k;
  while(1){
      scanf("%d",&x);
      if(x>0 && x<=8){
          break;
      }
  }
    printf("Value stored:%d\n",x);//x is height
for(i=0;i<x;i++){                 //i is row
                                  //j is number of space
    for(j=(x-1);j>i;j--){       //k is number of hash
        printf(" ");
    }
    for(k=0;k<(j+1);k++){
        printf("#");
    }
    printf("\n");
}
    return 0;
}