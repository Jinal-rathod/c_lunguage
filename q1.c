
#include<stdio.h>

void main(){
    int a,b,ans;
    printf("Enter value os a : ");
    scanf("%d",&a);
    printf("Enter value os b : ");
    scanf("%d",&b);
    ans = (a*a)+(2*a*b)+(b*b);
    printf("The result is : %d",ans);
}