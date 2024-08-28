

#include <stdio.h>

int main(){
    
    int f_angle,s_angle,t_angle;

    printf("Enter the f_angle of a triangle: ");
    scanf("%d",&f_angle);

    printf("Enter the s_angle of a triangle: ");
    scanf("%d",&s_angle);

    t_angle = 180 - (f_angle + s_angle);

    printf("triangle third anglr is %d",t_angle);
}