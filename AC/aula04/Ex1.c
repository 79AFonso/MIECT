#include <stdio.h>
#include <assert.h>

int globalCount=0; // contador global de comparações

int funct(int* arr, int n){
    assert (n>1);

    globalCount=0;

    int res=1;


    for(int i=0;i<n-1;i++){
        globalCount++;
        if(arr[i+1]-arr[i]!=1){
            res=0;
            break;
        }

    }

    return res;

}

int main(void){


    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 4, 9, 9};

    int res = funct(arr, sizeof(arr)/sizeof(arr[0]));

    printf("Resultado : %d \nComparações : %d\n", res, globalCount);

    return 0;
}