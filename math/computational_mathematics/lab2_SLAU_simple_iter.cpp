#include <cmath>
#include <iostream>
#include <conio.h>
#include <iomanip> // дл€ setprecision (сколько знаков после зап€той в действительном числе) ;  setw (отступы)
#include <locale>
#define SIZE 4
#define N 0.011


using namespace std;


float Var(int n);


int main()
{
	setlocale(LC_ALL, "rus");
	
	
	float c;
	int i,j;
	float C[SIZE][SIZE];
	float normC, max1=0;
	float normB;
	
	
	float CB[SIZE];
	
	
	
	c = Var(5);
	
	
	float arr1[SIZE][SIZE] = {{ 0.95+c, 0.26+c, -0.17+c, 0.27+c },
							  { -0.15+c, 1.26+c, 0.36+c, 0.42+c },
							  { 0.26+c, -0.54+c, -1.76+c, 0.31+c },
							  { -0.44+c, 0.29+c, -0.78+c, -1.78+c }};
	
	
	float B[SIZE] = { 2.48, -3.16, 1.52, -1.29 };
	
	
	
	
	for (i = 0; i<=SIZE; i++)  
	{
		B[i] = B[i] / arr1[i][i];
	}

//вывод матрицы — (она же det arr1)
	cout << "матрица — \n" << endl; 
	for (i = 0; i<SIZE; i++)
		{
			for (j = 0; j<SIZE; j++)
			{
				C[i][j] = arr1[i][j] / arr1[i][i];   //вычисление матрицы — из матрицы arr1
				if (i == j) C[i][j] = 0;   			//присваивание 0 диагонали
				
				cout << setw(12) << setprecision(3) << C[i][j] ; 
			}
			cout << endl; 
		}

//////////////////////////////////////////////////////////////////////////////////////////////////////
	
	cout << endl;
	cout << "норма матрицы — = " ; 	
	double str[SIZE];
	for (int i=0; i<SIZE; i++)
	{
		normC = fabs(C[i][0]) + fabs(C[i][1]) + fabs(C[i][2]) + fabs(C[i][3]);
		if (normC > max1)
		max1 = normC;	 
	}
	cout << setprecision(3) << max1 << endl;	
		
	

	
	getch();
	return 0;
}


float Var(int n)
{
	return (float)n*0.01;
}

