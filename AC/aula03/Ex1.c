#include <stdio.h>
#include <assert.h>

int funct(int n){
    assert (n>1);

    int count=0;
    int arr[n];

    printf("Introduza os valores do array ->");

    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    int comp=0;

    for(int i=1; i<n; i++){
        if(arr[i]!=arr[i-1]){
            count++;
        }
        comp++;
    }

    printf("Comparações : %d\n", comp);

    return count;

}


int main(void){

    int n ;

    printf("Tamanho do array -> ");

    scanf("%d", &n );

    int res = funct(n);

    printf("Resultado : %d \n ", res);

    return 0;
}