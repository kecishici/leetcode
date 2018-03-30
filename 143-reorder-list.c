#include<stdio.h>
#include<stdlib.h>

// definition for singly-linked list
struct ListNode
{
	int val;
	struct ListNode *next;
};

// intialization for singly-linked list using array
struct ListNode* initList(int *array,int length){
	struct ListNode *head,*tmp,*p,*clean_head;
	int i=0;

	p=malloc(sizeof(struct ListNode));
	clean_head=p;
	for(;i<length;i++){
		tmp=(void *) malloc(sizeof(struct ListNode));
		tmp->val=array[i];
		p->next=tmp;
		p=tmp;
		if(i==0)
			head=p;
	}
	p->next=NULL;
	free(clean_head);

	return head;
}

// print singly-linked list
void printList(struct ListNode* head){

	if(!head)
	{
		printf("empty list");
		return;
	}
	while(head!=NULL){
		printf("%d -> ", head->val);
		head=head->next;
	}
s	return;
}
/*
 Given a singly linked list L: L0→L1→…→Ln-1→Ln,
reorder it to: L0→Ln→L1→Ln-1→L2→Ln-2→…

You must do this in-place without altering the nodes' values.

For example,
Given {1,2,3,4}, reorder it to {1,4,2,3}. 
*/
void reorderList(struct ListNode* head)
{
	

}

int main(int argc, char const *argv[])
{
	int arr[]={1,2,3,4};
	struct ListNode *l1;
	l1=initList(arr,4);
	printList(l1);



	return 0;
}