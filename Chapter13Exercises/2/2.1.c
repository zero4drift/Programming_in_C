#include <stdio.h>

enum month {January = 1, February, March, April, May, June, 
            July, August, September, October, November, December};
			
int main(void)
{
	char *monthName(enum month aMonth);
	enum month aMonth = February;
	
	printf("%s\n", monthName(aMonth));
	
	return 0;
}

char *monthName(enum month aMonth)
{
	switch(aMonth){
		case January:
		    return "January";
		case February:
		    return "February";
		case March:
		    return "March";
		case April:
		    return "April";
		case May:
		    return "May";
		case June:
		    return "June";
		case July:
		    return "July";
		case August:
		    return "August";
		case September:
		    return "September";
		case October:
		    return "October";
		case November:
		    return "November";
		case December:
		    return "December";
		default:
		    printf("Bad month number\n");
			break;
	}
}