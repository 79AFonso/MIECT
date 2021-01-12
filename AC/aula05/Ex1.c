#include <stdio.h>
#include <assert.h>

int count = 0;

int funct1(int n){

    assert (n>=0);

    if(n==0){
         return 0;
    }

    count++;

    return funct1(n/3) + n;

}

int funct2 (int n){

    assert (n >= 0);

    if(n==0 || n==1 || n==2){
        return n;
    }
    else{
        count++;
        count++;
        return (funct2(n/3) + funct2((n+2)/3) + n);
    }
}

int funct3 (int n){

    assert (n >= 0);


    if(n==0 || n==1 || n==2) return n;
    
    else if (n%3==0){
        count++;
        return (2 * funct3((n+2)/3) + n);
    }
    else{
        count++;
        count++;
        return funct3(n/3)+funct3((n+2)/3)+n;}

}

int main(void){


    for(int i=0; i<29; i++){
        printf("n=%d\n",i);
        count=0;
        int res1 = funct1(i);
        printf("T1(%d) = %d, Chamadas Recursivas = %d\n", i, res1, count);
        count=0;
        int res2 = funct2(i);
        printf("T2(%d) = %d, Chamadas Recursivas = %d\n", i, res2, count);
        count=0;
        int res3 = funct3(i);
        printf("T3(%d) = %d, Chamadas Recursivas = %d\n", i, res3, count);
    }
    

}