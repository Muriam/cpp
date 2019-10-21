#pragma once
   
/* класс Вкладчик */
class Depositor
{
protected:
    char surname[15]; 		//фамилия
	  char district[15]; 		//район
	  char status[15]; 		  //социальное положение
	  int contribution; 		//величина вклада

public:
    // Конструктор
	  Depositor(char *surname, char *district, char *status, int contribution);
	

};
