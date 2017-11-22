/*此程序交替合并两个文件中的行
  并将结果写到stdout          */
 
#include <stdio.h>
 
int main(void)
{
	char fileName1[64], fileName2[64];
	FILE *file1, *file2;
	char s1[81], s2[81];
	void readline(char buffer[], FILE *filePtr);
	
	printf("Enter name of first file: ");
	scanf("%63s", fileName1);
	printf("Enter name of second file: ");
	scanf("%63s", fileName2);
	
	if((file1 = fopen(fileName1, "r")) == NULL){
		printf("Can't open %s for reading.\n", fileName1);
		return 1;
	}
	
	if((file2 = fopen(fileName2, "r")) == NULL){
		printf("Can't open %s for writing.\n", fileName2);
		return 2;
	}
	
	while((fgets(s1, 81, file1)) != NULL && (fgets(s2, 81, file2)) != NULL){
		fprintf(stdout, s1);
		fprintf(stdout, s2);
	}
	
	while((fgets(s1, 81, file1)) != NULL)
		fprintf(stdout, s1);
	
	while((fgets(s2, 81, file2)) != NULL)
		fprintf(stdout, s2);
	
	fclose(file1);
	fclose(file2);
	
	return 0;
}