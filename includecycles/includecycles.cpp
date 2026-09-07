#include <iostream>
using namespace std;


int main()
{
    // 1 exercise
    // a

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if (i == j or j > i) {
                cout << "= ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;

    // b

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if (i == j or j < i) {
                cout << "= ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;

    // u

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if (i + j == 15 - 1 or i + j < 15 - 1) {
                cout << "= ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
    
    // k

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if (i + j == 15 - 1 or i + j > 15 - 1) {
                cout << "= ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;

    // v

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if (i <= j and i + j <= 15 - 1) {
                cout << "= ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // g

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if (i >= j and i + j >= 15 - 1) {
                cout << "= ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;

    // sh

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if (i > j and i + j < 15 - 1) {
                cout << "= ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // z

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if (i < j and i + j > 15 - 1) {
                cout << "= ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // e

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if (i >= j and i + j <= 15 - 1 or i <= j and i + j >= 15 - 1) {
                cout << "= ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // d

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if (i <= j and i + j <= 15 - 1 or i >= j and i + j >= 15 - 1) {
                cout << "= ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // dod vpravi 1

    // 1
    /*int n;

    cout << "введи n одиницю -> ";
    cin >> n;



    cout << "n -> " << */









}












