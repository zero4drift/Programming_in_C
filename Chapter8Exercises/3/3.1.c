/*利用函数和结构体两个
  时间点之间的时长
  用时分秒显示        */

#include <stdio.h>

struct time
{
	int hour;
	int minutes;
	int seconds;
};

//此函数每秒更新一次时间

struct time timeUpdate(struct time nowTime, _Bool choice)
{
	++nowTime.seconds;
	
	if(nowTime.seconds == 60){      //下一分钟
		nowTime.seconds = 0;
		++nowTime.minutes;
		
		if(nowTime.minutes == 60){  //下一小时
			nowTime.minutes = 0;
			++nowTime.hour;
			
			if(choice)
				if(nowTime.hour == 24)  //午夜
			        nowTime.hour = 0;
		}
	}
	
	return nowTime;
}



//此函数计算两个时间点的间隔

struct time elapsed_time(struct time time1, struct time time2)
{
	struct time timeUpdate(struct time nowTime, _Bool choice);
	struct time periodTime = {0, 0, 0};
	
	while(time1.hour != time2.hour 
	      || time1.minutes != time2.minutes
		  || time1.seconds != time2.seconds)
	{
		periodTime = timeUpdate(periodTime, 0);
		time1 = timeUpdate(time1, 1);
	}
	
	return periodTime;
}

int main(void)
{
	struct time elapsed_time(struct time time1, struct time time2);
	struct time firstTime = {3, 45, 15}, secondTime = {9, 44, 03};
	struct time periodTime;
	
	periodTime = elapsed_time(firstTime, secondTime);
	
	printf("The period between %.2i:%.2i:%.2i and %.2i:%.2i:%.2i is %.2i:%.2i:%.2i\n", 
	       firstTime.hour, firstTime.minutes, firstTime.seconds, secondTime.hour, 
		   secondTime.minutes, secondTime.seconds, periodTime.hour, periodTime.minutes,
		   periodTime.seconds);
		   
	return 0;
}