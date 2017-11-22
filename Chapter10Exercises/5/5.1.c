//设计双重链表结构

#include <stdio.h>

struct entry
	{
		int          value;
		struct entry *before;
		struct entry *next;
	};

int main(void)
{
	struct entry n1, n2, n3;
	struct entry *list_pointer = &n1;
	
	n1.value = 100;
	n1.next = &n2;
	
	n2.value = 200;
	n1.before = &n1;
	n2.next = &n3;
	
	n3.value = 300;
	n3.before = &n2;
	n3.next = (struct entry *) 0;
	
	while(list_pointer != (struct entry *) 0){
		printf("%i\n", list_pointer->value);
		list_pointer = list_pointer->next;
	}
	
	printf("Entry before n3's value is: %i.\n", n3.before->value);
	
	return 0;
}

