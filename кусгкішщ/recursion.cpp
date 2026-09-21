#include <iostream>
using namespace std;

//int kaka(int a)
//{
//    if (a == 0)
//    {
//        return 0;
//    }
//    cout << "hello" << a << "time" << endl;
//    a--;
//    kaka(a);
//}
//
//int summa(int arr[], int size, int index)
//{
//    if (index == size - 1)
//        return arr[index];
//    return arr[index] + summa(arr, size, index + 1);
//}

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

void quickSort(int arr[], int size, int B, int E)
{
    int i = B, j = E;
    int temp, p;
    p = arr[(B + E) / 2];
    do
    {
        while (arr[i] < p) i++;
        while (arr[j] > p) j--;
        if (i <= j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }

    } while (i <= j);
    if (B < j) quickSort(arr, size, B, j);
    if (i < E) quickSort(arr, size, i, E);
}


//////////////////////////////////


int findStupin(int number, int stupin)
{
    if (stupin == 0)
        return number;
    number *= number;
    stupin--;
    findStupin(number, stupin);
}

void nZirok(char symbol, char times)
{
    if (times == 0)
        return;
    cout << symbol << " ";
    times--;
    nZirok(symbol, times);
}

void sumaChiselDiapason(int from, int to)
{
    from - 1;
    if (from > to)
        return;
    
    cout << from++ << " ";
    sumaChiselDiapason(from, to);
}


//int binarySearch(int arr[], int size, int key)
//{
//    int B = 0, E = size - 1;
//    while (true)
//    {
//        int p = (B + E) / 2;
//        if (key > arr[p])
//        {
//            B = p + 1;
//        }
//        else if (key < arr[p])
//        {
//            E = p - 1;
//        }
//        else if (key == )
//
//    }
//}

int main()
{
    srand(time(0));
    const int size = 10;
    int arr[size] = { 1, 9, 3, 4, 5, 2, 7, 14, 9, 10 };

    //int brauni = kaka(12);
    //int suma = 0;
    //for (int i = 0; i < size; i++)
    //{
    //    cout << arr[i] << " ";
    //    suma += arr[i];
    //}

    ////summa(arr, size, 0);
    //summa(arr, size, 0);

    initArray(arr, size);
    showArray(arr, size);

    quickSort(arr, size, 0, size - 1);
    showArray(arr, size);


    // first exercise
    cout << "\nfirst exercise\n";
    int number = 55, stupin = 2;

    cout << number << " - number, " << stupin << " - stupin\n\n";

    int stupinFind = findStupin(number, stupin);
    cout << stupinFind << " - stupin\n\n";
    
    // second exercise
    cout << "second exercise\n";
    char symbol = '*', times = 55;
    cout << symbol << " - symbol, " << times << " - times\n\n";

    nZirok(symbol, times);
    cout << "\n\n";

    // third exercise
    cout << "third exercise\n";
    int from = 2, to = 99;
    cout << from << " - from, " << to << " - to\n\n";

    sumaChiselDiapason(from, to);
    cout << "\n\n";
    
    // fourth exercise(dodatkovi bali)
}
