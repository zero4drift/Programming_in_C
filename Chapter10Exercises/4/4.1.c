//编写一个函数删除链表中的一个项目

#include <stdio.h>

struct entry
	{
		int          value;
		struct entry *next;
	};

int main(void)
{
	struct entry n1, n2, n3, n2_3, begin;
	struct entry *list_pointer = &begin;
	void removeEntry(struct entry *item);
	
	begin.next = &n1;
	
	n1.value = 100;
	n1.next = &n2;
	
	n2.value = 200;
	n2.next = &n3;
	
	n3.value = 300;
	n3.next = (struct entry *) 0;
	
	n2_3.value = 400;
	
	removeEntry(&begin);
	
	while(list_pointer->next != (struct entry *) 0){
		printf("%i\n", list_pointer->next->value);
		list_pointer = list_pointer->next;
	}
	
	return 0;
}

void removeEntry(struct entry *item)
{
	item->next = item->next->next;
}

