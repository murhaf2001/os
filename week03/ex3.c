#include <stdio.h>
#include <stdlib.h>

struct Node {
	int value;
	struct Node * next;
};

struct Node *head;
void print_list()
{
	if(head == NULL)
		return;
	struct Node it = *head;
	printf("%d ",it.value);
	while(it.next != NULL){
		it = *it.next;
		printf("%d ",it.value);
	}
	puts("");
}

void delete_node(int data){
	struct Node *it = head;
	if(it == NULL)
		return;
	if(it->value == data){
		head = it->next;
		return;
	}
	while(it->next != NULL){
		if(it->next->value == data) {
			it->next = it->next->next;
			break;
		}
		it = it->next;
	}
}

void insert_node(int data){
	if(head == NULL){
		head = (struct Node*)malloc(sizeof(struct Node));
		head->value = data;
		return ;
	}
	struct Node * it = head;
	while(it != NULL){
		if(it->next == NULL){
			it->next = (struct Node*)malloc(sizeof(struct Node));
			it->next->value = data;
			break;
		}
		it = it->next;
	}
}




int main(){
	head = NULL;
	insert_node(1);
	print_list();
        insert_node(11);
        print_list();
        insert_node(9);
        print_list();
        insert_node(8);
        print_list();
        insert_node(7);
        print_list();
        insert_node(6);
        print_list();
        insert_node(3);
        print_list();
        insert_node(5);
        print_list();
	delete_node(1);
	print_list();
        delete_node(1);
        print_list();
        delete_node(11);
        print_list();
        delete_node(40);
        print_list();
        delete_node(8);
        print_list();
        delete_node(5);
        print_list();
        delete_node(7);
        print_list();

	
	return 0;
}
