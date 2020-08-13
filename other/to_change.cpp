/*
https://programmersforum.ru/showthread.php?p=1809254
Есть два файла binaryData1.info и binaryData2.info. Нужно реализовать функцию побитового ИЛИ между их содержимом.
При этом, всё это записать в файл unionbinaryData.info, и чтобы биты были в обратном порядке (младший бит становится старшим и т. д.). 
Но при этом нельзя использовать функцию Invert
*/
#include <conio.h>
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <iostream>
#include<fstream>
#include <string>
#include <sys/stat.h>

int main(void) 
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(8);
	SetConsoleOutputCP(8);
 
 /* файл 1*/
	FILE *file1;
	int number;
	file1 = fopen("binaryData1.info", "rb");
	fread(&number, sizeof(int), 1, file1);
	
	printf("Содержимое файла 1 ");
	printf("%d", number);
	printf("\n");
	fclose(file1);
	
	getch();
 
 
  /* файл 2*/
	FILE *file2;
	int number2;
	file2 = fopen ("binaryData2.info", "rb");
	fread(&number, sizeof(int), 1, file2);
	printf("Содержимое файла 2 ");
	printf("%d", number);
	printf("\n");
	fclose(file2);
	
	getch();
 
 
	int f1, f2;
	ifstream doc1, doc2;
	ofstream doc3;
	
	doc1.open("binaryData1.info", ios::binary|ios::in);
	doc2.open("binaryData2.info", ios::binary|ios::in);
	
	while (!doc1.eof())
	{
		getline(doc1,f1);
	}	
	doc1.close();
	
	while (!doc2.eof())
	{
		getline (doc2, f2);
	}
	doc2.close();




  /* файл 3*/	
	file3.open("unionbinaryData.info", ios::binary|ios::in);
	
	for (i(0); i<f1.size;i++)
	{
		unsigned char ch1=f1[i];
		break;
	}
	
	for (i(0); i<f2.size;i++)
	{
		unsigned char ch2=f2[i];
		break;
	}
	
	unsigned char ch3=ch1|ch2;
	
	cout<<"побитовое ИЛИ: "<<ch3;
	
	
	
	return 0;
}
