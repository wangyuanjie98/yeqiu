#include<stdio.h>
int main()
{
    int a11, a12, a13, a21, a22, a23;//2*3矩阵
    int b11, b12, b21, b22, b31, b32;//3*2矩阵
    int c11, c12, c21, c22;//2*2矩阵
    
    scanf("%d %d %d %d %d %d", &a11, &a12, &a13, &a21, &a22, &a23);
    
    scanf("%d %d %d %d %d %d", &b11, &b12, &b21, &b22, &b31, &b32);
    c11 = a11*b11 + a12*b21 + a13*b31;
    c12 = a11*b12 + a12*b22 + a13*b32;
    c21 = a21*b11 + a22*b21 + a23*b31;
    c22 = a21*b12 + a22*b22 + a23*b32;
    printf("%d %d %d\n",a11,a12,a13);
    printf("%d %d %d\n",a21,a22,a23);
    printf("\n");
    printf("%d %d\n",b11,b12);
    printf("%d %d\n",b21,b22);
    printf("%d %d\n",b31,b32);
    printf("\n");
    printf("%d %d\n", c11, c12);
    printf("%d %d\n", c21, c22);
    return 0;
}