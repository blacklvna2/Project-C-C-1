#pragma once
#include <iostream>
#include <string>


class perso
{
	/*pv, capaciter specital(une fontion dedans)*/
private:
	int pv;
	int capaciter_speciale;


public:
	perso(int pv, int capaciter_speciale);
	int getPv();
	int getCapaciterSpeciale();
	void setPv(int pv);
	void setCapaciterSpeciale(int capaciter_speciale);
	~perso();
};

