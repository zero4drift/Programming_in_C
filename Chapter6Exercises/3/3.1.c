#include <stdio.h>

int main(void)
{
	int ratingCounters[11], i, response;
	
	for(i = 1; i <= 10; ++i)
		ratingCounters[i] = 0;
	
	printf("Enter your response\n");
	
	do{
		scanf("%i", &response);
		if(response < 1 || response > 10)
			printf("Bad response: %i\n", response);
		else
			++ratingCounters[response];
	}
	while(response != 999);
	
	printf("\n\nRating Number of Response\n");
	printf("----- --------------------\n");
	
	for(i = 1; i <= 10; ++i)
		printf("%4i%14i\n", i, ratingCounters[i]);
	
	return 0;
}