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

node* reverse(node* &head){
	node* prevptr = NULL;
	node* currptr = head;
	node* nextptr;

	while(currptr != NULL){
		nextptr = currptr -> next;
		currptr ->next = prevptr;

		prevptr = currptr;
		currptr = nextptr;
	}
	return prevptr;
}

node* reverseRecursive(node* &head){
	if(head == NULL || head -> next == NULL)return head;
	node* newHead = reverseRecursive(head -> next);
	head -> next -> next = head;
	head -> next = NULL;

	return newHead;
}

int main(){

	node* head = NULL;
	insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	insertAtTail(head,4);
	display(head);

	node* newHead = reverseRecursive(head);
	display(newHead);

	return 0;
}