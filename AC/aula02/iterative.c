#include <stdio.h>
#include <assert.h>
#include "elapsed_time.h"

/* definition of the 64-bit unsigned integer type */
typedef unsigned long long u64;

u64 P_2(int n){

    u64 a, b, c;

    assert (n>=0);

    if(n<=1) return n;

    a=0;
    b=1;

    for(int i=2; i<=n; i++){
        c=3*b+2*a;
        a=b;
        b=c;
    }

    return c;
    

}
int main (void) {

    u64 p10 = P_2(10);

    (void) elapsed_time();

    for(u64 i = 0; i<p10; i++){

    }
    double p10RunningTime = elapsed_time();

    printf("n = 10 -> %20llu ;  Elapsed time -> %12.9f \n", p10, p10RunningTime);


    u64 p20 = P_2(20);

    (void) elapsed_time();

    for(u64 i = 0; i<p20; i++){

    }
    double p20RunningTime = elapsed_time();

    printf("n = 20 -> %20llu ;  Elapsed time -> %12.9f \n", p20, p20RunningTime);

    u64 p30 = P_2(30);

    (void) elapsed_time();

    for(u64 i = 0; i<p30; i++){

    }
    double p30RunningTime = elapsed_time();

    printf("n = 30 -> %20llu ;  Elapsed time -> %12.9f \n", p30, p30RunningTime);

    return 0;

}