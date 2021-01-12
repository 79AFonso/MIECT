#include <stdio.h>
#include <assert.h>

static int arr1[10] = { 1, 2, 2, 2, 3, 3, 4, 5, 8, 8 };
static int arr2[10] = { 1, 2, 2, 2, 3, 3, 3, 3, 8, 8 };
static int arr3[7] = { 1, 2, 3, 2, 1, 3, 4 };
static int arr4[10] = { 1, 2, 5, 4, 7, 0, 3, 9, 6, 8 };
static int arr5[10] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };

int copias=0; // contador de shifts
int comp=0; // contador de comparações
int size=10;

void funct(int* arr, int* size) {
    assert (size>0);

    for(int i=0;i<*size;i++){
        for(int j = i+1; j<*size; j++){
            comp++;
            if(arr[i] == arr[j] ){
                (*size)--;
                for(int k=j; k<*size; k++){
                    arr[k] = arr[k+1];
                    copias++;
                }
                j--;
            }
        }
    }
}

void printArray(int* arr, int* size){

    printf("[");

    for(int i=0; i<*size; i++){
        printf("%d, ", arr[i]);
    }
    printf("]");

}

int main(void){


    printArray(arr1, &size);
    funct(arr1, &size);
    printArray(arr1, &size);
    printf(" : Comparacoes -> %d, Copias -> %d\n", comp, copias);


    copias = 0;
    comp = 0;
    size=10;
    printArray(arr2, &size);
    funct(arr2, &size);
    printArray(arr2, &size);
    printf(" : Comparacoes -> %d, Copias -> %d\n", comp, copias);

    copias = 0;
    comp = 0;
    size=7;
    printArray(arr3, &size);
    funct(arr3, &size);
    printArray(arr3, &size);
    printf(" : Comparacoes -> %d, Copias -> %d\n", comp, copias);

    copias = 0;
    comp = 0;
    size=10;
    printArray(arr4, &size);
    funct(arr4, &size);
    printArray(arr4, &size);
    printf(" : Comparacoes -> %d, Copias -> %d\n", comp, copias);

    copias = 0;
    comp = 0;
    size=10;
    printArray(arr5, &size);
    funct(arr5, &size);
    printArray(arr5, &size);
    printf(" : Comparacoes -> %d, Copias -> %d\n", comp, copias);


    return 0;
}