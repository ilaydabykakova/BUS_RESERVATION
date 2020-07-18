// ConsoleApplication21.cpp : Defines the entry point for the console application.
//Using these libararies.
#include "stdafx.h" 
#include "BusReservation.h" //Call the header file of bus reservation.
#include <conio.h>
#include <cstdio>
#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;//we can call functions with this std.

//MAIN PART
int main()
{
	a bus[10];//This type like an enum because we declare a class as a variable of bus[10].
	system("cls");//Close the system

	//Declare variable
	int w;

	while (1) //infinite loop (exp : for(;;))

	{

		//system("cls");

		//This is text for give information and selection part about bus reservation .

		cout << "\n\n\n\n\n";

		cout << "\t\t\t1.Install\n\t\t\t"

			<< "2.Reservation\n\t\t\t"

			<< "3.Show\n\t\t\t"

			<< "4.Buses Available. \n\t\t\t"

			<< "5.Exit";

		cout << "\n\t\t\tEnter your choice:-> ";

		cin >> w;
		//User enter a number according to above of selection part.

		//User's entered number go to in swich statement and according to number go to cases.
		switch (w)

		{
			//if case 1 do this command
		case 1:  bus[p].install();//Object of bus called the install function from a.

			break;

		case 2:  bus[p].allotment(); //Object of bus called the allotment function from a.

			break;

		case 3:  bus[0].show();//Object of bus called the show function from a.

			break;

		case 4:  bus[0].avail();//Object of bus called the avail function from a.

			break;

		case 5:  exit(0);//Exit(Finish the process.)

		}

	}
    return 0;
}

