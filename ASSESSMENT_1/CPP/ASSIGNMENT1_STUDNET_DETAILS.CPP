#include<iostream>
using namespace std;


class Student
{

	int id,s1,s2,s3,tot,avg;	
	char name[30];
	public:
	void getinfo()
	  {
	  	
	  	cout<<"\nENTER THE DETAILS OF THE STUDENT:    ";
	  	cout<<"\nENTER THE ID OF THE STUDENT: ";
	  	cin>>id;
	  	cout<<"\nENTER THE NAME OF THE STUDENT: ";
	  	cin>>name;
	  	cout<<"\nENTER THE MARKS OF MATHS: ";
	  	cin>>s1;
	  	cout<<"\nENTER THE MARKS OF PHYSICS: ";
	  	cin>>s2;
	  	cout<<"\nENTER THE MARKS OF CHEMISTRY:";
	  	cin>>s3;  
	    }
	    
	  
	  
	void calculate()
	
    	{
    		
		tot=s1+s2+s3;
		avg=tot/3;
		
	    }
	
	void show()
	
     {   
	     /*cout<<"\nDETAILS OF THE STUDENT WITH ID: "<<id;
		cout<<"\nID: "<<id;
		cout<<"\nNAME: "<<name;
		cout<<"\nMATHS MARKS: "<<s1;
		cout<<"\nPHSYICS MARKS: "<<s2;
		cout<<"\nCHEMISTRY MARKS: "<<s3;
		cout<<"\nTOTAL MARKS: "<<tot;
		cout<<"\nAVERAGE: "<<avg;  */	
		cout<<id<<"  |  "<<name<<"  |       "<<s1<<"  |    "<<s2<<"  |    "<<s3<<"  |   "<<tot<<"  |     "<<avg<<endl;		
     }


};

int main()

{
	int i,n;
	cout<<"ENTER THE NUMBER OF STUDENTS: ";
	cin>>n;
	
	Student s[n];
	/* s.numberofstudents(); */ 
	for(i=0;i<n;i++)
	
   {
    s[i].getinfo();
	
   }
   cout<<"ID    NAME    MARKS_1   MARKS_2   MARKS_3   TOTAL   AVERAGE"<<endl;
    for(i=0;i<n;i++)
    {
    
    s[i].calculate();
    
    /*cout<<"\t"*/
    
	s[i].show();
    }

}
