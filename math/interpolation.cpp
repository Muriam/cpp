#include <cmath>
#include <iostream>
#include <conio.h>
#include <iomanip> //для setprecision(сколько знаков после запятой в действительном числе)
#define N 5
#define H 0.011

using namespace std;


int main()
{
	double func,c;
	double x[30] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29};
	int i;
	
	c = N + 1;
	
//	func = 2*pow(c,3)*sin(x/c);  
	
	
	
	for (i=0; i<=29; i++)
	{
		x[i] = (c + i*H) + ((i%4+1 / 5) * H);
		i++;
	} 
	
	
	for (i=0; i<=29; i++)
	cout << "x = " << setprecision(4) << x[i] << endl;
  
	
	getch();
	return 0;	
}	

	
