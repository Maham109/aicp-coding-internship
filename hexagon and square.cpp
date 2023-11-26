#include<iostream>
using namespace std;
class Hexagon  //class hexagon
{
	public:
		float areaofhex;
		float periofhex;
		int anglesumofhex;
		int sideofhex;
	Hexagon(int onesideofhex)
	{
		 sideofhex=onesideofhex;
	}
		float calcArea(int sideofhex)  //function for area calculation of hexagon
		{
			areaofhex=sideofhex*1.5*1.732;
			return areaofhex;
		}
		
public : float calcPeri(int sideofhex)  //function for perimeter calculation of hexagon
{
	periofhex=6*sideofhex;
	return periofhex;
}

public : int calcAngleSum()  //function for sum of angle calculation of hexagon
{
	anglesumofhex=6*120;
	return anglesumofhex;
}
public : void display()   // function to display area,perimeter,and anglesum of hexagon
{
	cout<<" AREA OF HEXAGON IS " <<calcArea(sideofhex);
	cout<<endl;
	cout<<" PERIMETER OF HEXAGON IS "<<calcPeri(sideofhex);
	cout<<endl;
	cout<<" ANGLE SUM OF HEXAGON IS "<<calcAngleSum();
	cout<<endl;
	
}

};

class Square{
public:
	int sideofsquare;
	float areaofsquare;
	int periofsquare;
	Square(int sideof_square)
	{
		sideofsquare=sideof_square;
	}
	float calcAreaSquare(int sideofsquare)  //function for area calculation of hexago
	{
		areaofsquare=2*sideofsquare;
		return areaofsquare;
	}
	
	int calcPeriSquare(int sideofsquare)      //function for perimeter calculation of hexagon
	{
		periofsquare=4*sideofsquare;
		return periofsquare;
	}
void display()    // function to display area,perimeter,and anglesum of hexagon
{ 
	cout<<" AREA OF square IS " <<calcAreaSquare(sideofsquare);
	cout<<endl;
	cout<<" PERIMETER OF square IS "<<calcPeriSquare(sideofsquare);
	cout<<endl;
}

};
int main()
{ int choice;
	start:
		cout<<"-------------------------------------------------------"<<endl;
	cout<< " PRESS 1 TO GET AREA,PERIMETER AND ANGLE SUM OF HEXAGON "<<endl;
		cout<< " PRESS 2 TO GET AREA,PERIMETER OF SQUARE "<<endl;
		cout<<"-------------------------------------------------------"<<endl;
		cin>>choice;
		if (choice==1)
		{
	Hexagon myhexagon(2);  // hexagon class object
	myhexagon.display();
	goto start;}
	else if(choice==2)
	{
	Square mySquare(3);  // square class object
	mySquare.display();
	goto start;}
	
	else
	return 0;
}
