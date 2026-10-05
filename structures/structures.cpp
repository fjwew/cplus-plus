#include <iostream>
using namespace std;

//struct myFirstStruct
//{
//    int day;
//    int month;
//    int year;
//    char monthName[15];
//};
//
//struct worker
//{
//    char name[20];
//    char surnname[20];
//    char position[20];
//    double salary;
//    myFirstStruct birthday;
//    myFirstStruct hiredate;
//};
//
//worker inputWorker(worker worker)
//{
//    cout << "enter name -> "; cin >> worker.name;
//    cout << "enter surname -> "; cin >> worker.surnname;
//    cout << "enter position -> "; cin >> worker.position;
//    cout << "enter salary -> "; cin >> worker.salary;
//    cout << "enter birhdate day -> "; cin >> worker.birthday.day;
//    cout << "enter birhdate month -> "; cin >> worker.birthday.month;
//    cout << "enter birhdate year -> "; cin >> worker.birthday.year;
//    cout << "enter hiredate day -> "; cin >> worker.hiredate.day;
//    cout << "enter hiredate month -> "; cin >> worker.hiredate.month;
//    cout << "enter hiredate year -> "; cin >> worker.hiredate.year;
//    return worker;
//}
//
//void showWorker(worker worker)
//{
//    cout << "name - " << worker.name << endl;
//    cout << "surname - " << worker.surnname << endl;
//    cout << "position - " << worker.position << endl;
//    cout << "salary - " << worker.salary << endl;
//    cout << "birthdate - " << worker.birthday.day << "." << worker.birthday.month << "." << worker.birthday.month << "hiredate - " << worker.hiredate.day << "." << worker.hiredate.month << "." << worker.hiredate.year << "." << endl;
//}

struct washingMachine
{
    char producer[50];
    char color[10];
    double width;
    double height;
    int power;
    int speed;
    int tempreture;
};

struct iRon
{
    char producer[50];
    char color[10];
    int minTempreture;
    int maxTempreture;
    bool para;
    int power;
};

struct boilEr
{
    char producer[50];
    char color[10];
    int power;
    double obsyag;
    int tempreture;
};





void create_showWashingMachine()
{
    washingMachine machine;

    cout << "enter producer of washing machine(char) -> "; cin >> machine.producer; cout << "enter color of washing machine(char) -> "; cin >> machine.color; cout << "enter width of washing machine(double) -> "; cin >> machine.width; cout << "enter height of washing machine(double) -> "; cin >> machine.height; cout << "enter power of washing machine(int) -> "; cin >> machine.power; cout << "enter speed of washing machine(int) -> ";cin >> machine.speed; cout << "enter tempreture of washing machine(int) -> "; cin >> machine.tempreture;

    cout << endl << "producer of washing machine - " << machine.producer << endl;
    cout << "color of washing machine - " << machine.color << endl;
    cout << "width of washing machine - " << machine.width << endl;
    cout << "height of washing machine - " << machine.height << endl;
    cout << "power of washing machine - " << machine.power << endl;
    cout << "speed of washing machine - " << machine.speed << endl;
    cout << "tempreture of washing machine - " << machine.tempreture << endl;
}

void create_showIron()
{
    iRon iron;

    cout << "enter producer of iron(char) -> "; cin >> iron.producer; cout << "enter color of iron(char) -> "; cin >> iron.color; cout << "enter minimal tempreture of iron(int) -> "; cin >> iron.minTempreture; cout << "enter max tempreture of iron(int) -> "; cin >> iron.maxTempreture; cout << "enter podacha pari of iron(bool) -> "; cin >> iron.para; cout << "enter power if iron(int) -> ";cin >> iron.power;

    cout << endl << endl << "producer of iron - " << iron.producer << endl;
    cout << "color of iron - " << iron.color << endl;
    cout << "minimal tempreture of iron - " << iron.minTempreture << endl;
    cout << "max tempreture of iron - " << iron.maxTempreture << endl;
    cout << "podacha pari of iron - " << iron.para << endl;
    cout << "power of iron - " << iron.power << endl;
}

void create_showBoiler()
{
    boilEr boiler;

    cout << "enter producer of boiler(char) -> "; cin >> boiler.producer;
    cout << "enter color of boiler(char) -> "; cin >> boiler.color;
    cout << "enter power of boiler(int) -> "; cin >> boiler.power;
    cout << "enter obsyag of boiler(int) -> "; cin >> boiler.obsyag;
    cout << "enter tempreture of boiler(int) -> "; cin >> boiler.tempreture;

    cout << endl << endl << "producer of boiler - " << boiler.producer << endl;
    cout << "color of boiler - " << boiler.color << endl;
    cout << "power of boiler - " << boiler.power << endl;
    cout << "obsyag of boiler - " << boiler.obsyag << endl;
    cout << "tempreture of boiler - " << boiler.tempreture << endl;

}

struct cAr
{
    char color[10];
    char mod3l[50];
    char number0[50];
    int number1;
    char number2[50];
};

int cAAr()
{
    cAr car;
    cout << "enter color of car(char) -> "; cin >> car.color;
    cout << "enter model of car(char) -> "; cin >> car.mod3l;
    
    cout << "choose in which method you will enter cars number: 1 - only 5 numbers, 2 - word(max 50 symbols) 3 - words and numbers(max 50 symbols) -> "; int choice; cin >> choice;

    if (choice == 1)
    {
        cout << "enter number of car(int) -> "; cin >> car.number1;
    }
    else if (choice == 2)
    {
        cout << "enter number of car(char) -> "; cin >> car.number2;
    }
    else if (choice == 3)
    {
        cout << "enter first letters of car(char) -> "; cin >> car.number0;
        cout << "enter number of car(int) -> "; cin >> car.number1;
        cout << "enter last letters of car(char) -> "; cin >> car.number2;
    }
    else
    {
        cout << "choose in which method you will enter cars number: 1 - only 5 numbers, 2 - word -> ";
        cin >> choice;
    }

    return choice;
}

void showCarNumber(cAr car, int select)
{
    
}




int main()
{
    // PRACTICAL WORK

    // first exercise
    /*cout << "first exercise" << endl;
    create_showWashingMachine();*/

    // second exercise
    

    // third exercise
    /*cout << endl << "third exercise" << endl;
    create_showBoiler();*/

    // fourth exercise
    cout << endl << "fourth exercise" << endl;

    int choicik = 0;

    choicik = cAAr();

    if (select == 1)
        cout << "cars number" << car.number1;
    else if (select == 2)
        cout << "cars number" << car.number2;
    else if (select == 3)
        cout << "cars number" << car.number0 << " " << car.number1 << " " << car.number2;



    /*int number = 100;
    myFirstStruct birthdate = { 15, 05, 2007, "May"};
    
    cout << "**my birthday**" << endl;
    cout << "day - " << birthdate.day << endl;
    cout << "month - " << birthdate.month << endl;
    cout << "year - " << birthdate.year << endl;
    cout << "month name - " << birthdate.monthName << endl << endl;;

    myFirstStruct friendsbirthdate;

    cout << "enter day -> "; cin >> friendsbirthdate.day;
    cout << "enter month -> "; cin >> friendsbirthdate.month;
    cout << "enter year -> "; cin >> friendsbirthdate.year;
    cout << "enter months name -> "; cin >> friendsbirthdate.monthName;

    cout << endl << "**my friends birthday**" << endl;
    cout << "day - " << birthdate.day << endl;
    cout << "month - " << birthdate.month << endl;
    cout << "year - " << birthdate.year << endl;
    cout << "month name - " << birthdate.monthName << endl << endl;

    worker wOrker{ "kiril", "kortuk", "programmer", 152000, {12, 9, 2003}, { 2, 4, 2023 } };
    
    worker newWorker = {};
    newWorker = inputWorker(newWorker);
    showWorker(newWorker);


    int a;
    char b;
    double c;
    int* p;

    cout << "size of int " << a << " " << sizeof(int) << endl;
    cout << "size of char " << b << " " << sizeof(int) << endl;
    cout << "size of double " << c << " " << sizeof(int) << endl;
    cout << "size of int* " << p << " " << sizeof(int) << endl;*/
    

    /*int s = 0;

    for (int i = 1; i <= 4; ++i)
        s += i;*/


    /*cout << s;*/

    /*int a[2] = { 1, 2 };*/






}

