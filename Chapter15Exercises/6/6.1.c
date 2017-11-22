/*在终端显示一个文件的内容
  一次显示20行并且在每20行
  的最后可以输入一个字符q
  以停止显示文件          */
 
#include <stdio.h>
 
int main(void)
{
	int c;
	int count = 1;
	FILE *filePtr;
	char fileName[64], buffer[81];
	
	printf("Enter name of file: \n");
	scanf("%63s", &fileName);
	
	if((filePtr = fopen(fileName, "r")) == NULL){
		printf("Can't open %s for reading.\n", fileName);
		return 1;
	}
	
	while(fgets(buffer, 80, filePtr) != NULL && c != 'q'){
		if(count == 20){
			count = 1;
			c = getc(filePtr);
		}
		
		fputs(buffer, stdout);
		++count;
	}
	
	fclose(filePtr);
	
	return 0;
}