#include<iostream>
using namespace std;
int main()
{
	float departuretime[10]={00.00,00.00,00.00,00.00,00.00,00.00,00.00,00.00,00.00,00.00};
	float returntime[10]={00.00,00.00,00.00,00.00,00.00,00.00,00.00,00.00,00.00,00.00};
	float hiretime;
	int hours;
	int totalhiredhours[10]={0,0,0,0,0,0,0,0,0,0};
	double moneytaken[10]={0,0,0,0,0,0,0,0,0,0};
	float minremaintime[10]={00.00,00.00,00.00,00.00,00.00,00.00,00.00,00.00,00.00,00.00};
	int boatnumber=0;
	int choice;
	cout<<"--------------------------------------------------------"<<endl;
	cout<<" Welcome to online boat bookin portal "<<endl;
	cout<< " you can book boat between time span of 10:00 and 17:00 "<<endl;
	cout<<"--------------------------------------------------------"<<endl;
	
	menu:
		cout<<" enter 00 to get end day report otherwise press any key to hire boat"<<endl;
		cin>>choice;//choice to hireboat or get end day report
		if(choice==00)
		{
			goto report;
		}
	cout<<"***enter current time in format (hh.mm) to hire boat ***"<<endl;
	cin>>hiretime;
	cout<<"for how many hours you want to book boat "<<endl;
	cout<<" for 2 hours enter 2 and for 1 hour enter 1 "<<endl;
	cin>>hours;
	// boat hiring
	if(hiretime>=10.00&&hiretime+hours<=17.00)//checking if given hiretime is within timespan
	{  int freeboats=0;// free boats
		for(int i=0;i<10;i++)
	// how many free boats are available
		{
		
		if (returntime[i]<=hiretime)
		{
			freeboats++;
		}
}
cout<<"----------------------------"<<endl;
cout<<" *available free boats are :"<<freeboats<<endl;

if (freeboats==0)//which boat will be free first
	{
	for(int i=0;i<10;i++)
{
minremaintime[i]=returntime[i]-hiretime;
}
float min=minremaintime[0];

for(int i=0;i<10;i++)
{
	if(minremaintime[i]<min)
	{
		min>minremaintime[i];
		boatnumber=i;
		
	}
}
// assign a boat which will return in least time
departuretime[boatnumber]=hiretime;
returntime[boatnumber]=hiretime+hours;
cout<<"*boat " <<boatnumber+1 <<" is booked!"<<endl;
cout<<"*updated departure time :"<<departuretime[boatnumber]<<endl;
			cout<<" *updated return time :"<<returntime[boatnumber]<<endl;
			cout<<"------------------------"<<endl;
			totalhiredhours[boatnumber]=totalhiredhours[boatnumber]+hours;
			if(hours==1)
			{
				moneytaken[boatnumber]=moneytaken[boatnumber]+12;
			}
			else if(hours==2)
			{
			moneytaken[boatnumber]=moneytaken[boatnumber]+20;	
			}
goto menu;
}
	int boatbooked=0;
		//assign a boat from free boats list
		for(int i=0;i<10;i++)
		{  
			if (returntime[i]<=hiretime)
			{
			departuretime[i]=hiretime;
			
			returntime[i]=hiretime+hours;
			
			cout<<"*boat "<<i+1<<" is booked! "<<endl;
			cout<<"*updated departure time :"<<departuretime[i]<<endl;
			cout<<"*updated return time :"<<returntime[i]<<endl;
			cout<<"------------------------"<<endl;
			boatbooked++;
			totalhiredhours[i]=totalhiredhours[i]+hours;
			if(hours==1)
			{
				moneytaken[i]=moneytaken[i]+12;
			}
			else if(hours==2)
			{
			moneytaken[i]=moneytaken[i]+20;	
			}
			}
			if(boatbooked==1)
			{
				break;
			}
		}
	}
	else
	{
		cout<<" YOU CANT BOOK BOAT IN THIS TIME SLOT! "<<endl;
	}
	goto menu;
	
	report://generate end day report
		cout<<"----------------"<<endl;
		cout<<"END DAY REPORT!"<<endl;
		cout<<"----------------"<<endl;
	for(int i=0;i<10;i++)//display money taken and hire hours for each boat
	{
		cout<<"money taken for boat "<<i+1<<": "<<moneytaken[i]<<endl;
		cout<<"total hired hours for boat "<<i+1<<" :"<<totalhiredhours[i]<<endl;
	}	
	for(int i=0;i<10;i++)// display which boats were not hired that day
	{
		if(totalhiredhours[i]==0)
		{
			cout<<"boat "<<i+1<<" was free all day! "<<endl;
		}
	}
	int max=totalhiredhours[0];
	for(int i=0;i<10;i++)//display which boat was hired for maximum hours
	{
	if(max<totalhiredhours[i])
	{
		max=totalhiredhours[i];
		boatnumber=i;
	}	
	}
	cout<<"maximum hours "<<max<<" are covered by boat "<<boatnumber+1;

	return 0;
}
