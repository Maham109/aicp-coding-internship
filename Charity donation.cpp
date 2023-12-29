#include<iostream>
using namespace std;
int main(){
	
	string charities[3];
	double totaldonation[3]={0,0,0};
	int choice;
	double customerbill;
	double donation;
	cout<<" input names of 3 charities "<<endl;
	for(int i=0;i<3;i++)
	{
		cin>>charities[i];	
	}
	
	cout<< "charities customers have to donate to: "<<endl; 
	cout<<"1. "<<charities[0]<<endl;
		cout<<"2. "<<charities[1]<<endl;
			cout<<"3. "<<charities[2]<<endl;
			menu:
			cout<<"----------------------------------------------"<<endl;
			cout<< " enter 1 to donate to "<<charities[0]<<endl;
			cout<< " enter 2 to donate to "<<charities[1]<<endl;
			cout<< " enter 3 to donate to "<<charities[2]<<endl;
			cout<< " enter -1 to show total donations of all charities "<<endl;
			cout<<"----------------------------------------------"<<endl;
			cin>>choice;
		
			switch(choice)
			{
				case 1:
					cout<<" enter customers bill ";
			cin>>customerbill;
			// calcuting 1% of customer bill
			donation=customerbill/100;
			
			cout<< " amount of donation going to be added in "<<charities[0]<<": "<<donation<<"rupees"<<endl;
					totaldonation[0]=totaldonation[0]+donation;
					break;
					
					case 2:
					cout<<" enter customers bill ";
			cin>>customerbill;
			// calcuting 1% of customer bill
			donation=customerbill/100;
			
			cout<< " amount of donation going to be added in "<<charities[1]<<": "<<donation<<"rupees"<<endl;	
					totaldonation[1]=totaldonation[1]+donation;
					break;
					
					case 3:
						cout<<" enter customers bill ";
			cin>>customerbill;
			// calcuting 1% of customer bill
			donation=customerbill/100;
			
			cout<< " amount of donation going to be added in "<<charities[2]<<": "<<donation<<"rupees"<<endl;
					totaldonation[2]=totaldonation[2]+donation;
					break;
					
					case -1:
						
						cout<<" total donation for "<<charities[0]<<": "<<totaldonation[0]<<"rupees"<<endl;
						cout<<" total donation for "<<charities[1]<<": "<<totaldonation[1]<<"rupees"<<endl;;
						cout<<" total donation for "<<charities[2]<<": "<<totaldonation[2]<<"rupees"<<endl;;
						break;
					default:
						cout<<"invalid entry"<<endl;
						break;
			}
			double grandtotal=totaldonation[0]+totaldonation[1]+totaldonation[2];
			cout<<" grand total of donation to charity is "<<grandtotal<<endl;
			goto menu;
	
	return 0;
}
