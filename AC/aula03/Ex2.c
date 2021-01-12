#include <stdio.h>
#include <assert.h>

int funct(int n){
    assert (n>1);

    int arr[n];
    int count=0;
    int comp=0;
    int max=0;
    int index=-1;

    printf("Introduza os valores do array ->");

    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    for(int i=1; i<n; i++){
        count=0;
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]){
                count++;

            }
            comp++;
        }
        if(max<count){
            index=i;
            max=count;
        }
    }

    printf("Comparações : %d\n", comp);

    return index;

}


int main(void){

    int n ;

    printf("Tamanho do array -> ");

    scanf("%d", &n );

    int res = funct(n);

    printf("Indice : %d \n ", res);

    return 0;
}