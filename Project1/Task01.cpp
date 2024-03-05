#include <iostream>

using namespace std;


int main() {

	int n = 5;
	int m = 10;

	int** classes = new int* [n];

	for (int i = 0; i < n; i++)
	{
		*(classes + i) = new int[m];
		//classes[i] = new int[m];
	}


	for (int j = 0; j < n; j++)
	{
		delete[] *(classes + j);  // power
		//delete[] classes[j];
	}

	delete[] classes;

	return 0;
}