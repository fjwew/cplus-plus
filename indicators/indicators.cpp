#include <iostream>
using namespace std;



void initArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

void showArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}



//int findMax(int* arr, int size)
//{
//	int* max = arr;
//	for (int i = 0; i < size; i++)
//	{
//		if (*(arr + i) > *max)
//			max = arr + i;
//	}
//	return *max;
//}


void dobutok(int* a, int* b, int* c)
{
	int dobutok = *a * *b * *c;
	cout << "dobutok - " << dobutok << endl;
}

void straightArray(int* arr, int size)
{
	int* pArray = &arr[0];
	for (int i = 0; i < size; i++)
	{
		cout << *pArray << " ";
		pArray++;
	}
	cout << endl;
}

void reverseArray(int *arr, int size)
{
	int* pArray = &arr[size - 1];
	for (int i = 0; i < size; i++)
	{
		cout << *pArray << " ";
		pArray--;
	}
	cout << endl;
}

void dobutokArray(int* arr, int size)
{
	int dobutok = 1;
	int* arrIpos = &arr[0];
	for (int i = 0; i < size; i++)
	{
		dobutok *= *arrIpos;
		arrIpos++;
	}
	cout << dobutok << endl;
}

void minmaxElement(int* arr, int size)
{

	int* max = &arr[0];
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > *max)
			max = (arr + i);
	}
	int* min = &arr[0];
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < *min)
			min = (arr + i);
	}

	int temp = *max;
	*max = *min;
	*min = temp;
}


int main()
{
	srand(time(0));
	cout << "it`s start of the lesson!\n";
	cout << "first exercise -> \n";

	int a = 10;
	int b = 20;
	int c = 30;

	int* pointerA = &a;
	int* pointerB = &b;
	int* pointerC = &c;

	dobutok(pointerA, pointerB, pointerC);

	cout << "\nsecond exercise -> \n";

	const int size = 10;
	int arr[size]{};
	initArray(arr, size);
	showArray(arr, size);
	cout << "\n\n";
	reverseArray(arr, size);
	straightArray(arr, size);
	dobutokArray(arr, size);
	cout << endl;


	cout << "third exercise -> " << endl;
	showArray(arr, size);
	minmaxElement(arr, size);
	showArray(arr, size);



	/*int a = 5;
	int b = 10;

	int* pointerA = &a;
	int* pointerB = &b;

	cout << "a - " << a << endl;
	cout << "b - " << b << endl;
	cout << "pointerA - " << pointerA << endl;
	cout << "pointerB - " << pointerB << endl;
	cout << "*pointerA - " << *pointerA << endl;
	cout << "*pointerB - " << *pointerB << endl;

	cout << a + b << endl;
	cout << *pointerA + *pointerB << endl << endl;

	*pointerB += 2;

	const int size = 10;
	int arr[size]{};
	int* pointerArray = &arr[0];

	cout << "arr[0] - " << arr[0] << endl;
	cout << "pointerArrray - " << pointerArray << endl << endl;
	
	cout << "array:" << endl;

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}

	cout << endl << endl << "pointerArray:" << endl;

	for (int i = 0; i < size; i++)
	{
		*pointerArray = rand() % 100;
		pointerArray++;
	}


	int* newptr = arr;
	*newptr = 0;
	newptr += 3;
	*newptr = 0;

	pointerArray = arr;*/
	 













}