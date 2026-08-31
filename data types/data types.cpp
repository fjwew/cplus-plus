#include <iostream>
using namespace std;

// правила створення змінних
    // шаблон змінної:
    // {type} {name} = {value}
    // 
    // цифра не може бути на початку регістру 
    // давати значення не обов'язково

int main()
{
    int age = 15;
    int Age = 55;
    int age2 = 14;
    // int 2age = 15;
    int ageofman = 45;
    int age_of_man = 33;
    int ageoOfMan = 78;
    //int int = 77;
    //INT a = 44;
    float pi = 3.14;

    cout << age;
    cout << "age: " << age << "age of man: " << ageofman << endl;
    cout << pi << endl;


    //// count hours in 2000 years
    //int hoursin2000year; //empty
    //int dayin2000year = 366;
    //int hoursinday = 24;
    //hoursin2000year = dayin2000year * hoursinday;

    //cout << "hours in 2000 year -> " << hoursin2000year;

    //float discount = 0.05;
    //int count = 10;
    //float costprice = 35.99;

    //float price = count * costprice - discount * count * costprice;

    //cout << "you need to pay -> " << price << endl;


    //int a;
    //cout << "enter number -> ";
    //cin >> a;
    //cout << "a = " << a << endl;

    // diagonal cm

    int tvdi = 42;
    float dcm = 2.54;

    float tvdcm = tvdi * dcm;

    cout << "tv diagonal in cm -> " << tvdcm << endl;
    
    // hamster combat
    float K;

    cout << "amount of food a day(in grams) -> ";
    cin >> K;

    float ginkgaday = K / 1000;

    float amountoffoodtobuy;
    cout << "to buy kg of food for month -> " << ginkgaday * 30;







}