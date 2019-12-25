#include<iostream>
using namespace std;

class Maths

{
	int n1;
	int n2;
	int result;

	        public:

		void getNumbers()

                {
			cout<<"GIVE ANY TWO NUMBERS \n";
			cin>>n1;
			cin>>n2;
		}

		void addition()

                {
			getNumbers();
			result=n1+n2;
			cout<<"Addition result: "<<result;
		}

		void subtraction()

                {
			getNumbers();
			result=n1-n2;
			cout<<"Subtraction result: "<<result;
		}

		void multiplication()

                {
			getNumbers();
			result=n1*n2;
			cout<<"Multiplication result: "<<result;
		}

		void division()
                
                {
			getNumbers();
			result=n1/n2;
			cout<<"Division result: "<<result;
		}

};


int main()

      {
	int input;
	Maths maths;
	cout<<"CHOOSE AN OPTION FROM 1 to 4 \n"<<endl;
	cout<<" 1 for Addition \n 2 for Subtraction \n 3 for Multiplication \n 4 for Division \n";
	cout<<"Please enter your input here: ";
	cin>>input;
	switch (input)
{
		case 1:

                {
			maths.addition();
			break;
		}

		case 2:

                {
			maths.subtraction();
			break;
		}

		case 3:

                {
			maths.multiplication();
			break;
		}

		case 4:

                {
			maths.division();
			break;
		}

		default:

                {
			cout<<"Only 1 to 4 options are allowed";
			break;
		}
	}
	
}