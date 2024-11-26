#include<stdio.h>
#include<stdlib.h>
int main()
{ 
srand(time(NULL));
 int i=0,k;
	while(i<10){
		int a=(rand() %9)+1;
		int b=(rand() %9)+1;
		i++;
		printf("what is the value of \n ");
	int randomNumber = (rand() %4)+1;
	switch(randomNumber){
	
	case 1:	printf("%d+%d= ",a,b);
	scanf("%d", &k);
	
	if(k== a+b){
		int x = (rand() %3)+1;
	switch(x){
	
	case 1:	printf("Good\n");break;
	case 2: printf("Excellent\n");break;
	case 3:	printf("Impressive\n");break;
	case 4:	printf("Correct\n");break;
}break;}
	else{
		int y = (rand() %3)+1;
	switch(y){
	
	case 1:	printf("Try Again\n");break;
	case 2: printf("Wrong\n");break;
	case 3:	printf("Need to Improve\n");break;
	case 4:	printf("Incorrect\n");break;
	}break;}
	
	
	
	
	
	case 2:	printf("%d-%d= ",a,b);
	scanf("%d", &k);
	
	if(k== a-b){
		int x = (rand() %3)+1;
	switch(x){
	
	case 1:	printf("Good\n");break;
	case 2: printf("Excellent\n");break;
	case 3:	printf("Impressive\n");break;
	case 4:	printf("Correct\n");break;
}break;}
	else{
		int y = (rand() %3)+1;
	switch(y){
	
	case 1:	printf("Try Again\n");break;
	case 2: printf("Wrong\n");break;
	case 3:	printf("Need to Improve\n");break;
	case 4:	printf("Incorrect\n");break;
	}break;}
	
	
	
	
	
	
	
	case 3:	printf("%d*%d= ",a,b);
	scanf("%d", &k);
	
	if(k== a*b){
		int x = (rand() %3)+1;
	switch(x){
	
	case 1:	printf("Good\n");break;
	case 2: printf("Excellent\n");break;
	case 3:	printf("Impressive\n");break;
	case 4:	printf("Correct\n");break;
}break;}
	else{
		int y = (rand() %3)+1;
	switch(y){
	
	case 1:	printf("Try Again\n");break;
	case 2: printf("Wrong\n");break;
	case 3:	printf("Need to Improve\n");break;
	case 4:	printf("Incorrect\n");break;
	}break;}
	
	
	
	
	
case 4:	printf("%d/%d= ",a,b);
	scanf("%d", &k);
	
	if(k== a/b){
		int x = (rand() %3)+1;
	switch(x){
	
	case 1:	printf("Good\n");break;
	case 2: printf("Excellent\n");break;
	case 3:	printf("Impressive\n");break;
	case 4:	printf("Correct\n");break;
}break;}
	else{
		int y = (rand() %3)+1;
	switch(y){
	
	case 1:	printf("Try Again\n");break;
	case 2: printf("Wrong\n");break;
	case 3:	printf("Need to Improve\n");break;
	case 4:	printf("Incorrect\n");break;
	}break;}
	
}}}
