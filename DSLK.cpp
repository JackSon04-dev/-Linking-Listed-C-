#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

node *makenode(){
	int x;
	cout << "Nhap gia tri: "; cin >> x;
	node *newnode = new node();
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

void pushfront(node *&head){
	node *newnode = makenode();
	newnode->next = head;
	head = newnode ;
}

void print(node *head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
}

void pushback(node *&head){
	node *temp = head;
	node *newnode = makenode();
	if(head==NULL){
		head = newnode;
		return;
	}
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newnode;
}

int main(){
	node *head = NULL;
	for(int i = 1; i <= 5; i++){
		pushfront(head);
	}
	for(int i = 1; i <= 5; i++){
		pushback(head);
	}
	print(head);
	cout << "ABCD" << endl;
	print(head);
	return 0;
}






