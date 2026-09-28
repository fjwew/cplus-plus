#include <iostream>
#include <iomanip>

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

void fillOneRow(int* arr, int cols)
{
    for (int i = 0; i < cols; i++)
    {
        arr[i] = rand() % 10;
    }
}

//int** addRowToEnd(int** arr, int &rows, int columns)
//{
//    int** temp = new int*[rows + 1];
//    
//    for (int i = 0; i < rows; i++)
//    {
//        temp[i] = arr[i];
//    }
//    temp[rows] = new int[columns];
//    fillOneRow(temp[rows], columns);
//    rows++;
//    delete[]arr;
//    return temp;
//}
//
//
//int** addRowByPosition(int** arr, int rows, int cols, int pos)
//{
//    int** temp = new int* [rows + 1];
//    for (int i = 0; i < pos; i++)
//    {
//        temp[i] = arr[i];
//    }
//    temp[pos] = new int[cols];
//    fillOneRow(temp[pos], cols);
//    for (int i = pos + 1; i < rows+1; i++)
//    {
//        temp[i] = arr[i - 1];
//    }
//    delete[]arr;
//    rows++;
//    return temp;
//}
//
//
//int** addColtoEnd(int** arr, int rows, int cols)
//{
//    int** temp = new int* [rows + 1];
//    for (int i = 0; i < rows; i++)
//    {
//        temp[i] = new int[cols + 1];
//    }
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            temp[i][j] = arr[i][j];
//        }
//    }
//    for (int i = 0; i < rows; i++)
//    {
//        delete[] arr[i];
//    }
//    delete[] arr;
//    for (int i = 0; i < rows; i++)
//    {
//        temp[i][cols] = 5;
//    }
//    cols++;
//    return temp;
//}
//
//int** deleteCol(int** arr, int rows, int cols)
//{
//    int** temp = new int* [rows - 1];
//    for (int i = 0; i < rows-1; i++)
//    {
//        temp[i] = arr[i];
//    }
//    delete[] arr[rows - 1];
//    delete[] arr;
//    rows--;
//    return temp;
//}



int** addNewRowStart(int** arr, int rows, int cols)
{
    int** temp = new int* [rows+1];
    temp[0] = new int[cols];

    fillOneRow(temp[0], cols);
    for (int i = 1; i < rows; i++)
    {
        temp[i] = arr[i-1];
    }
    rows++;
   
    return temp;
    

}


int** removeRowStart(int** arr, int rows, int cols)
{
    int** temp = new int* [rows - 1];
    temp[0] = ;
    for (int i = 1; i < rows; i++)
    {

    }
}





int main()
{
    int rows = 3;
    int columns = 4;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {       
        arr[i] = new int[columns];
    }
    initArray(arr, rows, columns);
    showArray(arr, rows, columns);
    cout << endl;
    /*arr = addRowToEnd(arr, rows, columns);
    showArray(arr, rows, columns);
    cout << endl;
    arr = addRowByPosition(arr, rows, columns, 3);
    showArray(arr, rows, columns);

    addColtoEnd(arr, rows, columns)*/

    arr = addNewRowStart(arr, rows, columns);
    showArray(arr, rows, columns);
    cout << endl;

    arr = removeRowStart(arr, rows, columns);
    showArray(arr, rows, columns);
    cout << endl;



    for (int i = 0; i < rows; i++)
    {
        delete arr[i];
    }
    delete[] arr;







    

}

