
//Declare a variable of p as static.
static int p = 0;

//Create a class name of a.
class a {

	//Declare variable as  a char.User can enter string values
	char busn[5], driver[10], arrival[5], depart[5], from[10], to[10], seat[8][4][10];
	//Busn number of bus no.

	
public://Global
	void install();
//This feature allows you to install a typical bus information before it can be reserved by the passengers or shown in buses available.It includes the bus no., driver’s name, arrival time, departure time and destination(from and to) of the bus.
	void allotment();
//This feature is very simple; it includes the bus no., seat number and the passenger’s name.The seat number of the particular bus is reserved under the passenger’s name.
	void empty();
//If there is a empty space show it to user.Empty seats in a bus along with the seat number registered to a particular passenger. (Scroll down to view the output screen of this feature.)
	void show();
//With this feature, you can show all the information regarding the buses and their respective seats. It contains all the information stored by the previous two function of this project. It also enlists the no.
	void avail();
//This feature simply shows the buses available for reservation, and the information regarding the bus no. stored under the first feature.
	void position(int i);
//This feature determine seats and paosions.

};
 
