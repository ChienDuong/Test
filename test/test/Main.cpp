#include <iostream>
#include "Test.h"
#include<vector>
using namespace std;

/**
* Increase a value.
* using pointer
*/
int Increasement(int &input)
{
	input++;
	return input;
};


int main()
{

	vector<vector<double> > Hor_Y(10, vector<double>(20));
	Hor_Y[1][1] = 10;
	cout << Hor_Y[1][1] << "test vector\n";
	cout << "number of columns" << Hor_Y[0].size();
	cout << "number of rows" << Hor_Y.size();
	for (int i = 0; i < Hor_Y[0].size(); i++)
	{

	}


	int value_input = 3;
	Test t;
	int temp=t.increase1(value_input);


	int *pointer; // initial pointer
	pointer = &value_input;// determine where is pointer
	Increasement(*pointer);
	cout << "Gia tri cua pointer la:\n" << *pointer;	
	cout << "Gia tri cua input la:" << value_input<<'\n';

	// Using Multidimensional array
	int matrix[5][5];
	matrix[0][0]= 1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << matrix[i][j]<<'\n';
		}
	}
	system("pause");
	return 0;
};

