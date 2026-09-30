#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void setPos(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}




int main()
{
    //cout << "helloooooo!!!!" << endl;

    //const int wordsize = 6;
    //char word[wordsize] = { 'w', 'o', 'r', 'd', '!', '\0'};

    //for (int i = 0; i < wordsize; i++)
    //{
    //    cout << word[i];
    //}
    //cout << endl;

    //// c-style

    //char mystringi[] = "stringi";
    //cout << mystringi << " has " << sizeof(mystringi) << " characters" << endl;

    //for (int i = 0; i < sizeof(mystringi); i++)
    //{
    //    cout << "letter " << mystringi[i] << " has code " << static_cast<int>(mystringi[i]) << endl;
    //}

    //cout << mystringi << endl;
    //mystringi[1] = 'p';
    //cout << mystringi << endl;

    ////char mynameis[255];
    ////cout << "enter name -> ";
    ////cin.getline(mynameis, 255);

    //char text[] = "print this!";
    //char copy[50];
    //strcpy_s(copy, text);
    //cout << text << endl;
    //cout << copy << endl;

    //cout << "sizeof " << text << sizeof(text) << endl;
    //cout << "strlen " << text << strlen(copy) << endl;

    //cout << "copy arrays:" << endl;
    //char arr2[255];
    //strcpy_s(arr2, text);
    //cout << "copy: " << arr2 << endl;
    //arr2[4] = '\0';

    //cout << "copy: " << arr2 << endl;
    //for (int i = 0; i < 255; i++)
    //{
    //    cout << arr2[i];
    //}

    //char anyword[] = "White111";
    //// letter or number
    //cout << anyword[0] << " -> " << isalnum(anyword[0]) << endl;
    //cout << anyword[5] << " -> " << isalnum(anyword[5]) << endl;

    //// is number
    //cout << anyword[0] << " -> " << (bool)isdigit(anyword[0]) << endl;
    //cout << anyword[5] << " -> " << (bool)isdigit(anyword[0]) << endl;
    //
    //// is big number
    //cout << anyword[0] << " -> " << (bool)isupper(anyword[0]) << endl;
    //cout << anyword[5] << " -> " << (bool)isupper(anyword[5]) << endl;

    //// is small letter
    //cout << anyword[0] << " -> " << (bool)islower(anyword[0]) << endl;
    //cout << anyword[5] << " -> " << (bool)islower(anyword[5]) << endl;

    //cout << anyword[0] << " -> " << (char)tolower(anyword[0]) << endl;
    //cout << anyword[5] << " -> " << (char)tolower(anyword[5]) << endl;

    //cout << anyword[0] << " -> " << (char)toupper(anyword[0]) << endl;
    //cout << anyword[5] << " -> " << (char)toupper(anyword[5]) << endl;

    //double x = -5, y = 2.7, z = 3.14;
    //cout << setw(5) << x << endl;
    //cout << setw(5) << y << endl;
    //cout << setw(5) << z << endl;

    //setColor(5);
    //cout << "hello" << endl;
    //
    //setColor(7);

    //Sleep(3000);
    //system("cls");
   
    for (int i = 0; i < 255; i++)
    {
        cout << i << " -> " << (char)i << endl;
    }

    const int startrowsize = 50;
    int endrowsize;
    /*
    cout << "first exercise" << endl;

    char slovechki[startrowsize];

    int countera = 0, countero = 0;

    cout << "enter letters -> ";
    cin.getline(slovechki, startrowsize);
    endrowsize = strlen(slovechki);


    for (int i = 0; i < endrowsize; i++)
    {
        if (slovechki[i] == 'a' or slovechki[i] == 'A')
            countera++;
        else if (slovechki[i] == 'o' or slovechki[i] == 'O')
            countero++;
    }

    if (countera > countero)
        cout << endl << "your char has more 'a' than 'o'" << endl;
    else if (countero > countera)
        cout << endl << "your char has more 'o' than 'a'" << endl;
    else if (countero == countera and countero != 0)
        cout << endl << "your char has the same amount of 'a' and 'o'" << endl;
    else
        cout << endl << "your char has no 'o' and 'a'" << endl;

    cout << "second exercise" << endl;
    */
    int counterlatin = 0, counternumbers = 0, counterspaces = 0;

    char abc[startrowsize];

    cout << "enter letters and numbers -> ";
    cin.getline(abc , startrowsize);
    endrowsize = strlen(abc);

    for (int i = 0; i < endrowsize; i++)
    {
        if (abc[i] >= (char)65 and abc[i] <= (char)90 or abc[i] >= (char)97 and abc[i] <= (char)122)
            counterlatin++;
        if (isdigit(abc[i]))
            counternumbers++;
        if (isspace(abc[i]))
            counterspaces++;
    }

    cout << endl << "your char has " << counterlatin << " latin letters" << endl;
    cout << "your char has " << counternumbers << " numbers" << endl;
    cout << "your char has " << counterspaces << " spaces" << endl;

    cout << endl << "third exercise" << endl;

    char ryadochok[startrowsize];
    cout << "enter row -> ";
    cin.getline(ryadochok, startrowsize);
    endrowsize = strlen(ryadochok);

    for (int i = 0; i < endrowsize; i++)
    {
        if (isupper(ryadochok[i]))
            ryadochok[i] = tolower(ryadochok[i]);
        else if (islower(ryadochok[i]))
            ryadochok[i] = toupper(ryadochok[i]);
    }

    cout << endl << ryadochok << endl;

    cout << "\nfourth exercise" << endl;
    char ryadok4[startrowsize];
    cout << "enter something -> ";
    cin.getline(ryadok4, startrowsize);

    int counter = 0;
    int i = 0;

    while(true)
    {
        if (ryadok4[i] != '\0')
            counter++;

        i++;
        if (ryadok4[i] == '\0')
            break;

    }

    cout << "number of numbers in your text - " << counter << endl;



}


