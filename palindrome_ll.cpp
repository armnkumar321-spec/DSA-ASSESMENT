#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class List{
    Node* head;
    Node* tail;
public:
    List(){
        head=tail=NULL;
    }




    void Push_front(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        else{
        newNode->next=head;
        head=newNode;
    }
    

}
Node* reverse(Node* head){

    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL){

        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

bool isPalindrome(){

    if(head == NULL || head->next == NULL)
        return true;

    
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

   
    Node* second = reverse(slow);

    
    Node* first = head;

    while(second != NULL){

        if(first->data != second->data)
            return false;

        first = first->next;
        second = second->next;
    }

    return true;
}
    





    void printLL(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"null\n";
    }

};






int main(){
    List l;
    l.Push_front(10);
    l.Push_front(20);
    l.Push_front(20);
    l.Push_front(10);
    

    l.printLL();
    if(l.isPalindrome())
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    


    

    


}
