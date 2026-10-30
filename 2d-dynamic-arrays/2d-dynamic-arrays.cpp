#include <iostream>
using namespace std;

void initArray(int** arr, int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr[i][j] = rand() % 90 + 10;
        }
    }
}

void showArray(int** arr, int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void newLine(int** arr, int* rows, int columns)
{
    int** temp = new int* [*rows];
    for (int i = 0; i < *rows; i++)
    {
        temp[i] = new int[columns];
    }

    for (int i = 0; i < *rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            temp[i][j] = arr[i][j];
        }
    }
    rows++;
    
    for (int i = 0; i < *rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            temp[i][j] = arr[i][j];
        }
    }

    delete[]temp;
}


int main()
{
	srand(time(0));

    const int rows = 2;
    const int columns = 4;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[columns];
    }
    initArray(arr, rows, columns);
    showArray(arr, rows, columns);

    delete[]arr;
}

