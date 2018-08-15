#include <stdio.h>
#include <cs50.h>

//prints a pyramid the height of the users input.

int main(void)
{
//keeps getting the height until the users inputs a # between 0-23.
int a;
do
{
    n= get_int("what is the height: ");
} while (a<0 || a>23);
	
for (int b = 0; b < a; b++)
{
	for ( int c = 0; c < a + 1; c++)
	{
		if (a - 1 <= b + c)
			printf("#");
		else
			printf(" ");
	}
	printf("\n");
}
		
}
