#include <iostream>
#include <fstream>
using namespace std;

#pragma region thirdExercise
struct book
{
	char name[50];
	char author[50];
	char publisher[50];
	char genre[20];
	int year;
	float price;
};

void showBook(book book)
{
	cout << "name: " << book.name << endl;
	cout << "author: " << book.author << endl;
	cout << "publisher: " << book.publisher << endl;
	cout << "genre: " << book.genre << endl;
	cout << "year: " << book.year << endl;
	cout << "price: " << book.price << endl << endl;
}

void changeBooksInfo(char bookname[], book* books, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(books[i].name, bookname) == 0)
		{
			showBook(books[i]);

			cout << "name -> "; cin >> books[i].name; cout << endl;
			cout << "author -> "; cin >> books[i].author; cout << endl;
			cout << "publisher -> "; cin >> books[i].publisher; cout << endl;
			cout << "genre -> "; cin >> books[i].genre; cout << endl;
			cout << "year -> "; cin >> books[i].year; cout << endl;
			cout << "price -> "; cin >> books[i].price; cout << endl;

			cout << endl;
			break;
		}
	}
}

void showAllBooks(book* books, int size)
{
	for (int i = 0; i < size; i++)
	{
		showBook(books[i]);
	}
}

void searchBookByName(char bookname[], book* books, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(books[i].name, bookname) == 0)
		{
			showBook(books[i]);
			cout << endl;
			break;
		}
	}
}

#pragma endregion


int main()
{
	// open file
	// read from file
	// write to file
	// close file

	const int size = 10;
	char buffer[200*size];

	#pragma region firstExercise
	ofstream out; // save to file

	out.open("text.txt", ios_base::app);
	if (out.is_open())
	{
		string info;
		for (int i = 1; i < 6; i++)
		{
			cout << "enter " << i << " line: ";
			cin >> info;
			out << info << endl;
		}
		out.close();
	}
	else
		cout << "could not open the file!!" << endl;
	#pragma endregion

	#pragma region secondExercise
	ifstream in("text.txt", ios_base::in); // read from files
	
	if (in.is_open())
	{
		while (!in.eof())
		{
			in.getline(buffer, 200);
			cout << buffer << endl;
		}
		in.close();
	}
	else
		cout << "could not open the file!!" << endl;

	#pragma endregion

	#pragma region thirdExercise

	book* books = new book[size]{
		{"The Hobbit", "J.R.R. Tolkien", "HarperCollins", "Fantasy", 1937, 350.0},
		{"1984", "George Orwell", "Penguin Books", "Dystopia", 1949, 280.0},
		{"Harry Potter", "J.K. Rowling", "Bloomsbury", "Fantasy", 1997, 400.0},
		{"The Alchemist", "Paulo Coelho", "HarperOne", "Adventure", 1988, 250.0},
		{"Dracula", "Bram Stoker", "Archibald Constable", "Horror", 1897, 320.0},
		{"The Great Gatsby", "F. Scott Fitzgerald", "Scribner", "Drama", 1925, 300.0},
		{"The Little Prince", "Antoine de Saint-Exupery", "Gallimard", "Fable", 1943, 220.0},
		{"Pride and Prejudice", "Jane Austen", "T. Egerton", "Romance", 1813, 270.0},
		{"The Da Vinci Code", "Dan Brown", "Doubleday", "Thriller", 2003, 330.0},
		{"The Catcher in the Rye", "J.D. Salinger", "Little, Brown", "Drama", 1951, 290.0}
	};

	ofstream inp("books.txt", ios_base::out);

	if (inp.is_open())
	{
		for (int i = 0; i < size; i++)
		{
			inp << "book " << i + 1 << endl;
			inp << books[i].name << endl;
			inp << books[i].author << endl;
			inp << books[i].publisher << endl;
			inp << books[i].genre << endl;
			inp << books[i].year << endl;
			inp << books[i].price << endl << endl;
		}
		inp.close();
	}
	else
		cout << "could not open the file!!" << endl;

	#pragma endregion

	#pragma region fourthExercise
		
	ifstream intt("books.txt", ios_base::in);
	if (intt.is_open())
	{
		while (!intt.eof())
		{
			intt.getline(buffer, 200);
			cout << buffer << endl;
		}
		intt.close();
	}
	else
		cout << "could not open the file!!" << endl;

	#pragma endregion

}

