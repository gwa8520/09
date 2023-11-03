#include <stdio.h>
#include <stdlib.h>

#define ROWS  3
#define COLS  3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void addMatrix(int A[][COLS], int B[][COLS]){
	//C=A+B : for loop
	int i,j;
	int SUM[ROWS][COLS];
		for(i=0; i<2; i++)
			for(j=0;j<2;j++)
				SUM[i][j]=A[ROWS][COLS]+B[ROWS][COLS];
			
		for(i=0; i<2; i++)
			for(j=0;j<2;j++)
				printf("C[%i][%i]=%2d",i,j,SUM[i][j]);
			
			printf("\n");
	
}


int main(int argc, char *argv[]) {
	
	int A[ROWS][COLS]={
		{2,3,0},{8,9,1},{7,0,5}};
		
	int B[ROWS][COLS]={
		{1,0,0},{0,1,0},{0,0,1}};
		
	int C[ROWS][COLS]={};
	
	
	Matrix(A,B,C);
	
	return 0;
}
