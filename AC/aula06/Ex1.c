#include <stdio.h>
#include <assert.h>

int countSum = 0;


int motzkin(int n){

    assert (n>=0);
    int sum=0;

    if(n<2) return 1;
    else {
        for(int k=0; k<n-1;k++){
            sum+=motzkin(k)*motzkin(n-2-k);
            countSum++;
        }
        return motzkin(n-1)+sum;
    }

    
}

int main(void){

    for(int i=0;i<16;i++){
        printf("n=%d\n",i);
        countSum=0;
        int res = motzkin(i);
        printf("Motzkin(%d) = %d, Nº Multiplicações = %d\n", i, res, countSum);
    }
    
    
    return 0;
}