#include<stdio.h>
int main(){
int m,a,b;
printf("Enter size, a,b: ");
scanf("%d %d %d", &m,&a,&b);
	int A[m][m][2];
	printf("Enter your board: \n");
	int i,j;
	for(i=0; i<m;i++)
	for(j=0; j<m; j++)
	{
		printf("Values at A[%d][%d]: ",i+1,j+1);
		scanf("%d %d", &A[i][j][0], &A[i][j][1]);
	}
	int p,q;
	printf("Enter initial position: "); 
	scanf("%d %d", &p,&q);
	
	for(i=0; i<a*b; i++)
	 {
	 	p= A[p-1][q-1][0];
	 	q= A[p-1][q-1][1];
	 }
	
	
	printf("Final position is: (%d,%d)", p,q);
	


}
