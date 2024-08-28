

#include<stdio.h>

int main(){
     
    int a ;

    printf("Enter value of a :");
    scanf("%d",&a);

    for(int i=10;i>=a;i--){
        printf("%d\n",i);
    }

}