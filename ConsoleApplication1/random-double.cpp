#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    srand(time(0));

    //int a;
    //a = rand(); // 0 -32767
    //cout << a << endl;

    //a = rand(); // 0 -32767
    //cout << a << endl;

    //a = rand() % 10; // 0 -32767
    //cout << a << endl;

    //a = rand() % 10; // 0 -32767
    //cout << a << endl;

    //a = rand() % 10; // 0 -32767
    //cout << a << endl;

    //for (int i = 0; i < 100; i++) {
    //    a = rand() % 100 + 1;
    //    cout << a << " ";
    //}
    //cout << endl;


    //const int size = 10;
    //int arr[size];

    //for (int i = 0; i < size; i++) {
    //    arr[i] = rand() % 100;
    //    cout << arr[i] << " ";
    //}


    //const int rows = 4;
    //const int columns = 5;
    //int array[rows][columns] = { 0 };

    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < columns; j++) {
    //        cout << array[i][j] << " ";
    //    }
    //    cout << endl;
    //}

    //cout << endl;

    //int array1[3][3] = {{ 1, 2, 3 }, { 4, 5, 6 }};

    //for (int i = 0; i < 3; i++) {
    //    for (int j = 0; j < 3; j++) {
    //        cout << left << setw(4) << array1[i][j] << " ";
    //    }
    //    cout << endl;
    //}


    // 1 exercise
    cout << "first exercise" << endl;

    const int height = 3;
    const int width = 4;
    int counter = 0;

    int masivchick[height][width];


    cout << endl << "   array:" << "\n\n";
    for (int i = 0; i < height; i++) 
    {
        for (int j = 0; j < width; j++) 
        {
            masivchick[i][j] = rand() % 5;
            cout << right << setw(4) << masivchick[i][j] << " ";
            
            if (masivchick[i][j] != 0) {
                counter += 1;
            }
        }
        cout << endl;
    }

    cout << endl << "   number of numbers that does not equal zero: " << counter << endl;



    // 2 exercise
    cout << "\n\n\nsecond exercise" << endl;

    const int height0 = 3;
    const int width0 = 3;
    int counter0 = 0;

    int array[height0][width0];


    cout << endl << "   array:" << "\n\n";
    for (int i = 0; i < height0; i++)
    {
        for (int j = 0; j < width0; j++)
        {
            array[i][j] = rand() % 4;
            cout << right << setw(4) << array[i][j] << " ";

            if (masivchick[i][j] == 0) {
                counter0 += 1;
            }
        }
        cout << endl;
    }

    cout << endl << "   number of numbers that equal zero: " << counter0 << endl;



    // 3 exercise
    cout << "\n\n\nthird exercise" << endl;

    const int height1 = 3;
    const int width1 = 7;
    int counter1 = 0;

    int randmin = -20;
    int randmax = 40;

    int massiv[height1][width1];


    cout << endl << "   array:" << "\n\n";
    for (int i = 0; i < height1; i++)
    {
        for (int j = 0; j < width1; j++)
        {
            massiv[i][j] = rand() % (randmax - randmin + 1) + randmin;;
            cout << right << setw(4) << massiv[i][j] << " ";

            if (massiv[i][j] > -12 or massiv[i][j] < 12) {
                counter1 += 1;
            }
        }
        cout << endl;
    }

    cout << endl << "   number of numbers which modules are between -12 and 12: " << counter1 << endl;



    // 4 exercise
    cout << "\n\n\nfourth exercise" << endl;

    const int height2 = 4;
    const int width2 = 5;
    int counter2 = 0;

    randmin = -20;
    randmax = 40;

    int masssiv[height2][width2];


    cout << endl << "   array:" << "\n\n";
    for (int i = 0; i < height2; i++)
    {
        for (int j = 0; j < width2; j++)
        {
            masssiv[i][j] = rand() % (randmax - randmin + 1) + randmin;;
            cout << right << setw(4) << masssiv[i][j] << " ";

            if (masssiv[i][j] > 0) {
                counter2 += 1;
            }
        }
        cout << endl;
    }

    cout << endl << "   number of numbers which are positive: " << counter2 << endl;



    // 5 exercise
    cout << "\n\n\nfifth exercise" << endl;

    const int height3 = 5;
    const int width3 = 4;
    int dobutok = 1;

    randmin = -20;
    randmax = 40;

    int masssrsiv[height3][width3];


    cout << endl << "   array:" << "\n\n";
    for (int i = 0; i < height3; i++)
    {
        for (int j = 0; j < width3; j++)
        {
            masssrsiv[i][j] = rand() % (randmax - randmin + 1) + randmin;;
            cout << right << setw(4) << masssrsiv[i][j] << " ";

            if (masssrsiv[i][j] > 0) {
                dobutok += 1;
            }
        }
        cout << endl;
    }

    cout << endl << "   dobutok of positive numbers: " << dobutok << endl;



















}