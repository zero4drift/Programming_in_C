//编写一个函数将一个新项目插入到一个链表中

#include <stdio.h>

struct entry
	{
		int          value;
		struct entry *next;
	};

int main(void)
{
	struct entry n1, n2, n3, n2_3;
	struct entry *list_pointer = &n1;
	void insertEntry(struct entry *insert, struct entry *original);
	
	n1.value = 100;
	n1.next = &n2;
	
	n2.value = 200;
	n2.next = &n3;
	
	n3.value = 300;
	n3.next = (struct entry *) 0;
	
	n2_3.value = 400;
	
	insertEntry(&n2_3, &n2);
	
	while(list_pointer != (struct entry *) 0){
		printf("%i\n", list_pointer->value);
		list_pointer = list_pointer->next;
	}
	
	return 0;
}

void insertEntry(struct entry *insert, struct entry *original)
{
	insert->next = original->next;
	original->next = insert;
}

