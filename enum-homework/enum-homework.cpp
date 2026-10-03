#include <iostream>
using namespace std;

// first exercise
void numbersCout(int from, int to)
{
    cout << "numbers from " << from << " to " << to << ":" << endl;
    while (from < to+1)
    {
        cout << from << " ";
        from++;
    }
    cout << endl << endl;
}

// second exercise
void neparniCout(int from, int to)
{
    cout << "neparni numbers from " << from << " to " << to << ":" << endl;
    while (from < to+1)
    {
        if (from % 2 != 0)
            cout << from << " ";
        from++;
    }
    cout << endl << endl;
}

// third exercise
void videmniCout(int array[], int size)
{
    int i = 0;
    int counter = 0;
    cout << endl << "videmni numbers:" << endl;
    while (i < size)
    {
        if (array[i] < 0)
        {
            cout << "found vid'emniy number! it's " << array[i] << endl;
            counter++;
        }
        i++;
    }
    if (counter == 0)
        cout << "i didn't found any videmni numbers!";
    cout << endl << endl;
}



// fourth exercise
void dobutokSerArif(int array[], int size)
{
    int i = 0;

    int dobutok = 1;
    int serarif = 0;
    while (i < size)
    {
        dobutok *= array[i];
        serarif += array[i];
        i++;
    }
    serarif /= size;

    cout << "doubtok of this numbers - " << dobutok << endl << "serarif of this numbers - " << serarif;
    cout << endl << endl;
}

// fifth exercise
void parniReverse(int from, int to)
{
    cout << "parni numbers from " << from << " to " << to << endl;
    do {
        if (from % 2 == 0)
            cout << from << " ";
        from--;
    }
    while (from > to);
    cout << endl << endl;
}

// sixth exercise
void dobutok5(int arr[], int size)
{
    int counter = 0;
    int dobutok = 1;
    do
    {
        dobutok *= arr[counter];
        counter++;
    } while (counter < size);
    cout << "dobutok of this numbers - " << dobutok;

    cout << endl << endl;
}



int main()
{
    const int arrsize = 4;
    const int arrsize2 = 8;
    const int arrsize3 = 5;

    int counter = 0;

    // first exercise
    cout << "first exercise" << endl;
    numbersCout(14, 123);

    // second exercise
    cout << "second exercise" << endl;
    neparniCout(1, 100);

    // third exercise
    cout << "third exercise" << endl;
    int N[arrsize];
    while (counter < arrsize)
    {
        cout << "enter " << counter+1 << " number -> "; cin >> N[counter];
        counter++;
    }
    counter = 0;
    videmniCout(N, arrsize);

    // fourth exercise
    cout << "fourth exercise" << endl;
    int numbers8[arrsize2];
    while (counter < arrsize2)
    {
        cout << "enter " << counter + 1 << " number -> "; cin >> numbers8[counter];
        counter++;
    }
    counter = 0;
    dobutokSerArif(numbers8, arrsize2);

    // fifth exercise
    cout << "fifth exercise" << endl;
    parniReverse(100, 0);

    // sixth exercise
    cout << "sixth exercise" << endl;
    int numbers5[arrsize3];
    while (counter < arrsize3)
    {
        cout << "enter " << counter + 1 << " number -> "; cin >> numbers5[counter];
        counter++;
    }
    counter = 0;

    dobutok5(numbers5, arrsize3);

    // seventh exercise
    cout << "seventh exercise" << endl;


}








