#include <stdio.h>
 int main (){
    for(int i=1;i<6;i++){
        for(int j=1;j<=6-i;j++){
          printf("  ");
        }
         for(int k =1;k<=2*i-1;k++){
            if(k==1||k>=2*i-1)
            printf("* ");
            else printf("  ");
        }
         for(int l=1;l<=6;l++){
            if(i==1||i==3||l==2||l==4||l==6)
                printf("* ");
                 else printf("  ");
            }
      printf("\n");
    }
    for(int a=1;a<=8;a++){
        for(int b=1;b<=17;b++){
            if(a<=3||b<=3||b==11||b==10||b==9||b==8||b==7||b>=16)
            printf("* ");
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int c=1;c<=1;c++){
        for(int d=1;d<=20;d++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
 }