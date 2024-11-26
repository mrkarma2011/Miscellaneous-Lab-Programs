#include<stdio.h>
#include<string.h>
#include<ctype.h>

/*Raj is a newbie to the programming and while learning programming language he came to know following rules:
1. Each program must start with { and end with }
2. each program must contain only one main fucntion main fucntion must start with < and end with >
3. a program may or may not contain user defined functions, there is no limitations on the number of user defined functions in the program. it must start with ( and end with)
4. Loops are allowed only inside the functions this function can be either main or user defined every loop must start with { and end with }
5. user defined functions are not allowed to be defined inside main or other user defined fucntions
6. nested loops are allowed
7. instructions can be anywhere inside the program
8. number of instructions inside user defined must not be more than 100

if any condition is not fulfilled program will generate compilation error,

Input format:
First line starts with T , number of test cases. each test case will contain a single line L, where L is a program written by Raj.
Output format:
Print No Compilation Errors if his line of program is correct else print Compilation Errors.
constraints:
1<=T<=100
L is a text and can be composed of any of the characters {,{,(,),<,> and P, where P represents instruction.
L comprised of characters mentioned above should be single space delimited
number of characters in text L<=10000


example:
Input
3
{<>(P)}
{<{}>({}))
{({})}
Output:
No Compilation Errors
Compilation Errors
Compilation Errors
*/
void output(int x)
{
	if(x==4)
	printf("No Compilation Errors\n");
	else
	printf("Compilation Errors\n");
	
	return;
}
int main()
{
int T; //testCases
do
{
	printf("enter no. of test cases: "); scanf("%d", &T);
}while(T<1 || T>100);
int L=10000;
// 2D array row represents Test case(T)  and column represents characters of the test case (L)
char prog[T][L];
int i,j,k, caseCount=0;

// input test cases
for(i=0; i<T;i++)
{
	printf("Enter test case %d: ", i+1);
	fgets(prog[i], sizeof(prog[i]), stdin);
}

// length of test cases
int length[T];
for(j=0; j<T ; j++)
for(i=0; prog[j][i]!='\0';i++)
	length[j]++;

//frequency of main braces <>
for(j=0; j<T;j++)
{
	if(prog)
}


int b[2]; // bracket count b[0]++ for { & b[0]-- for } b[1]++ for ( and b[1]-- for )
int c1=0, c2=0,t1,t2;

	 int isOk;
for(j=0; j<T; j++)
{	isOk=0;
		// frequency of braces must be equal 
	for(k=0; prog[j][k]!='\0';k++)
{
	if(prog[j][k]=='{')
	b[0]++;
	if(prog[j][k]=='}')
	b[0]--;
	if(prog[j][k]=='(')
	b[1]++;
	if(prog[j][k]==')')
	b[1]--;
}
if(b[0]!=0 || b[1]!=0)
return "Compilation errors";
else isOk++;
	
	
	// opening closing of program
		if(prog[j][0]=='{' || prog[j][length[j]]!='}')
	{	isOk++;
	
		
	//frequency of main braces <>
	for(k=0; prog[j][k]!='\0'; k++ )
	{	
		if(prog[j][k]=='<')
		{
		c1++; t1=k;
		}
		else if(prog[j][k]=='>')
		{
		c2++; t2=k;
		}
	}
	
	
	//main brace check freq=1 and < before >
	if((c1!=1 || c2!=1)|| t1>t2)  
	return "Compilation errors"
	else
	{
	isOk++;
	
	
	//checking position of user defined function to be outside main
	for(k=0; prog[j][k]!='\0';k++)
	if(prog[j][k]=='('||prog[j][k]==')')
	{
		for(i=0; prog[j][i]!='\0'; j++)
		if(!(prog[j][i]> t1 && prog[j][i]>t2  || prog[j][i]<t1 && prog[j][i]<t2))
		return "Compilation errors";
		else
		continue;
	}
	isOk++;
	
	}
	
output(isOk);
	}
	else return "Compilation errors";
	
}



return 0;	
}
