struct ListNode {
	int data;
	struct Listnode *next;
};

// Finding length of linked list

int lengthOfLinkedList(struct Listnode *head){
	int len = 0;
	if(head==NULL){
		return 0;
	}
	while(head!=NULL){
		head = head->next;
		len++;
	}
	return len;
}

