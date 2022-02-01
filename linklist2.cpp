#include<iostream>
using namespace std;
int Count=0;
struct node2
{
	int CAND_AGE;
    string CAND_NAME,CAND_PARTY,CAND_CNIC;
    
  	node2 *next;
	node2 *prev;
  node2(string Cand_CNIC,string Cand_NAME,string Cand_PARTY,int Cand_AGE)
	{
		CAND_NAME = Cand_NAME;
		CAND_CNIC = Cand_CNIC;
		CAND_PARTY =Cand_PARTY;
		CAND_AGE  =Cand_AGE; 
	}
}*nn2,*temp2; 
node2* head2;
node2* tail2;

void creatList(string CAND_CNIC,string CAND_NAME,string CAND_PARTY,int CAND_AGE)
{
	node2* new_node = new node2(CAND_CNIC,CAND_NAME,CAND_PARTY,CAND_AGE);
	if(head2==NULL)
	{
    new_node->next =NULL;
    new_node->prev= NULL;
	head2 =new_node;
	tail2=new_node;   
	Count++;
    }
}

void insertatfirst(string CAND_CNIC,string CAND_NAME,string CAND_PARTY,int CAND_AGE)
{
	node2* new_node = new node2(CAND_CNIC,CAND_NAME,CAND_PARTY,CAND_AGE);
	if(head2==NULL&&tail2==NULL)
	{
		cout<<"create list first"<<endl;
	}
	else
	{
	new_node->next = head2;
	new_node->prev = NULL;
	head2->prev= new_node;
	head2 =new_node;
	Count++;
    }
}
void searching(string Cand_CNIC)
{
	int Count=0;
	int index=1;
	node2* temp = head2;
	while(temp2!= NULL)
	{
		if(temp->CAND_CNIC == Cand_CNIC)
		   {
		   	 Count++;
		   	 break;
		   }
		   temp= temp->next;
		   index++;
	}
	if(Count!=0)
	   cout<<"Value found at position : "<<index<<endl;
	else
	    cout<<"Value not found"<<endl;
}

 void display23()
{
	node2* temp= head2;
	cout<<"PARTY NAME      "<<"  "<<"    CAND_NAME   "<< "      CNIC    "<<"       AGE "<<"       "<<endl;
	while(temp!= NULL)
	{
		cout<<temp->CAND_PARTY<<"\t\t\t";
		cout<<temp->CAND_NAME<<"\t\t";
		cout<<temp->CAND_CNIC<<"\t\t";
		cout<<temp->CAND_AGE<<"\t\t";
		temp = temp->next;
	}
}
