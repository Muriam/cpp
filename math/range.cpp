#include <cmath>
#include <iostream>
#include <conio.h>
#include <iomanip> // для setprecision (сколько знаков после зап¤той в действительном числе)
#define N 5
#define H 0.011

using namespace std;


int main()
{
	double func, result, c, interp;
	int x[30]; 
	int i;
	double a;
	
	c = N + 1;
	
	
	for (i=0; i<=29; i++)
	{			
		a = c+(i*H);
		func = (pow(c,3) * 2) * sin(result/c); //точное значение функции 
		result = (c + (i * H)) + ((((i%4) + 1) / 5) * H);   //это x(i) 
		cout << "func = " << setprecision(7) << func << "\t\t" << "x = " << setprecision(7) << result << endl;  									
	} 
	
	/*
		for (i=0; i<=30; i++)  // цикл для вычисления приближенного значения
	{
		interp = 	
		cout << "interpolation = " << setprecision(7) << interp << endl;  
	}
	*/
	
	getch();
	return 0;	
}	
