#include <stdio.h>

int main(void)
{
	int start = 0, demands = 8;
	unsigned int value = 0xe1f4u, mod = 0x55u;
	void bitpat_set(unsigned int *ui_ptr, unsigned int mod, int start, int demands);
	
	printf("Before the replacement: %#x.\n", value);
	
	bitpat_set(&value, mod, start, demands);
	printf("%i Elements from the start %i replaced with %#x: %#x.\n", 
	       demands, start, mod, value);
	
	return 0;
}

void bitpat_set(unsigned int *ui_ptr, unsigned int mod, int start, int demands)
{
	int length, distance;
	unsigned int temp;
	int int_size(unsigned int number);
	unsigned int bitpat_get(unsigned int number, int start, int demands);
	
	length = int_size(*ui_ptr);
	start %= length;
	
	if(demands > (length - start))
		demands = length - start;
	
	distance = length - demands - start;
	temp = bitpat_get(*ui_ptr, start, demands);   //从原字段提取start和demands指定数目的子字段
	
	temp = temp << distance;                      //将提取出的子字段左移恢复到在原字段中的位置
	mod = mod << distance;                        //将替换的字段左移到与待替换的子字段相同的位置
	
	*ui_ptr -= temp;                              //将原字段中子字段的位全部设为零（减去左移后子字段的值即可）
	*ui_ptr += mod;                               //将修改后的原字段与左移后替换子字段的值相加即可完成替换工作
}

unsigned int bitpat_get(unsigned int number, int start, int demands)
{
	int length, amounts;
	int int_size(unsigned int number);
	
	length = int_size(number);
	amounts = int_size(~0);
	start %= length;
	
	if(start < 0)
		return -1;
	
	if(demands <= 0)
		return -1;
	else if(demands >= length)
		demands = length - start;
	
	number = number << (length + start);
	number = number >> (amounts - demands);
	
	return number;
}

int int_size(unsigned int number)
{
	int count = 0;
	
	while(number != 0){
		number /= 2;
		++count;
	}
	
	return count;
}