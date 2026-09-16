#include <iostream>
using namespace std;

//template<typename tarray>
//tarray maxelement(tarray arr[], tarray size)
//{
//    int max = arr[0];
//    for (int i = 0; i < size; i++)
//    {
//        if (arr[i] > max) max = arr[i];
//    }
//    return max;
//}

template <typename ifd>
ifd maxelement(ifd a, ifd b)
{
    if (a > b)
        cout << a << " > " << b;
    else
        cout << b << " > " << a;
    return a, b;
}

template <typename serarif>
serarif seredneArif(serarif arrr[], int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result += arrr[i];
    }
    result = result / size;
    cout << result;

    return result;
}

template <typename minmax>
void minMaxDvoVimir(minmax arr, int rows, int columns)
{
    jj = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr[i][j] = rand() % 99;
            
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    srand(time(0));
    /*const int size = 10;
    int arr[size] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    cout << "max element in array - " << maxelement(arr, size);*/


    const int size = 10;
    int arr1[size] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    float arr2[][size] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

    // first exercise
    cout << "first exercise\n";
    maxelement(1, 3);
    cout << "\n";
    maxelement(7.4, 2.2);
    cout << "\n";
    maxelement(1.564345463346, 1.3423543657644234324);
    cout << "\n\n";

    // second exercise
    cout << "second exercise\n";
    seredneArif(arr1, size);
    cout << "\n\n";

    // third exercise
    cout << "third exercise\n";
    minMaxDvoVimir(arr2, 5, 10);
}