#include <iostream>
#include <cstdlib>
using namespace std;
#define N 10
int main()
{
	int a[N]; 
	int i;
	int sum = 0;
	for (i = 0; i < N; i++)
	{
		a[i] = rand()%100-20;
	}
	cout << "Massiv: ";
	
	for (i = 0; i < N; i++) 
	{
		cout << a[i] << " " <<endl;
	}
	
	
	int min = 0;
	while (a[i] < 0) {
		i++;
	}

	i = 0;
	min = a[i];

	for (int i = 0; i < N; i++)
	{
		if (min > a[i])
			min = a[i];
	}
	cout << "min= " << min << endl;
	for (int i = 0; i < N; i++)
	{
		sum += a[i];
	}
	cout << "sum= " << sum << endl;
}