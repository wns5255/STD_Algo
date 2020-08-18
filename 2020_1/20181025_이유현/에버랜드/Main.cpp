#include <iostream>
#include "Person.h"
#include "Ride.h"
using namespace std;

int main(void) {

	// ³îÀÌ±â±¸ °¡µ¿
	Viking v;
	BumperCar b;
	T t;
	Hurricane h;
	Amazon a;

	// »ç¶÷ ÀÔÀå
	Person p1("±èÀÚ»¤", 2);
	Person p2("±è±â¸°", 6);
	Person p3("ÀÌ°î±æ", 10);
	Person p4("¹Ú¶÷Áö", 4);
	Person p5("³ª¿Õ´«", 1);

	// ³îÀÌ±â±¸ Å¾½Â
	p2.RideViking(v);
	p3.RideViking(v);
	p4.RideViking(v);
	p5.RideViking(v);

	p5.RideAmazon(a);
	p3.RideAmazon(a);
	p2.RideAmazon(a);

	p3.RideT(t);
	p1.RideT(t);
	p4.RideT(t);
	p2.RideT(t);

	p2.RideBumper(b);
	p4.RideBumper(b);

	p2.RideHurricane(h);
	p4.RideHurricane(h);
	p1.RideHurricane(h);

	p1.ShowData();
	p2.ShowData();
	p3.ShowData();
	p4.ShowData();
	p5.ShowData();

	return 0;
}