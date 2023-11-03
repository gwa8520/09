#include <stdio.h>
#include <stdlib.h>

#define SIZE  4
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void squre_array(int a[],int size){
	int i;
	
	for(i=0; i<SIZE; i++)
		a[i]=a[i]*a[i];
}

void print_array(int a[], int size){
	int i;
	
	for(i=0;i<SIZE;i++)
		printf("%3d", a[i]);
	printf("\n");
}

int main(int argc, char *argv[]) {
	
	int i;
	int list[SIZE]={1,2,3,4};
		
	print_array(list,SIZE);
	squre_array(list,SIZE);  //원본이 가기에 제곱된 값이 출력이 된다.  
	print_array(list,SIZE);
	
	
	return 0;
}
