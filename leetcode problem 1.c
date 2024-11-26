#include<stdio.h>
int  multiplier( char c , char a1 , char a2 ) {
        return (c == a1 || c == a2) ? -1 : +1;}

int romanToInt(char* s) {
        int    result = 0;
		int n;
        for( n = 0 ; s[n]!='\0' ; ++n )
        {
            switch( s[n] )
            {
            case 'M':   result += 1000; break;
            case 'D':   result +=  500; break;
            case 'C':   result +=  100 * multiplier( s[n+1] , 'M' , 'D' ); break;
            case 'L':   result +=   50; break;
            case 'X':   result +=   10 * multiplier( s[n+1] , 'C' , 'L' ); break;
            case 'V':   result +=    5; break;
            case 'I':   result +=    1 * multiplier( s[n+1] , 'X' , 'V' ); break;
            }
        }
        return result;}

int main(){
	char roman[1000];
	printf("Enter your roman numeral: ");
	fgets(roman, sizeof(roman), stdin);
	printf("Decimal is:  %d", romanToInt(roman));
}
