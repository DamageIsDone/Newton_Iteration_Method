#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAXN 10

double f(double x) {
    return pow(x, 3) - 3.0; // 设x为3的立方根，所以x^3=3，所以求x即求f(x)=x^3-3=0时的根
}

//f'(x)
double df(double x) {
    return 3.0 * pow(x, 2); // f'(x)=3*x^2
}

int main() {
    // 分配内存
    double *x = (double *)malloc(MAXN * sizeof(double));
    
    x[0] = 3.0;

    printf("x[0] = %.14lf\n", x[0]);

    for (int i = 1; i < MAXN; i++) {
        x[i] = x[i - 1] - f(x[i - 1]) / df(x[i - 1]); // 代入牛顿迭代法公式
        printf("x[%d] = %.14lf\n", i, x[i]); // 打印迭代结果
    }
    
    printf("==============================\n");
    
    printf("The cubic root of 3 is:\n%.14lf\n",x[9]);
    
    printf("==============================\n");

    free(x); // 释放分配的内存
    return 0;
}
