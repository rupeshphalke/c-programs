#include<stdio.h>
int main(){
    int m,s;
    printf("enter number=");
    scanf("%d",&m);
    s=m;
    do{
        s=m%10;
        printf("%d",s);
        m=m/10;

    }while(m>0);
return 0;
}