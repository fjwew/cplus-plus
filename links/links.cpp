#include <iostream>
#include <conio.h>
using namespace std;

// links and pointers

//void pointers(int a, int* pointerA)
//{
//    cout << "pointers:" << endl;
//    
//    cout << "a - " << a << endl;
//    cout << "pointerA - " << pointerA << endl;
//    cout << "*pointerA - " << *pointerA << endl;
//}
//
//void links(int a, int& linkA)
//{
//    cout << "links:" << endl;
//    
//    cout << "a - " << a << endl;
//    cout << "linkA - " << linkA << endl;
//}

// examples

//int& findMax(int& a, int& b)
//{
//    if (a > b)
//        return a;
//    else
//        return b;
//}
//
//void test1()
//{
//    const int size = 10;
//    int arr[size];
//}
//
//void test2()
//{
//    int size = 10;
//    cin >> size;
//    int* arr = new int[size];
//}
//
//int* createArray(int size)
//{
//    int* arr = new int[size];
//    return arr;
//}
//
//void initArray(int* arr, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        arr[i] = rand() % 100;
//    }
//}
//
//void showArray(int* arr, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//void addNewNumber(int* arr, int size, int number)
//{
//    int* temp = new int[size + 1];
//    for (int i = 0; i < size; i++)
//    {
//        temp[i] = arr[i];
//    }
//}
//
//void deleteArray(int* arr)
//{
//    delete[] arr;
//}

void threeZminni()
{
    int* integer = new int(15);
    float* floater = new float(15.67);
    double* doubler = new double(15.456564563);

    double dobutok = *integer * *floater * *doubler;
    cout << "dobutok - " << dobutok << endl;


    delete integer, floater, doubler;
}

int* newMasiv(int size)
{
    int* arr = new int [size];

    return arr;
}

void fillMasiv(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 50;
    }
}

void showMasiv(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int* deleteLastMasivsElement(int* arr, int *size)
{
    int* newmasiv = new int[*size-1];

    for (int i = 0; i < *size-1; i++)
    {
        newmasiv[i] = arr[i];
    }
    return newmasiv;
}

int main()
{
    srand(time(0));
    cout << "first exercise" << endl;
    threeZminni();
    cout << endl;

    cout << "second exercise" << endl;

    /*int a = 10;
    int b = 15;

    int* pointerA = new int(15);
    int* pointerB = new int;
    int* pointerC = nullptr;

    *pointerB = 5;
    pointerC = new int(12);

    cout << "pointerA - " << pointerA << endl;
    cout << "pointerB - " << pointerB << endl;
    cout << "pointerC - " << pointerC << endl;

    cout << "*pointerA - " << *pointerA << endl;
    cout << "*pointerB - " << *pointerB << endl;
    cout << "*pointerC - " << *pointerC << endl;

    delete pointerC;
    pointerC = new int(55);

    cout << "*pointerA - " << *pointerA << endl;
    cout << "*pointerB - " << *pointerB << endl;
    cout << "*pointerC - " << *pointerC << endl;

    delete pointerA;
    delete pointerB;
    delete pointerC;

    int size = 3;
    cout << "enter size -> ";
    cin >> size;


    int* arr = createArray(size);
    initArray(arr, size);
    showArray(arr, size);
    deleteArray(arr);*/

    /*int* pointerA = &a;
    int& linkA = a;

    pointers(a, pointerA);
    cout << endl;
    links(a, linkA);
    cout << endl;
    
    int& lmax = findMax(a, b);
    cout << "max element - " << lmax << endl;*/

    int size = 50;

    int* arr = newMasiv(size);
    fillMasiv(arr, size);
    showMasiv(arr, size);
    cout << "\n\n";
    int* array = deleteLastMasivsElement(arr, &size);
    showMasiv(array, size);

    delete[] arr;







}
