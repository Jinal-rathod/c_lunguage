
#include<stdio.h>

    int c_digit(int i){
        int count = 1;

        for(i!=0;i/=10;count++){
        if(i==0){
            return 0;
        }}
        return count;
    }
    int main(){
        int num;
        printf("Enetr value of num : ");
        scanf("%d",&num);
        printf("number of digit : %d",c_digit(num));
    }  

    

