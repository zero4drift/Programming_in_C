//此程序将一个文件复制到另一文件，第二版


#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *in, *out;
	int c;
	
	if(argc != 3){
		fprintf(stderr, "Need two files names\n");
		return 1;
	}
	
	if((in = fopen(argv[1], "r")) == NULL){
		printf("Can't open %s for reading.\n", argv[1]);
		return 2;
	}
	
	if((out = fopen(argv[2], "w")) == NULL){
		printf("Can't open %s for writing.\n", argv[2]);
		return 3;
	}
	
	while((c = getc(in)) != EOF)
		putc(c, out);
	
	fclose(in);
	fclose(out);
	
	printf("File has been copied.\n");
	
	fclose(in);
	fclose(out);
	return 0;
}