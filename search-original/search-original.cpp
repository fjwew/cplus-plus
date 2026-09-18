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

//int linearSearch(int arr[], int size, int key)
//{
//    for (int i = 0; i < size; i++)
//    {
//        if (arr[i] == key)
//            return i;
//    }
//    return -1;
//}

//// sorting
//void selectSort(int arr[], int size)
//{
//    int temp, index;
//    for (int i = 0; i < size; i++)
//    {
//        index = i;
//        temp = arr[i];
//        for (int j = i + 1; j < size; j++)
//        {
//            if (arr[j] < temp)
//            {
//                temp = arr[j];
//                index = j;
//            }
//        }
//        if (index != i)
//        {
//            arr[index] = arr[i];
//            arr[i] = temp;
//        }
//    }
//}
//
//void bubbleSort(int arr[], int size)
//{
//    int temp;
//    for (int i = 0; i < size; i++)
//    {
//        for (int j = 0; j > i; j++)
//        {
//            if (arr[j - 1] > arr[j])
//            {
//                temp = arr[j - 1];
//                arr[j - 1] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//}
//
//void shakerSort(int arr[], int size)
//{
//    int j, index = size - 1;
//    int left = 1, right = size - 1;
//    int temp;
//    do
//    {
//        for (int j = right; j >= left; j--)
//        {
//            if (arr[j - 1] > arr[j])
//            {
//                temp = arr[j - 1];
//                arr[j - 1] = arr[j];
//                arr[j] = temp;
//            }
//            index = j;
//        }
//        left = index + 1;
//        for (j = left; j <= right; j++)
//        {
//            if (arr[j - 1] > arr[j])
//            {
//                temp = arr[j - 1];
//                arr[j - 1] = arr[j];
//                arr[j] = temp;
//            }
//            index = j;
//        }
//        right = index - 1;
//    } while (left < right);
//}

void sortZaZrostannyam(int arr[], int size)
{
    int odin = 1, int temporary;
    for (int i = 0; i < size; i++)
    {
        odin = i;
        temporary = arr[i];

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < temporary)
            {
                temporary = arr[j];
                odin = j;
            }
        }
        if (odin != i)
        {
            arr[odin] = arr[i];
            arr[i] = temporary;
        }

    }
}









int main()
{
    srand(time(0));
    
    const int size = 10;

    int arr[size];
    

    cout << "array\n";
    initArray(arr, size);
    showArray(arr, size);
    
    cout << "\n";

    /*selectSort(arr, size); 
    showArray(arr, size);

    cout << "\n";

    bubbleSort(arr, size); 
    showArray(arr, size);

    cout << "\n";
    
    shakerSort(arr, size);
    showArray(arr, size);*/

    /*int searchkey, indexfind;
    cout << "enter key << ";
    cin >> searchkey;
    indexfind = linearSearch(arr, size, searchkey);


    if (indexfind != -1)
    {
        cout << "element [" << searchkey << "] has been found in index [" << indexfind << "]\n";
    }
    else
    {
        cout << "element [" << searchkey << "] hasn`t been found in index\n";
    }*/

    // first exercise
    cout << "first exercise\n";

    sortZaZrostannyam(arr, size);
    showArray(arr, size);





}
