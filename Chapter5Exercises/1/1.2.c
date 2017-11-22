/*此程序计算一组成绩的平均值并计算不及格成绩的个数*/

#include <stdio.h>

int main(void)
{
	int   numberOfGradws, i, grade;
	int   gradeTotal = 0;
	int   failureCount = 0;
	float average;
	
	printf("How many grades will you be entering? ");
	scanf("%i", &numberOfGradws);
	
	for(i = 1; i < numberOfGradws; ++i){
		printf("Enter grade #%i: ", i);
		scanf("%i", &grade);
		
		gradeTotal = gradeTotal + grade;
		
		if(grade < 65)
			++failureCount;
	}
	
	average = (float)gradeTotal / numberOfGradws;
	
	printf("\nGrade average = %.2f\n", average);
	printf("Number of failures = %i\n", failureCount);
	
	return 0;
}