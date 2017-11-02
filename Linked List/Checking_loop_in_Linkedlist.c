
/*
		This function finds if a linked list has a loop or not 
*/

struct ListNode {
	int data;
	struct Listnode *next;
};

int IsLoopExist(struct ListNode *head) {
	if(head == NULL)
		return 0;
	struct ListNode *slowptr,*fastptr ; 
	
	slowptr = fastptr = head ;
	do{
		slowptr = slowptr->next;
		fastptr = fastptr->next->next;
	}
	while(fastptr->next != NULL &&fastptr->next->next != NULL fastptr != slowptr)
	
	if(slowptr == fastptr) //loop exist
		return 1;
	return 0;
	
}
