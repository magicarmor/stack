/**@mainpage
*   Titov Roman Group IU 8 -21
*   Laboratory  "Dynamic structures of data. Stack"
*/
/************************************************************************/
#include <stdio.h>///  For writting and reading
#include <conio.h>///  For getch()

#define MAX_VALUE 100 /// Max size for stack 


void push( char op);/// Push's prototype
char pop(void);/// Pop's prototype
/// MAIN FUCTION @page
void main()
{
	int i= 0, n;	
	printf("Enter n ( n -- number of elemets of stack) n < %d\n",MAX_VALUE);
	scanf("%d",&n);
	/// @brief Enter stack
	for(; i < n; ++i){
		printf("Enter %d element ",i+1);
		fflush(stdin);
		push( getchar() );
		printf("\n");
	}
	
	char repeat;
	char element;
	/// @brief Poping stack top
	do
	{
		fflush(stdin);
		printf("\nDo you want to receive an element from stack top? (Y/N)");
		scanf("%c",&repeat);
		if( repeat == 'Y'|| repeat == 'y'){
			element = pop();
			if( element )
				printf("%c",element);
		}

	}
	while( (repeat == 'Y'|| repeat == 'y') && element );		
	
}

unsigned char fr_pos = 0;
char stack[MAX_VALUE];

/// The push procedure - to transfer value to a stack
/// {
void push( char op)
{
	if ( fr_pos < MAX_VALUE){
		stack[ fr_pos ] = op;
		++fr_pos;
	}
	else{
		printf( " Stack is full ");
	}
}
// }

/// The pop function - to take from top of a stack and to return this value
/// {
char pop(void)
{
	if ( fr_pos > 0 ){
		--fr_pos;
		return stack[ fr_pos ];
		
	}
	else{
		printf( "Stack is empty" );
		return 0.;
	}
}
/// }

