#include<iostream>
using namespace std;

class node{
	public :
	int data;
	node* next;

	node(int val){
		data = val;
		next = NULL;
	}
};

void insertAtHead(node* &head,int val){
	node* n = new node(val);
	n -> next = head;
	head = n;
}

void insertAtTail(node* &head,int val){
	node* n = new node(val);
	if(head == NULL){
		head = n;
		return;
	}
	node* temp = head;
	while(temp -> next != NULL){
		temp = temp->next;
	}
	temp -> next = n;
}

void deleteHead(node* &head){
	node* toDelete = head;
	head = head -> next;
	delete toDelete;
}

void deletion(node* &head,int val){
	if(head == NULL)return;
	if(head -> next = NULL){
		deleteHead(head);
		return;
	}
	node* temp = head;
	while(temp -> next -> data != val){
		temp = temp -> next;
	}
	node* toDelete = temp -> next;
	temp -> next = temp -> next -> next;
	delete toDelete;
}

bool search(node* head,int key){
	node* temp = head;
	while(temp != NULL){
		if(temp -> data == key){
			return true;
		}
		temp = temp -> next;
	}
	return false;
}

void display(node* head){
	node* temp = head;
	while(temp != NULL){
		cout << temp -> data <<" -> ";
		temp = temp -> next;
	}
	cout <<"NULL" << endl;
}

int findLen(node* head){
	node* temp = head;
	int len = 0;
	while(temp != NULL){
		len++;
		temp = temp -> next;
	}
	return len;
}

node* appendKnode(node* &head,int k){
	int count = 1;
	int l = findLen(head);
	node* newHead;
	node* newTail;
	node*tail = head;

	while(tail -> next != NULL){
		if(count == l-k){
			newTail = tail;
		}
		if(count == l-k+1){
			newHead = tail;
		}
		tail = tail -> next;
		count++;
	}
	newTail -> next = NULL;
	tail -> next = head;

	return newHead;

}

void intersect(node* &head1,node* head2,int pos){
	node* temp1 = head1;
	pos--;
	while(pos--){
		temp1 = temp1 -> next;
	}

	node* temp2 = head2;
	while(temp2 -> next != NULL){
		temp2 = temp2 -> next;
	}
	temp2 -> next = temp1; 
}

int intersection(node* &head1,node* head2){
	int d = 0;
	int l1 = findLen(head1);
	int l2 = findLen(head2);

	node* ptr1;
	node* ptr2;

	if(l1 > l2){
		d = l1 - l2;
		ptr1 = head1;
		ptr2 = head2;
	}
	else{
		d = l2 - l1;
		ptr1 = head2;
		ptr2 = head1;
	}

	while(d){
		ptr1 = ptr1 -> next;
		if(ptr1 == NULL){
			return -1;
		}
		d--;
	}

	while(ptr1 != NULL && ptr2 != NULL){
		if(ptr1 == ptr2){
			return ptr1 -> data;
		}
		ptr1 = ptr1 -> next;
		ptr2 = ptr2 -> next;
	}
	return -1;
}

node* merge(node* &head1, node* &head2){
	node* result;
	if(head1 == NULL){
		result = head2;
	}

	if(head2 == NULL){
		result = head1;
	}

	if(head1->data > head2->data){
		result = head2;
		result->next = merge(head1,head2->next);
	}
	else{
		result = head1;
		result->next = merge(head1->next,head2);
	}

	return head1;
}

node* mergeIteration(node* head1,node* head2){
	node* dummyNode = new node(-1);
	node* temp1 = head1;
	node* temp2 = head2;
	node* p3 = dummyNode;
	while(head1 != NULL &&  head2 != NULL){
		if(temp1->data < temp2->data){
			p3->next = temp1;
			temp1 = temp1->next;
		}
		else{
			p3->next = temp2;
			temp2 = temp2 -> next;
		}
		p3 = p3 -> next;
	}

	while(temp1 != NULL){
		p3->next = temp1;
		temp1 = temp1->next;
		p3 = p3->next;
	}

	while(temp2 != NULL){
		p3->next = temp2;
		temp2 = temp2 -> next;
		p3 = p3->next;
	}

	return head1;
}

void evenAfterOdd(node* &head){
	node* even = head->next;
	node* odd = head;
	node* evenSt = even;

	while(even->next !=NULL && odd->next != NULL){
		odd->next = even->next;
		odd = odd->next;
		even->next = odd->next;
		even = even->next;
	}
	odd->next = evenSt;
	if(odd->next != NULL){
		even->next == NULL;
		
	}
}

int main(){

	node* head1 = NULL;
	insertAtTail(head1,1);
	insertAtTail(head1,2);
	insertAtTail(head1,3);
	insertAtTail(head1,4);
	insertAtTail(head1,5);
	insertAtTail(head1,6);
	insertAtTail(head1,7);

	evenAfterOdd(head1);
	display(head1);

	return 0;
}