//此程序演示结构体的数组

#include <stdio.h>

struct time
{
	int hour;
	int minutes;
	int seconds;
};

int main(void)
{
	struct time timeUpdate(struct time now);
	struct time testTimes[5] = 
	{
		{11, 59, 59}, 
		{12, 0, 0}, 
		{1, 29, 59}, 
		{23, 59, 59}, 
		{19, 12, 27}
	};
	int i;
	
	for(i = 0; i < 5; ++i){
		printf("Time is %.2i:%.2i:%.2i", testTimes[i].hour,
	           testTimes[i].minutes, testTimes[i].seconds);
		
		testTimes[i] = timeUpdate(testTimes[i]);
		
		printf(" ...One second later it's %.2i:%.2i:%.2i\n", 
		testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
	}
		   
	return 0;
}

struct time timeUpdate(struct time now)
{
	++now.seconds;
	
	if(now.seconds == 60){      //下一分钟
		now.seconds = 0;
		++now.minutes;
		
		if(now.minutes == 60){  //下一小时
			now.minutes = 0;
			++now.hour;
			
			if(now.hour == 24)  //午夜
				now.hour = 0;
		}
	}
	
	return now;
}