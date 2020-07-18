#include "stdafx.h"
#include "BusReservation.h"
#include <conio.h>
#include <cstdio>
#include <iostream>
#include <string.h>
#include <string>
#include <cstdlib>

using namespace std;

a bus[10]; //Object of bus determine type is  class of a.

//Sum of seats are 80.New 80 starting line.
void vline(char ch) {

	for (int i = 80; i>0; i--)

		cout << ch;

}

//Install the informations about bus.And added one passenger.
void a::install(){

	cout << "Enter bus no: ";

	cin >> bus[p].busn; //User will enter bus no .This no is go to iniside of class  

	cout << "\nEnter Driver's name: ";

	cin >> bus[p].driver;//User will enter bus Driver's name .This name is go to iniside of class

	cout << "\nArrival time: ";

	cin >> bus[p].arrival;//User will enter bus Arrival time.This time is go to iniside of class.

	cout << "\nDeparture: ";

	cin >> bus[p].depart;//User will enter Departure.This departure is go to iniside of class

	cout << "\nFrom: \t\t\t";

	cin >> bus[p].from;//User will enter where is he from.This from is go to iniside of class

	cout << "\nTo: \t\t\t";

	cin >> bus[p].to;//User will enter where to go.This to is go to iniside of class

	bus[p].empty();//Open the empty space.

	p++;//Added one space is full.

}

//Allocation of seats.
void a ::allotment()
{
	//Declaring variables.
	int seat;

	char number[5];

top:

	cout << "Bus no: ";

	cin >> number;
	//User enter bus no
	int n;

	for (n = 0; n <= p; n++)

	{
		//Seats are not full  go out.
		//strcmp : It compares two null-terminated byte strings.
		if (strcmp(bus[n].busn, number) == 0)

			break; 
		//Break and go to while loop because seats are empty.

	}
	while (n <= p)

	{

		cout << "\nSeat Number: ";

		cin >> seat;
		//Enter seat number.

		//There are not empty seats.
		if (seat>32)

		{

			cout << "\nThere are only 32 seats available in this bus.";

		}
		//Reservation Part
		else

		{

			//Calculation of seat .Enter the passenger.
			if (strcmp(bus[n].seat[seat / 4][(seat % 4) - 1], "Empty") == 0)

			{
				//New reservation
				//Enter passenger name and save it.
				cout << "Enter passanger's name: ";

				cin >> bus[n].seat[seat / 4][(seat % 4) - 1];

				break;
				//Out.
			}

			else
				//Else this seat can be reserved
				cout << "The seat no. is already reserved.\n";

		}

	}
	//Wrong bus no
	if (n>p)

	{

		cout << "Enter correct bus no.\n";

		goto top;

	}

}

//LOOK THE EMPTY SEATS.
void a::empty()

{

	for (int i = 0; i<8; i++)//8 line of column

	{

		for (int j = 0; j<4; j++)//4 line of row

		{
			//strcpy_s : Copies the null-terminated byte string pointed to by src
			//Lokk the inside the calss and make a empty sapce.
			strcpy_s(bus[p].seat[i][j], "Empty");

		}

	}

}

//Show information about entered bus no ,Driver,Arrival time,Departure time,From,To.
void a::show()

{
	//Declare varibales.
	int n;

	char number[5];

	//User enter the number of bus no
	cout << "Enter bus no: ";

	cin >> number;

	//Then search the bus no
	for (n = 0; n <= p; n++)
	{
		//Seats are not full  go out.
		//strcmp : It compares two null-terminated byte strings.
		if (strcmp(bus[n].busn, number) == 0)

			break;

	}

	while (n <= p)

	{

		vline('*');
		//Search the information according to bus no

		cout << "Bus no: \t" << bus[n].busn

			<< "\nDriver: \t" << bus[n].driver << "\t\tArrival time: \t"

			<< bus[n].arrival << "\tDeparture time:" << bus[n].depart

			<< "\nFrom: \t\t" << bus[n].from << "\t\tTo: \t\t" <<

			bus[n].to << "\n";

		vline('*');

		bus[0].position(n);

		int a = 1;

		for (int i = 0; i<8; i++)

		{

			for (int j = 0; j<4; j++)

			{

				a++;

				if (strcmp(bus[n].seat[i][j], "Empty") != 0)

					cout << "\nThe seat no " << (a - 1) << " is reserved for " << bus[n].seat[i][j] << ".";

			}

		}

		break;

	}
	//If bus no entered wrong.(About the number of bus no)
	if (n>p)

		cout << "Enter correct bus no: ";

}

//Find the empty spaces.
void a::position(int l)

{

	int s = 0; p = 0;

	for (int i = 0; i<8; i++)

	{

		cout << "\n";

		for (int j = 0; j<4; j++)

		{

			s++;

			if (strcmp(bus[l].seat[i][j], "Empty") == 0)

			{

				cout.width(5);

				cout.fill(' ');

				cout << s << ".";

				cout.width(10);

				cout.fill(' ');

				cout << bus[l].seat[i][j];

				p++;

			}

			else

			{

				cout.width(5);

				cout.fill(' ');

				cout << s << ".";

				cout.width(10);

				cout.fill(' ');

				cout << bus[l].seat[i][j];

			}

		}

	}

	cout << "\n\nThere are " << p << " seats empty in Bus No: " << bus[l].busn;

}

void a::avail()

{
	//Look the availble seats.

	for (int n = 0; n<p; n++)

	{

		vline('*');//Starting line enter the * text.

		cout << "Bus no: \t" << bus[n].busn << "\nDriver: \t" << bus[n].driver

			<< "\t\tArrival time: \t" << bus[n].arrival << "\tDeparture Time: \t"

			<< bus[n].depart << "\nFrom: \t\t" << bus[n].from << "\t\tTo: \t\t\t"

			<< bus[n].to << "\n";

		vline('*');

		vline('_');

	}

}