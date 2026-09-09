#include <iostream>
using namespace std;

int main()
{
    ///*int train[3];

    //train[0] = 12;
    //train[1] = 0;
    //train[2] = 25;

    //cout << "number of passengers in first carriage -> " << train[0] << endl;
    //cout << "number of passengers in second carriage -> " << train[1] << endl;
    //cout << "number of passengers in third carriage -> " << train[2] << endl;

    //const int size = 12;

    //int marks[size];

    //marks[0] = 11;
    //marks[1] = 12;
    //marks[2] = 5;
    //marks[3] = 2;
    //marks[4] = 12;
    //marks[5] = 4;
    //marks[6] = 7;
    //marks[7] = 11;
    //marks[8] = 2;
    //marks[9] = 9;
    //marks[10] = 10;
    //marks[11] = 12;

    //int arrl[5];

    //const int size = 10;
    //double arr1[size];*/

    //const int size = 10;
    //
    //int arr1[size] = {1, 2, 3, 4, 5, 6, 7, 8 ,9, 10};

    //for (int i = 0; i < size; i++) {
    //    cout << arr1[i] << " ";
    //}

    //int arr2[size] = {};
    //for (int i = 0; i < size; i++) {
    //    cout << arr2[i] << " ";
    //}

    //int arr3[size] = {1, 2, 3};
    //for (int i = 0; i < size; i++) {
    //    cout << arr3[i] << " ";
    //}

    //int arr4[size];
    //for (int i = 0; i < size; i++) {
    //    cout << "enter number -> ";
    //    cin >> arr4[i];

    //    cout << arr4[i] << " ";
    //}
    //cout << endl;

    /*const int size = 10;

    int numbers[size] = {1, -2, 4, 63, -31, 43, -43, 45, 51, -91};
    
    int min = numbers[0];

    int max = numbers[0];

    int summa = 0;
    for (int i = 0; i < size; i++) {
        if (numbers[i] < min) {
            summa += numbers[i];
            min = numbers[i];
        }
        if (numbers[i] > max) {
            summa += numbers[i];
            max = numbers[i];
        }
    }

    cout << "all negative numbers plused -> " << summa << endl;
    cout << "min number -> " << min << endl;
    cout << "max number -> " << max << endl;*/

    // 1 exercise
    cout << "first exercise" << endl;

    const int size10 = 10;


    int numbersplus[size10] = {1, 6, 76, 23, 65, 34, 87, 3, 23, 78};
    
    int suma = 0;

    for (int i = 0; i < size10; i++) {
        suma += numbersplus[i];
    }

    cout << "numbers -> ";
    for (int i = 0; i < size10; i++) {
        cout << numbersplus[i] << " ";
    }

    cout << endl << "suma of all numbers -> " << suma << endl;

    // 2 exercise
    cout << endl << "second exercise" << endl;

    const int size7 = 7;

    int numbers[size7] = {67, -45, 32, -87, 345, -334, 21};
    
    cout << "numbers -> ";
    for (int i = 0; i < size7; i++) {
        cout << numbers[i] << " ";
    }

    int sumamin = 0;
    int sumamax = 0;

    int minmax = 0;

    for (int i = 0; i < size7; i++) {
        if (numbers[i] < minmax) {
            sumamin += numbers[i];
        }
        else if (numbers[i] > minmax) {
            sumamax += numbers[i];
        }
    }

    cout << endl << "suma of numbers that are lower than 0 -> " << sumamin << endl << "suma of numbers that are higher than 0 -> " << sumamax << endl;

    // 3 exercise
    cout << endl << "third exercise" << endl;

    long numbers7[size7] = {54, 67, 543, 65, 22, 88, 48};
    long summmmma = 0;

    for (int i = 0; i < size7; i++) {
        if (numbers7[i] % 2 == 0) {
            summmmma += numbers7[i];
        }
    }

    cout << "numbers -> ";
    for (int i = 0; i < size7; i++) {
        cout << numbers7[i] << " ";
    }

    cout << endl << "suma parnih numbers -> " << summmmma << endl;

    // 4 exercise
    cout << endl << "fourth exercise" << endl;
    
    int counter = 1;
    int vidpovid = 2;
    int masiv[size10] = {};
    int equalz = 1;

    for (int i = 0; i < size10; i++) {
        equalz = 1;
        for (int j = 0; j < i; j++) {
            equalz *= vidpovid ;
        }

        masiv[i] = equalz;
    }

    cout << "numbers -> ";
    for (int i = 0; i < size10; i++) {
        cout << masiv[i] << " ";
    }

    cout << endl;

    cout << "numbers reversed -> ";
    for (int i = size10 - 1; i >= 0; i--) {
        cout << masiv[i] << " ";
    }


}
