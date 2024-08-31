
#include <stdio.h>

void main(){

    int a,b,c;
    printf("Enter value os a : ");
    scanf("%d",&a);
    printf("Enter value os b : ");
    scanf("%d",&b);
    printf("Enter value os c : ");
    scanf("%d",&c);
    if(a<b){
        printf("a is lowest value.");
    }else if(b<c){
        printf("b is lowest value.");
    }else{
        printf("c is lowest value.");
    }
}