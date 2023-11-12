#include<iostream>
using namespace std;
int main()
{//declarations
	int trainnumber;
	int temp=0;
	double maxpassengers;
	int maxpassengerstrain;
	int choice;
	double bill;
	struct
	{
	
		int passengers=0;
		int seatsavailable=480;
		int moneytaken=0;
	} train_9_up,train_10_down,train_11_up,train_12_down,train_13_up,train_14_down,train_15_up,train_16_down;
	int passengers_train_16_down=0;
    int seatsavailable_train_16_down=640;
    int no_of_tickets=0;
    
    start_of_day_display:
    	cout<<                     "ELECTRIC MOUNTAIN RAILWAY REAL TIME COUNT FOR PASSENGERS AND SEAT AVAILABILITY"<<endl;
    	cout<<                       " ---------------------------------------------------------------------------"<<endl;
	cout<<"DEPARTURE TRAIN 1 : 9:00    PASSENGERS : "<<train_9_up.passengers<<"    SEATS AVAILABLE  "<<train_9_up.seatsavailable<<"    MONEY TAKEN "<<train_9_up.moneytaken<<" dollars "<<endl;
	cout<<"RETURN TRAIN 1: 10:00    PASSENGERS : "<<train_10_down.passengers<<"    SEATS AVAILABLE  "<<train_10_down.seatsavailable<<"    MONEY TAKEN "<<train_10_down.moneytaken<<" dollars "<<endl;
	cout<<"DEPARTURE TRAIN 2: 11:00    PASSENGERS : "<<train_11_up.passengers<<"    SEATS AVAILABLE  "<<train_11_up.seatsavailable<<"    MONEY TAKEN "<<train_11_up.moneytaken<<" dollars "<<endl;
	cout<<"RETURN TRAIN 2: 12:00    PASSENGERS : "<<train_12_down.passengers<<"    SEATS AVAILABLE  "<<train_12_down.seatsavailable<<"    MONEY TAKEN "<<train_12_down.moneytaken<<" dollars "<<endl;
	cout<<"DEPARTURE TRAIN 3: 13:00    PASSENGERS : "<<train_13_up.passengers<<"    SEATS AVAILABLE  "<<train_13_up.seatsavailable<<"    MONEY TAKEN "<<train_13_up.moneytaken<<" dollars "<<endl;
	cout<<"RETURN TRAIN 3: 14:00    PASSENGERS : "<<train_14_down.passengers<<"    SEATS AVAILABLE  "<<train_14_down.seatsavailable<<"    MONEY TAKEN "<<train_14_down.moneytaken<<" dollars "<<endl;
	cout<<"DEPARTURE TRAIN 4: 15:00    PASSENGERS : "<<train_15_up.passengers<<"    SEATS AVAILABLE  "<<train_15_up.seatsavailable<<"    MONEY TAKEN "<<train_15_up.moneytaken<<" dollars "<<endl;
	cout<<"RETURN TRAIN 4: 16:00    PASSENGERS : "<<train_16_down.passengers<<"    SEATS AVAILABLE  "<<seatsavailable_train_16_down<<"    MONEY TAKEN "<<train_16_down.moneytaken<<" dollars "<<endl;
	
	cout<<endl;
	cout<<"if you want to book ticket press 1 "<<endl;
	cout<<"if you want to display end of the day info press 2 "<<endl;
	cin>>choice;
	if (choice==1)
	goto bookticket;
	else if(choice==2)
	goto end_of_the_day_info;
	else 
	goto start_of_day_display;
	bookticket:
			cout<< " BOOK YOUR TICKET "<<endl;
			cout<<"  ----------------- "<<endl;
	cout<<" press 1 to book departure train 1 and return train 1 "<<endl;
		cout<<" press 2 to book departure train 2 and retrun train 2"<<endl;
			cout<<" press 3 to book departure train 3 and return train 3"<<endl;
				cout<<" press 4 to book departure train 4 and return train 4"<<endl;
					cout<<" press 12 to book departure train 1 and return train 2"<<endl;
					cout<<" press 13 to book departure train 1 and return train 3 "<<endl;
						cout<<" press 14 to book departure train 1 and return train 4"<<endl;
						cout<<" press 23 to book departure train 2 and return train 3"<<endl;
							cout<<" press 24 to book departure train 2 and return train 4"<<endl;
								cout<<" press 34 to book departure train 3 and return train 4"<<endl;
			
				cin>>trainnumber;
				cout<<" how many seats you want to book ?"<<endl;
				cin>>no_of_tickets;
						switch(trainnumber)
				{
					//case 1
					case 1:
						
						if(no_of_tickets==1||no_of_tickets>=10&&no_of_tickets<=80)
						{
						
						if(train_9_up.seatsavailable-no_of_tickets>0&&train_10_down.seatsavailable-no_of_tickets>0)
						{
						
						train_9_up.passengers=train_9_up.passengers+no_of_tickets;
							train_10_down.passengers=train_10_down.passengers+no_of_tickets;
							train_9_up.seatsavailable=train_9_up.seatsavailable-no_of_tickets;
							train_10_down.seatsavailable=train_10_down.seatsavailable-no_of_tickets;
							if(no_of_tickets>=10&&no_of_tickets<=80)
							{
							int temp=no_of_tickets/10;	
						train_9_up.moneytaken=train_9_up.moneytaken+(no_of_tickets*25);
						train_10_down.moneytaken=train_10_down.moneytaken+(no_of_tickets*25);
						// discounted amount;
							train_9_up.moneytaken=train_9_up.moneytaken-(temp*25);
								train_10_down.moneytaken=train_10_down.moneytaken-(temp*25);
								bill=(no_of_tickets*25)-(temp*25);
								cout<<" your bill is "<<bill<<" dollars "<<endl;}
								else
									{
									train_9_up.moneytaken=train_9_up.moneytaken+(no_of_tickets*25);
						train_10_down.moneytaken=train_10_down.moneytaken+(no_of_tickets*25);
						bill=no_of_tickets*25;
						cout<<"your bill is "<<bill<<" dollars ";}
						goto start_of_day_display;}
						
						else
						{
							cout<<" sorry we dont have enough seats in this combination of trains select some other free slots if you want"<<endl;
						goto start_of_day_display;
						} }
						
						else
						{
							cout<< " you can select a single seat or group seats ranges from 10 to 80 enter valid number of seats again";
								
								goto start_of_day_display;	
						}
						
						break;
						
					
					//case 2
					case 2:
						
						if(no_of_tickets==1||no_of_tickets>=10&&no_of_tickets<=80)
						{
						
						if(train_11_up.seatsavailable-no_of_tickets>0&&train_12_down.seatsavailable-no_of_tickets>0)
						{
						
						train_11_up.passengers=train_11_up.passengers+no_of_tickets;
							train_12_down.passengers=train_12_down.passengers+no_of_tickets;
							train_11_up.seatsavailable=train_11_up.seatsavailable-no_of_tickets;
							train_12_down.seatsavailable=train_12_down.seatsavailable-no_of_tickets;
							if(no_of_tickets>=10&&no_of_tickets<=80)
							{
							int temp=no_of_tickets/10;	
						train_11_up.moneytaken=train_11_up.moneytaken+(no_of_tickets*25);
						train_12_down.moneytaken=train_12_down.moneytaken+(no_of_tickets*25);
						// discounted amount;
							train_11_up.moneytaken=train_11_up.moneytaken-(temp*25);
								train_12_down.moneytaken=train_12_down.moneytaken-(temp*25);
								bill=(no_of_tickets*25)-(temp*25);
								cout<<" your bill is "<<bill<<" dollars "<<endl;}
								else
									{
									train_11_up.moneytaken=train_11_up.moneytaken+(no_of_tickets*25);
						train_12_down.moneytaken=train_12_down.moneytaken+(no_of_tickets*25);
						bill=no_of_tickets*25;
								cout<<" your bill is "<<bill<<" dollars "<<endl;}
						
					goto start_of_day_display;}
						
						else
						{
							cout<<" sorry we dont have enough seats in this combination of trains select some other free slots if you want"<<endl;
						goto start_of_day_display;
						} }
						
						else
						{
							cout<< " you can select a single seat or group seats ranges from 10 to 80 enter valid number of seats again";
								
								goto start_of_day_display;	
						}
						
						break;
						//case3 3 3
						case 3:
						
						if(no_of_tickets==1||no_of_tickets>=10&&no_of_tickets<=80)
						{
						
						if(train_13_up.seatsavailable-no_of_tickets>0&&train_14_down.seatsavailable-no_of_tickets>0)
						{
						
						train_13_up.passengers=train_13_up.passengers+no_of_tickets;
							train_14_down.passengers=train_14_down.passengers+no_of_tickets;
							train_13_up.seatsavailable=train_13_up.seatsavailable-no_of_tickets;
							train_14_down.seatsavailable=train_14_down.seatsavailable-no_of_tickets;
							if(no_of_tickets>=10&&no_of_tickets<=80)
							{
							int temp=no_of_tickets/10;	
						train_13_up.moneytaken=train_13_up.moneytaken+(no_of_tickets*25);
						train_14_down.moneytaken=train_14_down.moneytaken+(no_of_tickets*25);
						// discounted amount;
							train_13_up.moneytaken=train_13_up.moneytaken-(temp*25);
								train_14_down.moneytaken=train_14_down.moneytaken-(temp*25);
								bill=(no_of_tickets*25)-(temp*25);
								cout<<" your bill is "<<bill<<" dollars "<<endl;}
								else
									{
									train_13_up.moneytaken=train_13_up.moneytaken+(no_of_tickets*25);
						train_14_down.moneytaken=train_14_down.moneytaken+(no_of_tickets*25);
						bill=no_of_tickets*25;
								cout<<" your bill is "<<bill<<" dollars "<<endl;}
						
						goto start_of_day_display;}
						
						else
						{
							cout<<" sorry we dont have enough seats in this combination of trains select some other free slots if you want"<<endl;
					goto start_of_day_display;
						} }
						
						else
						{
							cout<< " you can select a single seat or group seats ranges from 10 to 80 enter valid number of seats again";
								
							goto start_of_day_display;	
						}
						
						break;
						
						//case 4   4  4
						
						case 4:
						
						if(no_of_tickets==1||no_of_tickets>=10&&no_of_tickets<=80)
						{
						
						if(train_15_up.seatsavailable-no_of_tickets>0&&seatsavailable_train_16_down-no_of_tickets>0)
						{
						
						train_15_up.passengers=train_15_up.passengers+no_of_tickets;
							train_16_down.passengers=train_16_down.passengers+no_of_tickets;
							train_15_up.seatsavailable=train_15_up.seatsavailable-no_of_tickets;
							seatsavailable_train_16_down=seatsavailable_train_16_down-no_of_tickets;
							if(no_of_tickets>=10&&no_of_tickets<=80)
							{
							int temp=no_of_tickets/10;	
						train_15_up.moneytaken=train_15_up.moneytaken+(no_of_tickets*25);
						train_16_down.moneytaken=train_16_down.moneytaken+(no_of_tickets*25);
						// discounted amount;
							train_15_up.moneytaken=train_15_up.moneytaken-(temp*25);
								train_16_down.moneytaken=train_16_down.moneytaken-(temp*25);
								bill=(no_of_tickets*25)-(temp*25);
								cout<<" your bill is "<<bill<<" dollars "<<endl;}
								else
									{
									train_15_up.moneytaken=train_15_up.moneytaken+(no_of_tickets*25);
						train_16_down.moneytaken=train_16_down.moneytaken+(no_of_tickets*25);
						bill=no_of_tickets*25;
								cout<<" your bill is "<<bill<<" dollars "<<endl;}
						
							goto start_of_day_display;}
						
						else
						{
							cout<<" sorry we dont have enough seats in this combination of trains select some other free slots if you want"<<endl;
					goto start_of_day_display;
						} }
						
						else
						{
							cout<< " you can select a single seat or group seats ranges from 10 to 80 enter valid number of seats again";
								
								goto start_of_day_display;	
						}
						
						break;
						
						//case 5  1 2
						
						case 12:
						
						if(no_of_tickets==1||no_of_tickets>=10&&no_of_tickets<=80)
						{
						
						if(train_9_up.seatsavailable-no_of_tickets>0&&train_12_down.seatsavailable-no_of_tickets>0)
						{
						
						train_9_up.passengers=train_9_up.passengers+no_of_tickets;
							train_12_down.passengers=train_12_down.passengers+no_of_tickets;
							train_9_up.seatsavailable=train_9_up.seatsavailable-no_of_tickets;
							train_12_down.seatsavailable=train_12_down.seatsavailable-no_of_tickets;
							if(no_of_tickets>=10&&no_of_tickets<=80)
							{
							int temp=no_of_tickets/10;	
						train_9_up.moneytaken=train_9_up.moneytaken+(no_of_tickets*25);
						train_12_down.moneytaken=train_12_down.moneytaken+(no_of_tickets*25);
						// discounted amount;
							train_9_up.moneytaken=train_9_up.moneytaken-(temp*25);
								train_12_down.moneytaken=train_12_down.moneytaken-(temp*25);
								bill=(no_of_tickets*25)-(temp*25);
								cout<<" your bill is "<<bill<<" dollars "<<endl;
								}
								else
									{
									train_9_up.moneytaken=train_9_up.moneytaken+(no_of_tickets*25);
						train_12_down.moneytaken=train_12_down.moneytaken+(no_of_tickets*25);
						bill=no_of_tickets*25;
								cout<<" your bill is "<<bill<<" dollars "<<endl;}
						
					goto start_of_day_display;
						
						}
						
						else
						{
							cout<<" sorry we dont have enough seats in this combination of trains select some other free slots if you want"<<endl;
						goto start_of_day_display;
						} }
						
						else
						{
							cout<< " you can select a single seat or group seats ranges from 10 to 80 enter valid number of seats again";
								
								goto start_of_day_display;
						}
						
						break;
						 //case 6  1 3
						 case 13:
						
						if(no_of_tickets==1||no_of_tickets>=10&&no_of_tickets<=80)
						{
						
						if(train_9_up.seatsavailable-no_of_tickets>0&&train_14_down.seatsavailable-no_of_tickets>0)
						{
						
						train_9_up.passengers=train_9_up.passengers+no_of_tickets;
							train_14_down.passengers=train_14_down.passengers+no_of_tickets;
							train_9_up.seatsavailable=train_9_up.seatsavailable-no_of_tickets;
							train_14_down.seatsavailable=train_14_down.seatsavailable-no_of_tickets;
							if(no_of_tickets>=10&&no_of_tickets<=80)
							{
							int temp=no_of_tickets/10;	
						train_9_up.moneytaken=train_9_up.moneytaken+(no_of_tickets*25);
						train_14_down.moneytaken=train_14_down.moneytaken+(no_of_tickets*25);
						// discounted amount;
							train_9_up.moneytaken=train_9_up.moneytaken-(temp*25);
								train_14_down.moneytaken=train_14_down.moneytaken-(temp*25);
								bill=(no_of_tickets*25)-(temp*25);
								cout<<" your bill is "<<bill<<" dollars "<<endl;
								}
								else
									{
									train_9_up.moneytaken=train_9_up.moneytaken+(no_of_tickets*25);
						train_14_down.moneytaken=train_14_down.moneytaken+(no_of_tickets*25);
						bill=no_of_tickets*25;
								cout<<" your bill is "<<bill<<" dollars "<<endl;}
						
					goto start_of_day_display;
						
						}
						
						else
						{
							cout<<" sorry we dont have enough seats in this combination of trains select some other free slots if you want"<<endl;
					goto start_of_day_display;
						} }
						
						else
						{
							cout<< " you can select a single seat or group seats ranges from 10 to 80 enter valid number of seats again";
								
							goto start_of_day_display;	
						}
						
						break;
						
		//case 7 1 4
		case 14:
						
						if(no_of_tickets==1||no_of_tickets>=10&&no_of_tickets<=80)
						{
						
						if(train_9_up.seatsavailable-no_of_tickets>0&&seatsavailable_train_16_down-no_of_tickets>0)
						{
						
						train_9_up.passengers=train_9_up.passengers+no_of_tickets;
							train_16_down.passengers=train_16_down.passengers+no_of_tickets;
							train_9_up.seatsavailable=train_9_up.seatsavailable-no_of_tickets;
							seatsavailable_train_16_down=seatsavailable_train_16_down-no_of_tickets;
							if(no_of_tickets>=10&&no_of_tickets<=80)
							{
							int temp=no_of_tickets/10;	
						train_9_up.moneytaken=train_9_up.moneytaken+(no_of_tickets*25);
						train_16_down.moneytaken=train_16_down.moneytaken+(no_of_tickets*25);
						// discounted amount;
							train_9_up.moneytaken=train_9_up.moneytaken-(temp*25);
								train_16_down.moneytaken=train_16_down.moneytaken-(temp*25);
								bill=(no_of_tickets*25)-(temp*25);
								cout<<" your bill is "<<bill<<" dollars "<<endl;}
								else
									{
									train_9_up.moneytaken=train_9_up.moneytaken+(no_of_tickets*25);
						train_16_down.moneytaken=train_16_down.moneytaken+(no_of_tickets*25);
						bill=no_of_tickets*25;
								cout<<" your bill is "<<bill<<" dollars "<<endl;}
						
				goto start_of_day_display;}
						
						else
						{
							cout<<" sorry we dont have enough seats in this combination of trains select some other free slots if you want"<<endl;
					goto start_of_day_display;
						} }
						
						else
						{
							cout<< " you can select a single seat or group seats ranges from 10 to 80 enter valid number of seats again";
								
							goto start_of_day_display;
						}
						
						break;
						
						//  case 2 3
						
							case 23:
						
						if(no_of_tickets==1||no_of_tickets>=10&&no_of_tickets<=80)
						{
						
						if(train_11_up.seatsavailable-no_of_tickets>0&&train_14_down.seatsavailable-no_of_tickets>0)
						{
						
						train_11_up.passengers=train_11_up.passengers+no_of_tickets;
							train_14_down.passengers=train_14_down.passengers+no_of_tickets;
							train_11_up.seatsavailable=train_11_up.seatsavailable-no_of_tickets;
							train_14_down.seatsavailable=train_14_down.seatsavailable-no_of_tickets;
							if(no_of_tickets>=10&&no_of_tickets<=80)
							{
							int temp=no_of_tickets/10;	
						train_11_up.moneytaken=train_11_up.moneytaken+(no_of_tickets*25);
						train_14_down.moneytaken=train_14_down.moneytaken+(no_of_tickets*25);
						// discounted amount;
							train_11_up.moneytaken=train_11_up.moneytaken-(temp*25);
								train_14_down.moneytaken=train_14_down.moneytaken-(temp*25);
								bill=(no_of_tickets*25)-(temp*25);
								cout<<" your bill is "<<bill<<" dollars "<<endl;}
								else
									{
									train_11_up.moneytaken=train_11_up.moneytaken+(no_of_tickets*25);
						train_14_down.moneytaken=train_14_down.moneytaken+(no_of_tickets*25);
						bill=no_of_tickets*25;
								cout<<" your bill is "<<bill<<" dollars "<<endl;}
						
					goto start_of_day_display;}
						
						else
						{
							cout<<" sorry we dont have enough seats in this combination of trains select some other free slots if you want"<<endl;
					goto start_of_day_display;
						} }
						
						else
						{
							cout<< " you can select a single seat or group seats ranges from 10 to 80 enter valid number of seats again";
								
								goto start_of_day_display;	
						}
						
						break;
						
						//case 24
						
						case 24:
						
						if(no_of_tickets==1||no_of_tickets>=10&&no_of_tickets<=80)
						{
						
						if(train_11_up.seatsavailable-no_of_tickets>0&&seatsavailable_train_16_down-no_of_tickets>0)
						{
						
						train_11_up.passengers=train_11_up.passengers+no_of_tickets;
							train_16_down.passengers=train_16_down.passengers+no_of_tickets;
							train_11_up.seatsavailable=train_11_up.seatsavailable-no_of_tickets;
							seatsavailable_train_16_down=seatsavailable_train_16_down-no_of_tickets;
							if(no_of_tickets>=10&&no_of_tickets<=80)
							{
							int temp=no_of_tickets/10;	
						train_11_up.moneytaken=train_11_up.moneytaken+(no_of_tickets*25);
						train_16_down.moneytaken=train_16_down.moneytaken+(no_of_tickets*25);
						// discounted amount;
							train_11_up.moneytaken=train_11_up.moneytaken-(temp*25);
								train_16_down.moneytaken=train_16_down.moneytaken-(temp*25);
								bill=(no_of_tickets*25)-(temp*25);
								cout<<" your bill is "<<bill<<" dollars "<<endl;}
								else
									{
									train_11_up.moneytaken=train_11_up.moneytaken+(no_of_tickets*25);
						train_16_down.moneytaken=train_16_down.moneytaken+(no_of_tickets*25);
							bill=no_of_tickets*25;
								cout<<" your bill is "<<bill<<" dollars "<<endl;
						}
						
					goto start_of_day_display;}
						
						else
						{
							cout<<" sorry we dont have enough seats in this combination of trains select some other free slots if you want"<<endl;
					goto start_of_day_display;
						} }
						
						else
						{
							cout<< " you can select a single seat or group seats ranges from 10 to 80 enter valid number of seats again";
								
								goto start_of_day_display;	
						}
						
						break;
						//case 3 4
						
						case 34:
					if(no_of_tickets==1||no_of_tickets>=10&&no_of_tickets<=80)
						{
						
						if(train_13_up.seatsavailable-no_of_tickets>0&&seatsavailable_train_16_down-no_of_tickets>0)
						{
						
						train_13_up.passengers=train_13_up.passengers+no_of_tickets;
							train_16_down.passengers=train_16_down.passengers+no_of_tickets;
							train_13_up.seatsavailable=train_13_up.seatsavailable-no_of_tickets;
							seatsavailable_train_16_down=seatsavailable_train_16_down-no_of_tickets;
							if(no_of_tickets>=10&&no_of_tickets<=80)
							{
							int temp=no_of_tickets/10;	
						train_13_up.moneytaken=train_13_up.moneytaken+(no_of_tickets*25);
						train_16_down.moneytaken=train_16_down.moneytaken+(no_of_tickets*25);
						// discounted amount;
							train_13_up.moneytaken=train_13_up.moneytaken-(temp*25);
								train_16_down.moneytaken=train_16_down.moneytaken-(temp*25);
								bill=(no_of_tickets*25)-(temp*25);
								cout<<" your bill is "<<bill<<" dollars "<<endl;}
								else
									{
									train_13_up.moneytaken=train_13_up.moneytaken+(no_of_tickets*25);
						train_16_down.moneytaken=train_16_down.moneytaken+(no_of_tickets*25);
						bill=no_of_tickets*25;
								cout<<" your bill is "<<bill<<" dollars "<<endl;}
						
						goto start_of_day_display;}
						
						else
						{
							cout<<" sorry we dont have enough seats in this combination of trains select some other free slots if you want"<<endl;
						goto start_of_day_display;
						} }
						
						else
						{
							cout<< " you can select a single seat or group seats ranges from 10 to 80 enter valid number of seats again";
								
								goto start_of_day_display;	
						}
						
						default:
							cout<<" you selected invalid combo pls try again ";
							goto start_of_day_display;
						}
						
						end_of_the_day_info:
							
							cout<< " END OF DAY COUNTS FOR PASSENGERS AND MONEY "<<endl;
							cout<< "--------------------------------------------- "<<endl;
						
							cout<<" total passengers on up train journey at 9 :"<<train_9_up.passengers<<endl;
					cout<<" total money taken by up train journey at 9: " <<train_9_up.moneytaken<<endl;
				cout<<" total passengers on up train journey at 11 :"<<train_11_up.passengers<<endl;
					cout<<" total money taken by up train journey at 11: " <<train_11_up.moneytaken<<endl;
				cout<<" total passengers on up train journey at 13 :"<<train_13_up.passengers<<endl;
					cout<<" total money taken by up train journey at 13: " <<train_13_up.moneytaken<<endl;
					
				cout<<" total passengers on up train journey at 15 :"<<train_15_up.passengers<<endl;
					cout<<" total money taken by up train journey at 15: " <<train_15_up.moneytaken<<endl;
				cout<<" total passengers on down train journey at 10 "<<train_10_down.passengers<<endl;
					cout<<" total money taken by up train journey at 10: " <<train_10_down.moneytaken<<endl;
				cout<<" total passengers on down train journey at 12 "<<train_12_down.passengers<<endl;
					cout<<" total money taken by up train journey at 12: " <<train_12_down.moneytaken<<endl;
				cout<<" total passengers on down train journey at 14 "<<train_14_down.passengers<<endl;
					cout<<" total money taken by up train journey at 14: " <<train_14_down.moneytaken<<endl;
				cout<<" total passengers on down train journey at 16 "<<train_16_down.passengers<<endl;
					cout<<" total money taken by up train journey at 16: " <<train_16_down.moneytaken<<endl;
					double totalpassengersofday=train_9_up.passengers+train_11_up.passengers+train_13_up.passengers+train_15_up.passengers+train_10_down.passengers+train_12_down.passengers+train_14_down.passengers+train_16_down.passengers;
					cout<<" total passengers of the day are "<<totalpassengersofday<<"passengers"<<endl;
					double totalmoneyofday=train_9_up.moneytaken+train_11_up.moneytaken+train_13_up.moneytaken+train_15_up.moneytaken+train_10_down.moneytaken+train_12_down.moneytaken+train_14_down.moneytaken+train_16_down.moneytaken;
				cout<<" total money taken of the day is "<<totalmoneyofday<<" dollars"<<endl;
				
				int passengers[8]={train_9_up.passengers,train_11_up.passengers,train_13_up.passengers,train_15_up.passengers,train_10_down.passengers,train_12_down.passengers,train_14_down.passengers,train_16_down.passengers};
				 maxpassengers=passengers[0];
				 maxpassengerstrain=0;
				for(int i=0;i<=7;i++)
				{
					if(passengers[i]>maxpassengers)
					
					{
					maxpassengers=passengers[i];
					maxpassengerstrain=i;}

				}
				switch(maxpassengerstrain)
				{
					case 0:
						cout<<"maximum passenger train is up train journey at 9 with "<<maxpassengers<<" passengers"<<endl;
						break;
						case 1:
						cout<<"maximum passenger train is up train journey at 11 with "<<maxpassengers<<" passengers"<<endl;
						break;
						case 2:
						cout<<"maximum passenger train is up train journey at 13 with "<<maxpassengers<<" passengers"<<endl;
						break;
						case 3:
						cout<<"maximum passenger train is up train journey at 15 with "<<maxpassengers<<" passengers"<<endl;
						break;
						case 4:
						cout<<"maximum passenger train is down train journey with at 10 "<<maxpassengers<<" passengers"<<endl;
						break;
						case 5:
						cout<<"maximum passenger train is down train journey with at 12 "<<maxpassengers<<" passengers"<<endl;
						break;
						case 6:
						cout<<"maximum passenger train is down train journey with at 14 "<<maxpassengers<<" passengers"<<endl;
						break;
						case 7:
						cout<<"maximum passenger train is down train journey with at 16 "<<maxpassengers<<" passengers"<<endl;
						break;
						
				}
						return 0;
					}
	
