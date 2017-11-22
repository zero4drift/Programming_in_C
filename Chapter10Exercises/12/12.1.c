#include <stdio.h>

int main(void)
{
	char *message = "Programming in c is fun\n";
	char message2[] = "You said it\n";
	char *format = "x = %i\n";
	int x = 100;
	
	/*** 第一组 ***/
	printf("Programming in C is fun\n");
	printf("%s", "Programming in C is fun\n");
	printf("%s", message);
	printf(message);
	
	/*** 第二组 ***/
	printf("You said it\n");
	printf(message2);
	printf("%s", message2);
	printf("%s", &message2[0]);
	
	/*** 第三组 ***/
	printf("said it\n");
	printf(message2 + 4);
	printf("%s", message2 + 4);
	printf("%s", &message2[4]);
	
	/*** 第四组 ***/
	printf("x = %i\n", x);
	printf(format, x);
	
	return 0;
}