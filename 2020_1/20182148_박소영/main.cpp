#include <iostream>
#include "Ride.h"
#include "Menu.h"
#include "Person.h"

using namespace std;

int main(void)
{
	Person person;
	Ride ride;
	Menu menu;
	Ticket ticket;

	person.PAY();
	ride.WithParents();
	ride.SetSeat();
	person.TAKE();

	menu.ShowMenu();
	menu.Calculate("GongChar", 2);

	return 0;
}