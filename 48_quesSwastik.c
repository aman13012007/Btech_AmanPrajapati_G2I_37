#include <stdio.h>

int main(){
    int n;
    printf("Enetr Number :");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
           if(j==1||i==n||j==n) printf("* ");
           else printf("  ");
            
        }
        for(int l=1;l<=n;l++){
            if(l==1||i==1||i==n) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
           if(j==n||i==n||i==1) printf("* ");
           else printf("  ");
            
        }
        for(int l=1;l<=n;l++){
            if(l==n||i==1||l==1) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}