#include <stdio.h>
#include <assert.h>
#include "elapsed_time.h"
#include <math.h>

/* definition of the 64-bit unsigned integer type */
typedef unsigned long long u64;

u64 P_1(int n){

    assert (n>=0);

    u64 res;

    if(n==0) res=0;
    else if(n==1) res=1;
    else if(n>=2) res = 3*P_1(n-1) + 2 * P_1(n-2);

    return res;

}

long double P_3(int n){

    assert (n>=0);

    long double pow1 = powl(1.0/2.0*(3+(sqrtl(17))),n);
    long double pow2 = powl(1.0/2.0*(3-(sqrtl(17))),n); 
    long double res = (pow1 - pow2) / (sqrtl(17));

    return res;

}

long double P_4(int n){

    assert(n>=0);

    long double buffer = 1.0/sqrtl(17);
    long double pow1 = powl(1.0/2.0*(3+(sqrtl(17))),n);
    long double res = roundl(buffer*pow1);

    return res;

}

long double P_5(int n){

    assert(n>=0);

}


int main (void) {

   /* u64 p10 = P_1(10);

    (void) elapsed_time();

    for(u64 i = 0; i<p10; i++){

    }
    double p10RunningTime = elapsed_time();

    printf("n = 10 -> %20llu ;  Elapsed time -> %12.9f \n", p10, p10RunningTime);


    u64 p20 = P_1(20);

    (void) elapsed_time();

    for(u64 i = 0; i<p20; i++){

    }
    double p20RunningTime = elapsed_time();

    printf("n = 20 -> %20llu ;  Elapsed time -> %12.9f \n", p20, p20RunningTime);

    u64 p30 = P_1(30);

    (void) elapsed_time();

    for(u64 i = 0; i<p30; i++){

    }
    double p30RunningTime = elapsed_time();

    printf("n = 30 -> %20llu ;  Elapsed time -> %12.9f \n", p30, p30RunningTime); 
    */

  /* long double p10 = P_3(10);

   printf("n=10 -> %20LF \n", p10);
   
   long double p20 = P_3(20);

   printf("n=20 -> %20LF \n", p20);
   
   long double p30 = P_3(30);

   printf("n=30 -> %20LF \n", p30);
   */

  long double p10 = P_4(10);

   printf("n=10 -> %20LF \n", p10);
   
   long double p20 = P_4(20);

   printf("n=20 -> %20LF \n", p20);
   
   long double p30 = P_4(30);

   printf("n=30 -> %20LF \n", p30);

    return 0;

}