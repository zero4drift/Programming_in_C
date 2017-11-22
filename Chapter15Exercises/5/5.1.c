/*此程序将一个文件每一行的第m至n列
  写到stdout并在终端窗口接收m、n值*/
  
#include <stdio.h>

//约定文件中每一行的最前列为第零列
int main(void)
{
	int m, n, count;
	FILE *filePtr;
	char fileName[64], buffer[81], result[81];
	void substring(char source[], int start, int count, char result[]);
	
	printf("Enter two unsigned integers ");
	printf("and the first one is smaller: \n");
	scanf("%i%i", &m, &n);
	
	count = n - m + 1;
	
	printf("\nEnter name of file: \n");
	scanf("%63s", &fileName);
	
	if((filePtr = fopen(fileName, "r")) == NULL){
		printf("Can't open %s for reading.\n", fileName);
		return 1;
	}
	
	while(fgets(buffer, 81, filePtr) != NULL){
		substring(buffer, m, n - m + 1, result);
		fprintf(stdout, result);
		fprintf(stdout, "\n");
	}
	
	fclose(filePtr);
	
	printf("\nFile has been written to stdout.\n");
	
	return 0;
}

void substring(char source[], int start, int count, char result[])
{
	int i, length;
	int stringLength(char string[]);
	
	length = stringLength(source);
	
	if(count <= length){
		for(i = start; i < start + count; ++i)
			result[i - start] = source[i];
		result[count] = '\0';
	}
	else{
		for(i = start; i < length; ++i)
			result[i - start] = source[i];
		result[length - start] = '\0';
	}
}

int stringLength(char string[])
{
	int count = 0;
	
	while(string[count] != '\0')
		++count;
	
	return count;
}