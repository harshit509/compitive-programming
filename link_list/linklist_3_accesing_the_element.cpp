#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
void printll(node* head){
	node* temp=head;
	while(temp!=0){
		cout<<temp->data;
		temp=temp->next;
			cout<<"\n";
	
	}

}
int main(){
//	int *a=new int like dynammic programming
//*a=10;
//cout<<*a;

node *head =new node;
(*head).data=15;   /*  head->data=15 we can write as well*/
(*head).next=new node;
head->next->data=30;
head->next->next=0;

//cout<<(*head).data<<" "<<head->next->data;
printll(head);
return 0;
	
}