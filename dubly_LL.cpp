#include <bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node* prev;
	Node* next;
	Node(int val){
		data=val;
		prev=NULL;
		next=NULL;
	}

};
class Doublyll{
	Node* head;
	Node* tail;
public:
	Doublyll(){
		head=tail=NULL;
	}

	void insert_Front(int val){
		Node* newNode=new Node(val);
		if(head==NULL){
			head=tail=newNode;
			return;
		}
		newNode->next=head;
		head->prev=newNode;
		head=newNode;
	}
	void insert_back(int val){
		Node* newNode= new Node(val);
		if(head==NULL){
			head=tail=newNode;

			return;
		}
		tail->next=newNode;
		newNode->prev=tail;
		tail=newNode;
	}

	void deleteValue(int val){

    Node* temp = head;

    while(temp != NULL && temp->data != val)
        temp = temp->next;

    deleteNode(temp);
}
void deleteNode(Node* node){

        if(node == NULL)
            return;

        if(node == head)
            head = node->next;

        if(node == tail)
            tail = node->prev;

        if(node->prev)
            node->prev->next = node->next;

        if(node->next)
            node->next->prev = node->prev;

        if(head)
            head->prev = NULL;

        if(tail)
            tail->next = NULL;

        delete node;
    }
    void reverse_(){

    Node* curr = head;
    Node* temp = NULL;

    while(curr != NULL){

        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;

        curr = curr->prev;
    }

    temp = head;
    head = tail;
    tail = temp;
}











	void printLL(){
		Node* temp=head;
		while(temp!=NULL){
			cout<<temp->data<<"<->";
			temp=temp->next;
		}
		cout<<"null";
		cout<<endl;

	}
	









};

int main(){
	Doublyll dl;
	dl.insert_Front(20);
	dl.insert_Front(30);
	dl.insert_Front(40);
	dl.insert_Front(50);
	dl.insert_Front(60);
	dl.insert_back(70);
	dl.deleteValue(30);

	dl.printLL();
	dl.reverse_();
	dl.printLL();

}