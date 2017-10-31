/*
    * Muhammad Ashraf Ewaily        14101380
    * Numerical Methods | Newton Raphson
 */
#include <stdio.h>
#include <stdlib.h>

float fn(float x){

        float fn = x*x - 2* x-3 ;

return fn;


}

float dfn(float x){

        float dfn =2*x - 2;


return dfn;


}



int main()
{

    float x,xx,Es=0.001,c,cx;
    int i = 0,f=0;

    printf("Enter the value of a: ");
    scanf("%f",&x);

    xx = x - ( fn(x) / dfn(x));

            printf("Iteration #%d\n Xi = %f \t F(Xi) = %f || \t F'(Xi) = %f || \t Xi+1 = %f  \n\n",i,x,fn(x),dfn(x),xx);

    while ( fabs(fn(x)) >=0.001 ){


        i ++;
        x = xx;
        xx = x - ( fn(x) / dfn(x));


        printf("Iteration #%d\n Xi = %f \t F(Xi) = %f || \t F'(Xi) = %f || \t Xi+1 = %f  \n\n",i,x,fn(x),dfn(x),xx);

    }

            printf("\nThe approximate root = %f\n",x);


    return 0;
}
