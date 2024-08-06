#include<stdio.h>
#include<conio.h>

/*
	Escape Sequence Characters :
		\n	=> new line
		\t	=> tab space
			=> NEW OS : 4 space
			=> OLD OS : 8 space
		\"	=> double quoatation
		\\	=> back slash

12345678
12345678123456789

*/

main()
{
	clrscr();
	printf("Hello\nWorld !!\n");
	printf("\nLet's begin with C language !!\n\n");

	printf("Name\t\t : Ketul Prajapati\n");
	printf("Age\t\t : 17\n");
	printf("Course\t\t : C Language\n");
	printf("Contact no\t : 7845129865\n");
	printf("Hobby\t\t : \"Coding\" \\ ");

	getch();
}