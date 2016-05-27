#include <stdio.h>
#include <stdlib.h>

#include "funcs.h"

int line(){
        double a,b;
        double (*func)(double,double);
        char op[15];
        if(scanf("%lf%s%lf",&a,op,&b)!=3)
                return 0;
        switch(*op){
        case '+':func=fadd;break;
        case '-':func=fsub;break;
        case '*':func=fmul;break;
        case '/':func=fdiv;break;
        default:
                fputs("Error: Invalid Expression.\n",stderr);
                return 1;
        }
        printf("ans = %lf\n",func(a,b));
        return 1;
}
