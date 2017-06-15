#include "stdafx.h"
#include "Auxil.h"                          
#include <iostream>
#include <ctime>
#include <locale>
#include <fstream>

int _tmain(int argc, _TCHAR* argv[])
{

	double  averangInt = 0;
	double  averangDouble = 0;

	clock_t  start = 0;
	clock_t	 stop = 0; 

	int size = 1000000;

	std::ofstream test("test.cpp");

	auxil::start();
	
	for (int j = 0; j < 10; j++)
	{
		start = clock();
		for (int i = 10; i < size; i++) 
		{
			averangInt += (double)auxil::iget(-100, 100); 
			averangDouble += auxil::dget(-100, 100);         
		}
		stop = clock();
		test << std::endl << "Size = " << size << " Time: " << stop - start 
				<< " averangInt = " << (double)averangInt/size << " averangDouble = " << (double)averangDouble / size;	
		size += 100000;
	}
	
	system("pause");
	return 0;
}

