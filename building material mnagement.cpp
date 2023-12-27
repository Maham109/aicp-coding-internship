#include<iostream>
using namespace std;
void ordermanagment(int no_ofCsack,int no_ofGsack,int no_ofSsack);
int main()

{   int choice;
char CorGorS;
float weight;
int no_ofCsack;
int no_ofGsack;
int no_ofSsack;

// choice whether you want to add sack or place order of sacks.
cout<< " press 1 if you want to add sack "<<endl;
cout<< " press 2 if you want to place order "<<endl;
cin>>choice;
    switch(choice)
    {
    	case 1:// if you want to add sack
    cout<<"Press C to add a sack of cement"<<endl;
	cout<<"Press G to add a sack of gravel"<<endl;
	cout<<"Press S to add a sack of sand"<<endl;
	cin>>CorGorS;
	if(CorGorS=='C')
	{
		cout<<"enter weight for cement sack"<<endl;
		cin>>weight;
		if(weight>24.9&&weight<25.1)
		{
		cout<<" sack is accepted "<<endl;
		cout<< "content of sack : "<<CorGorS<<endl;
		cout<<"weight of sack : "<<weight;}
		else
		{
			cout<<"sack is rejected because sack weight should be 25 ";
			break;
		}
		
	}
	else if(CorGorS=='G')
	{
		cout<<"enter weight for gravel sack"<<endl;
		cin>>weight;
			if(weight>49.9&&weight<50.1)
		{
		cout<<" sack is accepted "<<endl;
		cout<< "content of sack : "<<CorGorS<<endl;
		cout<<"weight of sack : "<<weight;}
		else
		{
			cout<<"sack is rejected because sack weight should be 50 ";
			break;
		}
	}
	else if(CorGorS=='S')
	{
	cout<<"enter weight for sand sack"<<endl;
	cin>>weight;	
		if(weight>49.9&&weight<50.1)
		{
		cout<<" sack is accepted "<<endl;
		cout<< "content of sack : "<<CorGorS<<endl;
		cout<<"weight of sack : "<<weight;}
		else
		{
			cout<<"sack is rejected because sack weight should be 50 ";
			break;
		}
	}
	
	else
	{
		cout<<" you have entered invalid details";
	}
	
	break;
    	case 2:	// if you want to place order
    	cout<< " enter no. of cement sack you wanna include in your order"<<endl;
    	cin>>no_ofCsack;
    		cout<< " enter no. of gravel sack you wanna include in your order"<<endl;
    		cin>>no_ofGsack;
    		cout<< " enter no. of sand sack you wanna include in your order"<<endl;
    		cin>>no_ofSsack;
    	ordermanagment(no_ofCsack,no_ofGsack,no_ofSsack);
    	
    	break;
    }
    
    return 0;}
    
    void ordermanagment(int no_ofCsack,int no_ofGsack,int no_ofSsack) // function for order calculations like order weight,totalbill,discounted bill
    {   float weightsC[no_ofCsack];
    float weightsG[no_ofGsack];
    float weightsS[no_ofSsack];
    double totalweightoforder=0;
    
    int acceptedsackforcement=0;
    int acceptedsackforgravel=0;
    int acceptedsackforsand=0;
int rejectedsack=0;

    int specialpacks=0;
    double totalbill;
     double discountedbill;
    int cementprice=3;
    int gravelprice=2;
    int sandprice=2;
    
    	for(int i=1;i<=no_ofCsack;i++)
    	{
    		cout<<"enter weight for cement sack "<<i<<endl;
    		cin>>weightsC[i];

    	}
    	
    	for(int i=1;i<=no_ofGsack;i++)
    	{
    		cout<<"enter weight for gravel sack "<<i<<endl;
    		cin>>weightsG[i];
    	}
    	
    	for(int i=1;i<=no_ofSsack;i++)
    	{
    		cout<<"enter weight for sand sack "<<i<<endl;
    		cin>>weightsS[i];
    	}
		
		for(int i=1;i<=no_ofCsack;i++)
		{
			if(weightsC[i]>24.9&&weightsC[i]<25.1)
			{
				acceptedsackforcement++;
				totalweightoforder=totalweightoforder+weightsC[i];
			}
			else
			{
				rejectedsack++;
			}
			
		}
			for(int i=1;i<=no_ofGsack;i++)
			{
			if(weightsG[i]>49.9&&weightsG[i]<50.1)
			{
				acceptedsackforgravel++;
				totalweightoforder=totalweightoforder+weightsG[i];
			}
			else
			{
				rejectedsack++;
			}	
			}
			
			for(int i=1;i<=no_ofSsack;i++)
			
		{
		if(weightsS[i]>49.9&&weightsS[i]<50.1)
			{
				acceptedsackforsand++;
				totalweightoforder=totalweightoforder+weightsS[i];
			}
			else
			{
				rejectedsack++;
			}		
		}
		
		cout<<"no of rejected sacks = "<<rejectedsack<<endl;
		
	cout<<"total weight of order is "<<totalweightoforder<<endl;
	
	
	totalbill=3*acceptedsackforcement+2*acceptedsackforgravel+2*acceptedsackforsand;
	cout<<" total bill for order "<<totalbill<<"$";
		
		discount:
			if(acceptedsackforcement>=1&&acceptedsackforgravel-2>=0&&acceptedsackforsand-2>=0)
			{
				specialpacks++;
				acceptedsackforcement=acceptedsackforcement-1;
				acceptedsackforgravel=acceptedsackforgravel-2;
				acceptedsackforsand=acceptedsackforsand-2;
				goto discount;
			}
			
			else
			
			{
				cout<<"special packs "<<specialpacks<<endl;
			cout<<"discounted bill = "<<totalbill-(specialpacks*10) <<"$ ";
	}
    
}

