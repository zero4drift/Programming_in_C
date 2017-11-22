//重写第9章的compareStrings函数（使用指针）

#include <stdio.h>

int main(void)
{
	int isEqual;
	char *s1 = "There it is.", *s2 = "There it is.";
	int compareStrings(const char *s1, const char *s2);
	
	isEqual = compareStrings(s1, s2);
	
	printf("%i\n", isEqual);
	
	return 0;
}


int compareStrings(const char *s1, const char *s2)
{
	int answer;
	
	while(*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		++s1, ++s2;
	
	if(*s1 < *s2)
		answer = -1;        /* s1 < s2 */
	else if(*s1 == *s2)
		answer = 0;         /* s1 == s2 */ 
	else
		answer = 1;         /* s1 > s2 */
	
	return answer;
}