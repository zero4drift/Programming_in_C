//设计双重链表结构并实现删除列表项功能

#include <stdio.h>

struct entry
	{
		int          value;
		struct entry *before;
		struct entry *next;
	};

int main(void)
{
	struct entry begin, n1, n2, n3, n2_3;
	struct entry *list_pointer = &begin;
	void removeEntry(struct entry *item);
	
	begin.next = &n1;
	
	n1.value = 100;
	n1.next = &n2;
	
	n2.value = 200;
	n2.before = &n1;
	n2.next = &n3;
	
	n3.value = 300;
	n3.before = &n2;
	n3.next = (struct entry *) 0;
	
	n2_3.value = 400;
	
	removeEntry(&n2);
	
	while(list_pointer->next != (struct entry *) 0){
		printf("%i\n", list_pointer->next->value);
		list_pointer = list_pointer->next;
	}
	
	return 0;
}

void removeEntry(struct entry *item)
{
	item->next->before = item->before;
	item->before->next = item->next;
}