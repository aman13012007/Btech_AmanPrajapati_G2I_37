#include <stdio.h>

int main(){

    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            printf("  ");
        }
        for(int k=1;k<=5;k++){
            printf("* ");
        }
        for(int l=1;l<=6+i;l++){
             if(i>3) printf("  ");
            else printf("* ");
        }
        for(int m=1;m<3;m++){
            printf("  ");
        }
        for(int n=1;n<=4;n++){
            printf("* ");
        }
         for(int o=1;o<=8;o++){
           printf("  ");
        }
        for(int p=1;p<=4;p++){
            printf("* ");
        }
        for(int q=1;q<=4;q++){
            if(i>=4) printf("  ");
            else printf("* ");
        }
        for(int r=1;r<=i;r++){
           if(r>=4) printf("  ");
            else printf("* ");
        }
        for(int s=1;s<=7-i;s++){
            printf("  ");
        }
         for(int t=1;t<5;t++){
            if(t<4-i) printf("  ");
           else printf("* ");
        }
         for(int u=1;u<=3;u++){
            if(i>3) printf("  ");
           else  printf("* ");
        }
         for(int v=1;v<=4;v++){
            if(v<=1+i) printf("* ");
           else  printf("  ");
        }
         for(int w=1;w<4;w++){
            printf("  ");
        }
         for(int x=1;x<=4;x++){
          printf("  ");
        }
         for(int y=1;y<=4;y++){
            printf("* ");
        }
         for(int z=1;z<4;z++){
            printf("  ");
        }
        for(int a=1;a<5;a++){
            if(a<4-i) printf("  ");
           else printf("* ");
        }
         for(int b=1;b<=3;b++){
            if(i>3) printf("  ");
           else  printf("* ");
        }
         for(int c=1;c<=4;c++){
            if(c<=1+i) printf("* ");
           else  printf("  ");
        }
         for(int d=1;d<3;d++){
            printf("  ");
        }
         for(int e=1;e<=4;e++){
          printf("  ");
        }
         for(int f=1;f<=4;f++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=4;i++){
        for(int j=1;j<=5;j++){
            printf("* ");
        }
        for(int k=1;k<=5;k++){
            printf("  ");
        }
        for(int l=1;l<=6;l++){
            if(i<2)
            printf("  ");
            else printf("* ");
        }
        for(int m=1;m<3;m++){
            printf("  ");
        }
        for(int n=1;n<=4;n++){
            printf("* ");
        }
         for(int o=1;o<=8;o++){
           printf("  ");
        }
        for(int p=1;p<=4;p++){
            printf("* ");
        }
        for(int q=1;q<=4;q++){
            if(i==4) printf("  ");
           else  printf("* ");
        }
        for(int r=1;r<=4;r++){
            if(i<=2){
                if(r>=4-i){
                 printf("  ");
                }
            else printf("* ");
            }
            else if(i>2){ 
                if(r<i){
                    printf("* ");
                }else printf("  ");
            }
        }
         for(int s=1;s<4;s++){
            printf("  ");
        }
         for(int t=1;t<5;t++){
            printf("* ");
        }
         for(int u=1;u<4;u++){
            if(i==4) printf("  ");
           else  printf("* ");
        }
         for(int v=1;v<=4;v++){
             printf("* ");
         }
          for(int w=1;w<4;w++){
            printf("  ");
        }
         for(int x=1;x<=4;x++){
            printf("  ");
        }
         for(int y=1;y<=4;y++){
            printf("* ");
        }
         for(int z=1;z<4;z++){
            printf("  ");
        }
         for(int a=1;a<5;a++){
            printf("* ");
        }
         for(int b=1;b<4;b++){
            if(i==4) printf("  ");
           else  printf("* ");
        }
         for(int c=1;c<=4;c++){
             printf("* ");
         }
          for(int d=1;d<3;d++){
            printf("  ");
        }
        for(int e=1;e<=4;e++){
            printf("  ");
        }
         for(int f=1;f<=4;f++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf("  ");
        }
        for(int k=1;k<=5;k++){
            printf("* ");
        }
        for(int l=1;l<=7-i;l++){
            if(i<2) printf("  ");
            else printf("* ");
        }
        for(int m=1;m<=4;m++){
            printf("* ");
        }
        for(int n=1;n<3;n++){
            printf("  ");
        }
        for(int o=1;o<=4;o++){
            printf("* ");
        }
        for(int p=1;p<=8;p++){
            if(i==1||p>=6) printf("  ");
            else printf("* ");
        }
        for(int q=1;q<=4;q++){
            printf("* ");
        }
        for(int r=1;r<=4;r++){
             if(i==1) printf("  ");
            else printf("* ");
        }
        for(int s=1;s<=3;s++){
            if(i<=2){
                 printf("* ");
            }
            else if(i>2){
                if(s<6-i){
                    printf("* ");
                }else printf("  ");
            }
            
        }
         for(int t=1;t<5;t++){
            printf("  ");
        }
         for(int u=1;u<5;u++){
            printf("* ");
        }
         for(int v=1;v<4;v++){
            printf("  ");
        }
         for(int w=1;w<=4;w++){
            printf("* ");
        }
         for(int x=1;x<4;x++){
            printf("  ");
        }
         for(int z=1;z<=4;z++){
            if(i==1) printf("  ");
           else  printf("* ");
        }
         for(int a=1;a<=4;a++){
            if(a<=7-i) printf("* ");
           else  printf("  ");
        }
         for(int b=1;b<4;b++){
            printf("  ");
        }
         for(int c=1;c<5;c++){
            printf("* ");
        }
         for(int d=1;d<4;d++){
            printf("  ");
        }
         for(int e=1;e<=4;e++){
            printf("* ");
        }
         for(int f=1;f<3;f++){
            printf("  ");
        }
         for(int g=1;g<=4;g++){
            if(i==1) printf("  ");
           else  printf("* ");
        }
         for(int h=1;h<=4;h++){
            if(h<=7-i) printf("* ");
           else  printf("  ");
        }
        printf("\n");
    }
    return 0;
}