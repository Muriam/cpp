#include <cmath>
#include <iostream>
#include <conio.h>
#include <iomanip> // для setprecision (сколько знаков после запятой в действительном числе) ;  setw (отступы)
#include <locale>
#define SIZE 4


using namespace std;


float Var(int n);
/*float Mult(double C[][4], double B[], double CB[]);// умножение матрицы на вектор*/
void Mult(double C[][4], double B[], double CB[]);




int main()
{
	setlocale(LC_ALL, "rus");
	 
	
	float c;
	int i,j;
	float C[SIZE][SIZE];
	float normC, max1=0;
	float normB, max2=0;
	int steps;
	float X1,X2,X3;	
/*	float CB[4];  */
	
	
		
	c = Var(5);
	
	
	float arr1[SIZE][SIZE] = {{ 0.95+c, 0.26+c, -0.17+c, 0.27+c },
							  { -0.15+c, 1.26+c, 0.36+c, 0.42+c },
							  { 0.26+c, -0.54+c, -1.76+c, 0.31+c },
							  { -0.44+c, 0.29+c, -0.78+c, -1.78+c }};
							  
							  
							  
							  	
	//вывод матрицы изначальной arr1	
	cout << "изначальная матрица arr1 \n" << endl; 
		for (i = 0; i<SIZE; i++)          //цикл по строкам
		{
			for (j = 0; j<SIZE; j++)      //цикл по столбцам
			{
					cout << setw(12) << fixed << setprecision(3) << arr1[i][j]; 
			}
			cout << endl;
		}
		cout << endl;
	
//////////////////////////////////////////////////////////////////////////////////////////////////////

	//вывод матрицы — (она же det arr1)
	cout << "матрица С \n" << endl; 
	for (i = 0; i<SIZE; i++)          //цикл по строкам
		{
			for (j = 0; j<SIZE; j++)  //цикл по столбцам
			{			
				C[i][j] = arr1[i][j] / arr1[i][i];   //вычисление матрицы — из матрицы arr1  //???????? КАК ЭТО?
				if (i == j) C[i][j] = 0;   	 		//присваивание 0 диагонали
				
				cout << setw(12) << fixed << setprecision(3) << C[i][j]; 
			}
			cout << endl; 
		}
		cout << endl;

//////////////////////////////////////////////////////////////////////////////////////////////////////
	
	float B[SIZE] = { 2.480, -3.160, 1.520, -1.290 };	
	
	cout << "изначальный вектор В \n" << endl;
	for (i = 0; i<SIZE; i++)  
	{	
		cout << setw(12) << fixed << setprecision(3) << B[i]; 
		cout << endl; 	
	}
	cout << endl;
	                                    
	
	cout << "вектор неВ \n" << endl;
	for (i = 0; i<SIZE; i++)  
	{
		B[i] = B[i] / arr1[i][i];	
		cout << setw(12) << fixed << setprecision(3) << B[i]; 
		cout << endl; 	
	}
	cout << endl;
	
//////////////////////////////////////////////////////////////////////////////////////////////////////
	
	cout << "норма матрицы С = " ; 	
	for (int i=0; i<SIZE; i++)
	{
		normC = fabs(C[i][0]) + fabs(C[i][1]) + fabs(C[i][2]) + fabs(C[i][3]); //за одну итерацию суммируются значения в одной строке (fabs - взятие модуля для float)
		if (normC > max1)   //если сумма значений строки > 0      //???????? ЗАЧЕМ ЭТО?
		max1 = normC;	 	
	}
	cout << fixed << setprecision(3) << max1 << endl;			

///////////////////////////////////////////////////////////////////////////////////////////////////////
	
	cout << "норма вектора неВ = " ; 	
	for (int i=0; i<SIZE; i++)
	{
		normB = fabs(B[i]);  //за одну итерацию взятие модуля одного элемента
		if (normB > max2)	 //если значение элемента > 0         //???????? ЗАЧЕМ ЭТО?
		max2 = normB;	 
	}
	cout << fixed << setprecision(3) << max2 << endl;			
	cout << endl;
	
///////////////////////////////////////////////////////////////////////////////////////////////////////
/*
//	Inaccuracy = round(log((0.0001 / max2)*(1 - max1)) / log(max1) - 1);

	

	cout << "кол-во шагов погрешности = " << steps << endl;
	cout << endl;
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////

	cout << "итерации" << endl; 
	
//	for (j = 0; j<SIZE; j++)  //цикл по столбцам
//	{
		/*cout << fixed << setprecision(3) << Mult(C[4][4], B[4], CB[4]) << endl;*/
//	}
	
	
	cout << fixed << setprecision(3) << Mult(double C[][4], double B[], double CB[]) << endl;
	
	
	getch();
	return 0;
}

float Var(int n)
{
	return (float)n*0.01;
}

void Mult(double C[][4], double B[], double CB[])
{
	for (int i(0); i < 4; i++)
	{
		CB[i] = 0;
		for (int j(0); j < 4; j++)
		{
			CB[i] += C[i][j] * B[i];
		}
	}
}

/*
float Mult(double C[4][4], double B[4], double CB[4])
{
	for (int i(0); i < 4; i++)
	{
		CB[i] = C[i][0] * B[i] + C[i][1] * B[i] + C[i][2] * B[i] + C[i][3] * B[i];
	}
	return CB[i];
}
*/
