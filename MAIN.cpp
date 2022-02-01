#include<iostream>
#include<fstream>
#include "VOTER LINK LIST.cpp"
#include "linklist2.cpp"
using namespace std;
int main()
{
	int x=0;
	
	cout<<"PRESS 1 for Candidates : " << endl;
	cout<<"PRESS 2 for Voters : " << endl;
	cout<<"PRESS 3 ; Searching for Votes of Candidates : " << endl;
	cout<<"PRESS 4 for Leading Candidate : " << endl;
	
	cin>>x;
	
	switch(x)
	{
		case 1:
		{	
	        int a;
            int cand_vote, cand_age;
            string cand_party,cand_cnic,cand_name;
	        cout<<"1:create a list"<<endl;
	        cout<<"2:insert at start"<<endl;
        	cout<<"3:Search a given value"<<endl;
        	cout<<"4:Display list"<<endl;	
      	    cout<<"\t\t\t--------------------------------\n"<<endl;
	
        	cout<<"Enter choice"<<endl;
        	cin>>a;
	switch(a)
	{
		case 1:
			{
				cout<<"Enter the age"<<endl;
				cin>>cand_age;
				if(cand_age>=18)
				{
				cout<<"Enter the party name"<<endl;
				cin>>cand_party;
				cout<<"Enter the cnic"<<endl;
				cin>>cand_cnic;
				cout<<"Enter the name"<<endl;
				cin>>cand_name;
				creatList(cand_cnic,cand_name,cand_party,cand_age);
			   }
			   else
			   {
			   	cout<<"you are under-age!!!!!!!!!!"<<endl;
			   	break;
			   }
			
				cout<<"List is "<<endl;
				display23();
				cout<<"\n";
				break;
			}
			case 2:
			{
				cout<<"Enter the age"<<endl;
				cin>>cand_age;
				if(cand_age>=18)
				{
				cout<<"Enter the party name"<<endl;
				cin>>cand_party;
				cout<<"Enter the cnic"<<endl;
				cin>>cand_cnic;
				cout<<"Enter the name"<<endl;
				cin>>cand_name;
				
				insertatfirst(cand_cnic,cand_name,cand_party,cand_age);
			    }
			    else
			    {
			    	cout<<"you are under-age!!!!!!!!"<<endl;
			    	break;
				}
				cout<<"List is "<<endl;
				display23();
				cout<<"\n";
				break;
			}
					
					case 3:
						{
							
							cout<<"Enter the number"<<endl;
							cin>>cand_cnic;
							searching(cand_cnic);
							break;
						}
					case 4:
						{
						cout<<"List is "<<endl;
				        display23();
				        cout<<"\n";
				break;
						}
					
			default:
			{
				cout<<"\a";	}

}
}
			
	
		
		case 2:
		{
				
			
			
			node* check=0;
	check=head;
	string str;
    int a,age,cnic,vote;
    string name;
	cout<<"1:START VOTING"<<endl;  //creat a list
	
	cout<<"2:INSERT THE VOTE"<<endl;//insert at start
	cout<<"3:Search a given value"<<endl;//Search a given value
	cout<<"4:Display list"<<endl;//Display list	
	cout<<"\t\t\t---------------------------------\n"<<endl;
	
	cout<<"ENTER CHOICE"<<endl;
	cin>>a;
	switch(a)
	{
		case 1:
			{
				ofstream inputfile;
		     	inputfile.open("voters.txt");
		     	
				cout<<"ENTER THE AGE"<<endl;
				cin>>age;
				if(age >= 18)
				{
				cout<<"ENTER THE CNIC"<<endl;
				cin>>cnic;
				
				while(check!= NULL)
				{
					if(check->CNIC == cnic)
					{
						break;
					}
				}
				cout<<"ENTER THE NAME"<<endl;
				cin>>name;
				cout<<"ENTER THE VOTE"<<endl;
				cin>>vote;
				creatList(name,cnic,age,vote);
			    }
			    else
			    {
			    	cout<<"YOU ARE UNDER-AGE !!!!!!!!"<<endl;
			    	break;
				}
				
				inputfile << cnic << " ";
				inputfile << name << " ";
				inputfile << age << " ";
				inputfile << vote << " "<<endl;
				switch(vote)
				{
					case 1:
						{
							ofstream candA;
							candA.open("CandidateA.txt", ios :: app);
							
							candA << cnic ;
							candA << name ;
							candA << age ;
							candA << vote<<endl;
							
							candA.close();
							break;
						}
					case 2:
						{
							ofstream candB;
							candB.open("CandidateB.txt", ios :: app);
							candB << cnic ;
							candB << name ;
							candB << age  ;
							candB << vote <<endl;
							break;
						}
					case 3:
						{
							ofstream candC;
							candC.open("CandidateC.txt", ios :: app);
							candC << cnic ;
							candC << name ;
							candC << age ;
							candC << vote<<endl;
							break;
						}
					case 4:
						{
							ofstream candD;
							candD.open("CandidateD.txt", ios :: app);
							candD << cnic ;
							candD << name ;
							candD << age ;
							candD << vote<<endl;
							break;
						}
				}
				
				
				cout<<"List is "<<endl;
				display();
				cout<<"\n";
				
				inputfile.close();
				break;
			}
			case 2:
			{
				ofstream inputfile;
		     	inputfile.open("voters.txt", ios::app );
		     	
				cout<<"ENTER THE AGE"<<endl;
				cin>>age;
				if(age >= 18)
				{
				cout<<"ENTER THE CNIC"<<endl;
				cin>>cnic;
				
				while(check!= NULL)
				{
					if(check->CNIC == cnic)
					{
						break;
					}
				}
				cout<<"ENTER THE NAME"<<endl;
				cin>>name;
				cout<<"ENTER THE VOTE"<<endl;
				cin>>vote;
				
				insertatfirst(name,cnic,age,vote);
				
			    }
			    else
			    {
			    	cout<<"YOU ARE UNDER-AGE !!!!!!!!"<<endl;
			    	break;
				}
				
				inputfile << cnic<<" ";
				inputfile << name<<" ";
				inputfile << age<<" ";
				inputfile << vote<<" "<<endl;
			
		
				cout<<"LIST IS  "<<endl;
				display();
				cout<<"\n";
				break;
			}
			
							
			case 5:
			{			
				int num;
				cout<<"Enter the number"<<endl;
				cin>>cnic;
				searching(cnic);
				break;
			}
					case 6:
						{
						cout<<"List is "<<endl;
				        display();
				        cout<<"\n";
			         	break;
						}
					
			       default:
			       {
					cout<<"\a";	
					break;
		           }
     
     }
}
		
		case 3:
			{
					int count;
	              int b;
		      	 cout<<"======SEARCHING FOR CANDIDATES VOTES======="<<endl;
	             cout<<"PRESS 1 for CANDIDATE A VOTES : "<<endl;
	             cout<<"PRESS 2 for CANDIDATE B VOTES : "<<endl;
	             cout<<"PRESS 3 for CANDIDATE C VOTES : "<<endl;
	             cout<<"PRESS 4 for CANDIDATE D VOTES : "<<endl;
	             CH:
	     	     cout<<"Enter choice"<<endl;
	             cin>>b;
	             switch(b)
             	{
	          	case 1:
	        	 {
		      	     ifstream file1;
		     	    file1.open("CandidateA.txt", ios:: app);
		         	int count= -1;
		     	     char str[80];
		      	    while(!file1.eof()){
			     	file1.getline(str,80);
			    	count++;
			     }
			     cout<<"Numbers of votes CANDIDATE-A secured : "<<count<<endl;
			     file1.close();
			     goto CH;
			     break;
		         }
        
		 case 2:
		 {
	
			ifstream file2;
			file2.open("CandidateB.txt", ios:: app);
			int count= -1;
			char str[80];
			while(!file2.eof()){
				file2.getline(str,80);
				count++;
			}
			cout<<"Numbers of votes CANDIDATE-B secured : "<<count<<endl;
			file2.close();
			goto CH;
			break;
			
         }

		case 3:
		 {
			ifstream file3;
			file3.open("CandidateC.txt", ios:: app);
			int count= -1;
			char str[80];
			while(!file3.eof()){
				file3.getline(str,80);
				count++;
			}
			cout<<"Numbers of votes CANDIDATE-C secured : "<<count<<endl;
			file3.close();
			goto CH;
			break;
          }
        
		case 4:
			{
			ifstream file4;
			file4.open("CandidateD.txt", ios:: app);
			int count= -1;
			char str[80];
			while(!file4.eof()){
				file4.getline(str,80);
				count++;
			}
			cout<<"Numbers of votes CANDIDATE-D secured : "<<count<<endl;
			file4.close();
			goto CH;
			break;
		}
		default:
			cout<<"-THANKS FOR VOTING-";
			break;
    }
}
		
		case 4:
    	   {
    	   	int voteCount1=-1, voteCount2=-1, voteCount3=-1, voteCount4=-1;
    	    ifstream fin1;
			fin1.open("CandidateA.txt", ios:: app);
			
			char str1[80];
			while(!fin1.eof()){
				fin1.getline(str1,80);
				voteCount1++;
			}
			
			ifstream fin2;
			fin2.open("CandidateB.txt", ios:: app);
			
			char str2[80];
			while(!fin2.eof()){
				fin2.getline(str2,80);
				voteCount2++;
			}
			ifstream fin3;
			fin3.open("CandidateC.txt", ios:: app);
			
			char str3[80];
			while(!fin3.eof()){
				fin3.getline(str3,80);
				voteCount3++;
			}
			ifstream fin4;
			fin4.open("CandidateD.txt", ios:: app);
			
			char str4[80];
			while(!fin4.eof()){
				fin4.getline(str4,80);
				voteCount4++;
			}
			cout<<"\n  #### Leading Candiate ####\n\n";
   
    if(voteCount1>voteCount2 && voteCount1>voteCount3 && voteCount1 >voteCount4)
    cout<<"CANDIDATE A WON";
    else if (voteCount2>voteCount3 && voteCount2>voteCount4 && voteCount2 >voteCount1)
    cout<<"CANDIDATE B WON";
    else if(voteCount3>voteCount4 && voteCount3>voteCount2 && voteCount3 >voteCount1)
    cout<<"CANDIDATE C WON";
    else if(voteCount4>voteCount1 && voteCount4>voteCount2 && voteCount4 >voteCount3)
    cout<<"CANDIDAET D WON";
    	   	
	    }
			   break;	
			

		
		default:
			{
			  break;	
			}
}
}

	
	
	
	
	
	
