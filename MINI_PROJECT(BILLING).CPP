#include<iostream>
using namespace std;

class Chocolates

{


public:

		welcome()
		
		{
		cout<<"^^^^^^^^^^^^WELCOME TO CHOCOLATE WORLD^^^^^^^^^^^^^";	
     	cout<<"\nWE ARE OFFERING FOUR DIFFERENT TYPE OF CHOCOLATES";
     	}
     	
		void DM()
        
        {
        	int n1,b;
			cout<<"\n****WELCOME TO THE DAIRY MILK****";
			string s;
     	    cout<<"\nEnter Your Name to Continue: ";
     	    cin>>s;
			cout<<"\nHow many pieces do you want to order: ";
			cin>>n1;
			b=100*n1;
			cout<<"\nTOTAL PIECES YOU'VE ORDERED "<<n1;
			cout<<"\nCOST PER PIECE   INR 100";
			cout<<"\nTotal amount is:"<<b;
			cout<<"\nTHANK YOU FOR THE PURCHASE WITH US  " +s;
			cout<<"\nHAVE A GOOD DAY";
			
		}
		
		void SN()
         
        {
        	int n2,c;
			cout<<"\n****WELCOME TO SNICKERS SECTION****";
			string s;
     	    cout<<"\nEnter Your Name to Continue: ";
     	    cin>>s;
			cout<<"\nHow many pieces do you want to order: ";
			cin>>n2;
			c=150*n2;
			cout<<"\nTOTAL PIECES YOU'VE ORDERED "<<n2;
			cout<<"\nCOST PER PIECE   INR 150";
			cout<<"\nTotal amount is:"<<c;
			cout<<"\nTHANK YOU FOR THE PURCHASE WITH US  " +s;
			cout<<"\nHAVE A GOOD DAY";
			
		}
		
			void MB()
         
        {
        	int n3,d;
			cout<<"\n****WELCOME TO MILKY BAR SECTION****";
			string s;
     	    cout<<"\nEnter Your Name to Continue: ";
     	    cin>>s;
			cout<<"\nHow many pieces do you want to order: ";
			cin>>n3;
			d=75*n3;
			cout<<"\nTOTAL PIECES YOU'VE ORDERED "<<n3;
			cout<<"\nCOST PER PIECE   INR 75";
			cout<<"\nTotal amount is:"<<d;
			cout<<"\nTHANK YOU FOR THE PURCHASE WITH US  " +s;
			cout<<"\nHAVE A GOOD DAY";
			
		}
		
		    void FS()
         
        {
        	int n4,f;
			cout<<"\n****WELCOME TO MILKY BAR SECTION****";
			string s;
     	    cout<<"\nEnter Your Name to Continue: ";
     	    cin>>s;
			cout<<"\nHow many pieces do you want to order: ";
			cin>>n4;
			f=50*n4;
			cout<<"\nTOTAL PIECES YOU'VE ORDERED "<<n4;
			cout<<"\nCOST PER PIECE   INR 50";
			cout<<"\nTotal amount is:"<<f;
			cout<<"\nTHANK YOU FOR THE PURCHASE WITH US  " +s;
			cout<<"\nHAVE A GOOD DAY";
			
		}
	
};
	
int main()

{
	int select;
	
	Chocolates C;
	C.welcome();
	cout<<"\n1.DAIRY MILK\n2.SNICKERS\n3.MILKY BAR\n4.FIVE STAR";
    cout<<"\nSo What is your favourite, Please select an option to continue: ";
    cin>>select;

	switch(select)
	
{

        case 1:

                {
			     C.DM();
			     break;
		        }
		        
		case 2:

                {
			     C.SN();
			     break;
		        }
		        
		case 3:
		        {
		         C.MB();
		         break;
		        }    
				
	    case 4:
		        {
		        C.FS();
		        break;
		        }   
				
		
		default:

                {
			    cout<<"\nOOOOPPSSSS, YOU'VE ENTERED A WRONG OPTION'";
			    cout<<"\nNOW WE ARE HAVING ONLY 4 TYPES IN OUR STOCK, SORRY";
			    cout<<"\nHAVE A GOOD DAY";
			    break;
	        	}		 
	}
}
	
