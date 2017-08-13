#include <cmath>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

	int b, 
		t = 2,
		z = 3;
	float y, x;
	
	b = t + z;
	y = cos(b);	
	
	x = 4 * pow(y,3) - z / t; 
	cout << "result " << x << endl;

	getch();
	return 0;	
}
