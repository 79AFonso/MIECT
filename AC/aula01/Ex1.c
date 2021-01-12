#include <stdio.h>

int counterF1;
int counterF2;
int counterF3;
int counterF4;

unsigned int f1 (unsigned int n){

	unsigned int i, j, r = 0;

	for(i = 1; i<= n; i++){
		for(j=1; j<=n; j++){
			r+=1;
			counterF1++;
		}
	}

	return r;

}

unsigned int f2(unsigned int n){

	unsigned int i, j, r=0;

	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			r+=1;
			counterF2++;
		}
	}
	return r;
}

unsigned int f3(unsigned int n){

	unsigned int i, j, r=0;

	for(i=1;i<=n; i++){
		for(j=i;j<=n;j++){
			r+=j;
			counterF3++;
		}
	}
	return r;
}

unsigned int f4(unsigned int n){

	unsigned int i, j, r=0;

	for(i=1;i<=n; i++){
		for(j=i;j>=1;j/=10){
			r+=i;
			counterF4++;
		}
	}
	return r;
}



int main (void){

	int i, resultado;

	/*for(i=1; i<=15; i++){

		counterF1=0;
		resultado = f1(i);
		printf("%d %d %d\n", i, resultado, counterF1);

	}*/

	/*for(i=1; i<=15; i++){

		counterF2=0;
		resultado = f2(i);
		printf("%d %d %d\n", i, resultado, counterF2);

	}
	*/

	/*
	for(i=1; i<=15; i++){

		counterF3=0;
		resultado = f3(i);
		printf("%d %d %d\n", i, resultado, counterF3);

	}*/

	for(i=1; i<=15; i++){

		counterF4=0;
		resultado = f4(i);
		printf("%d %d %d\n", i, resultado, counterF4);

	}

}
