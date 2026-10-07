#include <iostream>
#include <fstream>

using namespace std;

const char* file = "D://firstexercise.txt";

//struct human
//{
//private:
//    char name[50];
//    char surname[50];
//    int age;
//
//public:
//    void showHuman()
//    {
//        cout << "name - " << name << "\nsurname - " << surname << "\nage - " << age << endl << endl;
//    }
//
//    void fillHuman()
//    {
//        cout << "enter name - "; cin >> name; cout << "enter surname - "; cin >> surname; cout << "enter age - "; cin >> age; cout << endl;
//    }
//
//    void copyHuman(human h)
//    {
//        strcpy_s(name, h.name);
//        strcpy_s(surname, h.surname);
//        age = h.age;
//    }
//    void saveToFile()
//    {
//        ofstream out(file, ios_base::app); // save to file
//        out << "name - ";
//        out << name << ",";
//        out << " surname - ";
//        out << surname << ",";
//        out << " age - ";
//        out << age << endl;
//        out.close();
//    }
//    void fillFromFile(char* cname, char* csurname, int cage)
//    {
//        strcpy_s(name, cname);
//        strcpy_s(surname, csurname);
//        age = cage;
//    }
//};
//
//void readFromFile(human*& arr, int& size)
//{
//    ifstream in(file, ios_base::in);
//    char cname[250], csurname[250], cage[250];
//    while (!in.eof())
//    {
//        in.getline(cname, 250, ", ");
//        in.getline(csurname, 250, ", ");
//        in.getline(cage, 250, ", ");
//
//
//    }
//}
//
//
//int menu()
//{
//    int choice;
//    cout << "1 - add people" << endl;
//    cout << "2 - show people" << endl;
//    cout << "0 - exit" << endl;
//    cin >> choice;
//    return choice;
//
//}
//
//void addNewHuman(human *& arr, int& size)
//{
//    human* temp = new human[size + 1];
//    for (int i = 0; i < size; i++)
//    {
//        temp[i].copyHuman(arr[i]);
//    }
//    temp[size].fillHuman();
//    delete[]arr;
//    arr = temp;
//    size++;
//    arr[size - 1].saveToFile();
//}
//
//enum MENU { EXIT, ADD, SHOW};





//void showPeople(human* h, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        h[i].showHuman();
//    }
//}


// exercise 1
void ryadok5()
{
	char* temp = new char[50];

	ofstream out(file, ios_base::app);
	if (out.is_open())
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "enter " << i+1 << " line -> "; cin.getline(temp, 50);
			out << i+1 << " - " << temp << endl;
		}
	}
	out.close();
	delete[]temp;
}

// exercise 2
void readRyadok5()
{
	ifstream in(file, ios_base::in);
	if (in.is_open())
	{
		char charctr;

		while (file.get(chrctr))
		{

		}
	}
}


int main()
{
	// PRACTICAL WORK
	// first exercise
	ryadok5();
	cout << endl;

	// second exercise



   ///*human humanchik = {};

   // humanchik.fillHuman();
   // humanchik.showHuman();*/

   // ofstream out; // save to file
   // out.open("test.txt");


   // ifstream in; // read from file

   // int size = 0;
   // human* people = new human[size];

   // bool isExit = false;

   // MENU e;

   // while(!isExit)
   //     switch (menu())
   //     {
   //     case EXIT: isExit = true; break;
   //     case ADD: addNewHuman(people, size); break;
   //     case SHOW: showPeople(people, size); break;
   //     default:
   //         break;
   //     }

   // delete[]people;
}

