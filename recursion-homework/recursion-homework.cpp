#include <iostream>
using namespace std;

// exercise 4
void findMin10(const int arr[], const int size, int currentIndex, int& bestIndex, int& minSuma)
{
    if (currentIndex > size - 10)
        return;


    int currentSum = 0;
    for (int j = 0; j < 10; j++)
    {
        currentSum += arr[currentIndex + j];
    }

    if (currentIndex == 0 || currentSum < minSuma)
    {
        minSuma = currentSum;
        bestIndex = currentIndex;
    }

    findMin10(arr, size, currentIndex + 1, bestIndex, minSuma);
}

int array100(const int arr[], const int size) {
    int bestIndex = 0;
    int minSuma = 0;

    findMin10(arr, size, 0, bestIndex, minSuma);

    return bestIndex;
}

// exercise 2
void newStrish(int arr[])
{
    for (int i = 0; i < 64; i++)
    {
        arr[i] = i + 1;
    }
}

void nanizatiDiskiZ1Do3(int arr1[], int arr2[])
{
    if (true)
    {
        return;
    }
}

int main()
{
    srand(time(0));

    // first exercise
    const int size = 100;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }

    int index10 = array100(arr, size);
    cout << index10;

    // second exercise
    int almazStrish1[64];
    newStrish(almazStrish1);
    int almazStrish2[64];
    newStrish(almazStrish2);
    int almazStrish3[64];
    newStrish(almazStrish3);
}
