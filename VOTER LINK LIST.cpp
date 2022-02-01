#include<iostream>
using namespace std;
int count=0;
struct node
{
    string NAME;
    int AGE,CNIC,VOTE;
  	node *next;
	node *prev;
  node(string Name,int Cnic,int Age,int Vote)
	{
		NAME = Name;
		CNIC = Cnic;
		AGE = Age;
		VOTE=Vote;
	}
}*nn,*temp; 
node* head;
node* tail;

void creatList(string NAME,int CNIC,int AGE,int VOTE)
{
	node* new_node = new node(NAME,CNIC,AGE,VOTE);
	if(head==NULL)
	{
    new_node->next =NULL;
    new_node->prev= NULL;
	head =new_node;
	tail=new_node;   
	count++;
    }
}

void insertatfirst(string NAME,int CNIC,int AGE,int VOTE)
{
	node* new_node = new node(NAME,CNIC,AGE,VOTE);
	if(head==NULL&&tail==NULL)
	{
		cout<<"create list first"<<endl;
	}
	else
	{
	new_node->next = head;
	new_node->prev = NULL;
	head->prev= new_node;
	head =new_node;
	count++;
    }
}
void searching(int Cnic)
{
	int count=0;
	int index=1;
	node* temp = head;
	while(temp!= NULL)
	{
		if(temp->CNIC == Cnic)
		   {
		   	 count++;
		   	 break;
		   }
		   temp= temp->next;
		   index++;
	}
	if(count!=0)
	   cout<<"Value found at position : "<<index<<endl;
	else
	    cout<<"Value not found"<<endl;
}
display()
{
	node* temp= head;
	while(temp!= NULL)
	{
		cout<<temp->CNIC<<"\t";
		cout<<temp->NAME<<"\t";
		cout<<temp->AGE<<"\t";
		cout<<temp->VOTE<<"\t"<<endl;
		temp = temp->next;
	}
}
