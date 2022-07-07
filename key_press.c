//press any key and show that which key is pressed by user.

#include<stdio.h>
#include<conio.h>

int main()
{
	char ch;
	printf("Press the key");
	printf("\n");
	ch=getch();
	printf("You press the character = %c",ch);
	printf("\n");
	return 0;
}
