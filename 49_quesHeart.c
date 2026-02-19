#include <stdio.h>

int main(){
        
    for(int i=1;i<=10;i++){
        for(int j=1;j<=19;j++){
            if(i==1||i==10||j>=8 && j<=12)
            printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    printf("\n");
    for(int i=1;i<=5;i++){
          

        for(int j=1;j<=5-i;j++){
            printf("  ");
        }
        for(int k=1;k<=2*i-1;k++){
             if(i<=2) break;
            printf("A ");
        }
        for(int l=1;l<=6-i;l++){
            printf("  ");
        } 
        for(int m=1;m<=5-i;m++){
            printf("  ");
        }
        for(int n=1;n<=2*i-1;n++){
             if(i<=2) break;
            printf("A ");
        }
     printf("\n");
    }
    for(int i=1;i<=2;i++){
        for(int j=1;j<=19;j++){
            printf("A ");
        }
        printf("\n");
    }
    for(int i=10;i>=1;i--){
         for(int j=1;j<=10-i;j++){
            printf("  ");
         }
         for(int k=1;k<=2*i-1;k++){
            printf("A ");
         }
         printf("\n");
    }
    printf("\n");
     for(int i=1;i<=10;i++){
        for(int j=1;j<=19;j++){
            if(j>=8&&j<=12)
            printf("  ");
            else printf("* ");
        }
        printf("\n");
    }
    for(int i=10;i>=1;i--){
        for(int j=1;j<=10-i;j++){
            printf("  ");
        }
        for(int k=1;k<=2*i-1;k++){
           if(i<=5) break;
            printf("* ");
             
        }
        printf("\n");
    }
    return 0;
}
