#include <iostream>
#include <conio.h>
using namespace std;

//struct film
//{
//    int id;
//    char name[40];
//    char director[40];
//    char genre[20];
//    float rating;
//    float price;
//};

//void showFilm(film& films)
//{
//    cout << "id: " << films.id << endl;
//    cout << "name: " << films.name << endl;
//    cout << "director: " << films.director << endl;
//    cout << "genre: " << films.genre << endl;
//    cout << "rating: " << films.rating << endl;
//    cout << "price: " << films.price << endl << endl;
//}
//
//void searchByName(char name[], film* films, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        if (strcmp(films[i].name, name) == 0)
//            showFilm(films[i]);
//    }
//}
//
//void searchByDirector(char director[], film* films, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        if (strcmp(films[i].director, director) == 0)
//            showFilm(films[i]);
//    }
//}
//
//void searchByGenre(char genre[], film* films, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        if (strcmp(films[i].genre, genre) == 0)
//            showFilm(films[i]);
//    }
//}
//
//void searchMostPopularByGenre(char genre[], film* films, int size)
//{
//    int max = 0;
//    int maxindex = 0;
//    for (int i = 0; i < size; i++)
//    {
//        if (strcmp(films[i].genre, genre) == 0)
//        {
//            if (films[i].rating > max) {
//                max = films[i].rating;
//                maxindex = i;
//            }
//        }
//    }
//}
//
//void changeFilm(int id, film* films, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        if (films[i].id == id)
//        {
//            showFilm(films[i]);
//            cout << endl << "enter new rating -> "; cin >> films[i].rating; cout << endl;
//            cout << "enter new price -> "; cin >> films[i].price; cout << endl;
//        }
//    }
//}

// PRACTICAL WORK
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

void changeBooksInfo(char bookname[], book *books, int size)
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








int main()
{
    // PRACTICAL WORK
    int choice;
    int choice2;

    // by...
    char bookname[50];

    const int size = 10;

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

    cout << "welcome to our library!" << endl;

    do
    {
        system("cls");
        cout << "1 - change books info" << endl;
        cout << "2 - show all books" << endl;
        cout << "3 - search book" << endl;
        cout << "----------------------> "; cin >> choice; cin.ignore();

        switch (choice)
        {
        case 1:
            cout << "enter books name -> "; cin.getline(bookname, 50);
            changeBooksInfo(bookname, books, size);
            break;
        case 2:
            showAllBooks(books, size);
            break;
        case 3:
            cout << "search by..." << endl;
            cout << "1 - author" << endl;
            cout << "2 - name" << endl;
            cout << "3 - publisher" << endl;
            cout << "4 - genre" << endl;
            cout << "-------------> "; cin >> choice2; cin.ignore();
            switch (choice2)
            {
            case 1:
                break;
            case 2:
                cout << "enter books name -> "; cin.getline(bookname, 50);
                searchBookByName(bookname, books, size);
                break;
            case 3:
                break;
            case 4:
                break;
            case 0:
                cout << "have a nice day(*/ω＼*)...";
                break;
            }
        }
        cout << "press any key..." << endl;
        _getch();

    } while (choice != 0);

    delete[]books;

    /*const int size = 5;
    film films[size] = {
        {1, "back to future", "tom kruise", "fantasy", 4.3, 2.99},
        {2, "Inception", "Christopher Nolan", "Sci-Fi", 8.8, 250.0},
        {3, "Interstellar", "Christopher Nolan", "Sci-Fi", 8.7, 300.0},
        {4, "The Godfather", "Francis Coppola", "Crime", 9.2, 200.0},
        {5, "Titanic", "James Cameron", "Romance", 7.9, 180.0}
    };

    int choice;
    char name[20];
    char director[20];
    char genre[20];
    int id;


    do
    {
        system("cls");
        cout << "1 - show all films\n2 - search by id\n3 - search by name\n4 - search by director\n5 - search by genre\n6 - the most popular\n7 - change films info\n\n0 - exit ->";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 0:
            cout << "have a nice evening!" << endl;
            break;
        default:
            cout << "choose valid choice!" << endl;
            break;
        case 1:
            for (int i = 0; i < size; i++)
            {
                showFilm(films[i]);
            }
            break;
        case 2:
            break;
        case 3:
            cout << "enter name of film -> "; cin >> name;
            searchByName(name, films, size);
            break;
        case 4:
            cout << "enter director of film -> "; cin >> name;
            searchByDirector(director, films, size);
            break;
        case 5:
            cout << "enter genre of film -> "; cin >> name;
            searchByGenre(genre, films, size);
            break;
        case 6:
            cout << "enter genre of film -> "; cin >> name;
            searchMostPopularByGenre(genre, films, size);
            break;
        case 7:
            cout << "enter id of film -> "; cin >> id;
            changeFilm(id, films, size);
            break;
        }
        cout << "press any key";
        _getch();
    } while (choice != 0);*/

    
}

















