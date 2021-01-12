#include <stdio.h>
#include <assert.h>

int countSum = 0;

int motzkin(int n){

    assert (n>=0);
    int sum;
    int arr[n+1];

    arr[0]=1;
    arr[1]=1;

    for(int i=2;i<=n;i++){
        sum=0;
        for(int k=0;k<i-1;k++){
            sum+=arr[k]*arr[i-2-k];
            countSum++;
        }
        arr[i] = arr[i-1]+sum;
    }

    return arr[n];
    
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