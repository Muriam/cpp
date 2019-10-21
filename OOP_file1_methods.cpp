#include <iostream>
#include "class_description.h"

using namespace std;



/* конструктор */
Depositor::Depositor(char *surname, char *district, char *status, int contribution)
{
    strcpy(surname_2, surname);
	  strcpy(district_2, district);
	  strcpy(status_2, status);
	  deposit = contribution;
}
