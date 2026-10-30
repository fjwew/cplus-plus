#include <iostream>
using namespace std;

#pragma region task3
void createArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 50;
	}
}

void printArr(const int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

void minMax(int* arr, int size)
{
	int min = arr[0];
	int minIndex = 0;
	int max = arr[0];
	int maxIndex = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			maxIndex = i;
		}
		if (arr[i] < min)
		{
			min = arr[i];
			minIndex = i;
		}
	}
	arr[minIndex] = max;
	arr[maxIndex] = min;
}
#pragma endregion

#pragma region task4
void parNepar(int* arr, int size)
{
	int temp = 0;
	for (int i = 0; i < size; i+= 2)
	{
		temp = arr[i];
		arr[i] = arr[i + 1];
		arr[i+1] = temp;
	}
}
#pragma endregion

int main()
{
	srand(time(0));

	const int size{50};
	int arr[size];
	createArr(arr, size);
	printArr(arr, size);
	minMax(arr, size);
	printArr(arr, size);
	parNepar(arr, size);
	printArr(arr, size);
}

