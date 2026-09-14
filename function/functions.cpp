#include <iostream>
using namespace std;


// first exercise
void pryamokutnik(int height, int weight, char symbol)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < weight; j++)
        {
            cout << symbol << " ";
        }
        cout << endl;
    }
    cout << "\n\n";
}

// second exercise
void factorial(int number)
{
    int result = 1;
    for (int i = 0; i < number; i++)
    {
        result = number * i;
    }
    cout << "result - " << result << "\n\n";
}

// third exercise
void prostenumber(int number)
{
    if (number % 1 == number or number % number == 1)
    {
        cout << "number is proste!\n\n";
    }
    else
    {
        cout << "number isnt proste\n\n";
    }
}

int main()
{
    cout << "first exercise" << "\n\n";
    pryamokutnik(5, 7, '*');

    cout << "second exercise" << "\n\n";
    factorial(5);

    cout << "third exercise" << "\n\n";
    prostenumber(4);

}