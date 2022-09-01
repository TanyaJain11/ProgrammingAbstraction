#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
 
// Bookshop Class
class bookshope {
public:
    void control();
    void book_add();
    void book_show();
    void book_check();
    void updation_book();
    void book_delet();
};
 
// Function to display the menus
void bookshope::control()
{
    system("cls");
    cout << "\n\n\t\t\t\tCONTROL  PANEL";
    cout << "\n\n1. ADDITION OF BOOK";
    cout << "\n2.  BOOKS DISPLAY";
    cout << "\n3. PARTICULAR BOOK CHECKING";
    cout << "\n4. UPDATION OF BOOK";
    cout << "\n5. DELETION OF BOOK";
    cout << "\n6. EXIT";
}
 
//Addition of book
void bookshope::book_add()
{
    system("cls");
    fstream file;
    int num_copy;
    string d_name, c_name, d_id;
    cout << "\n\n\t\t\t\tADDITION OF BOOKS";
    cout << "\n\nBook_ID : ";
    cin >> d_id;
    cout << "\nBook_Name : ";
    cin >> d_name;
    cout << "\nAuthor_Name : ";
    cin >> c_name;
    cout << "\nBooks_Number : ";
    cin >> num_copy;
 

    file.open("D:// book.txt",
              ios::out | ios::app);
    file << " " << d_id << " "
         << d_name << " " << c_name
         << " " << num_copy << "\n";
    file.close();
}
 

void bookshope::book_show()
{
    system("cls");
    fstream file;
    int num_copy;
    string d_name, d_id, c_name;
    cout << "\n\n\t\t\t\t\tAll BOOKS";
 
   
    file.open("D:// book.txt", ios::in);
    if (!file)
        cout << "\n\nFile Opening Error!";
    else {
 
        cout << "\n\n\nBook_ID\t\tBook"
             << "\t\tAuthor\t\tNo._of "
                "Books\n\n";
        file >> d_id >> d_name;
        file >> c_name >> num_copy;
 
    
        while (!file.eof()) {
 
            cout << "  " << d_id
                 << "\t\t" << d_name
                 << "\t\t" << c_name
                 << "\t\t" << num_copy
                 << "\n\n";
            file >> d_id >> d_name;
            file >> c_name >> num_copy;
        }
 
        system("pause");
 
        // file closed
        file.close();
    }
}
 
//CHECKING book
void bookshope::book_check()
{
    system("cls");
    fstream file;
    int num_copy, count = 0;
    string d_id, d_name, c_name, d_idd;
 
    cout << "\n\n\t\t\t\tCheck "
         << "Particularly a Book";
 

    file.open("D:// book.txt", ios::in);
    if (!file)
        cout << "\n\nError in Opening File!";
    else {
 
        cout << "\n\nBook_ID : ";
        cin >> d_idd;
        file >> d_id >> d_name;
        file >> c_name >> num_copy;
 
        while (!file.eof()) {
 
            if (d_idd == d_id) {
 
                system("cls");
                cout << "\n\n\t\t\t\t"
                     << " Particular Book Check";
                cout << "\n\nBook_ID : "
                     << d_id;
                cout << "\nName : "
                     << d_name;
                cout << "\nAuthor : "
                     << c_name;
                cout << "\nNo. of Books : "
                     << num_copy;
                cout << endl
                     << endl;
                count++;
                break;
            }
            file >> d_id >> d_name;
            file >> c_name >> num_copy;
        }
        system("pause");
        file.close();
        if (count == 0)
            cout << "\n\nBook_ID Not"
                 << " AVAILABLE...";
    }
}
 
//UPDATION OF BOOK
void bookshope::updation_book()
{
    system("cls");
    fstream file, file1;
    int num_copy, num_co, count = 0;
    string d_name, d_na, c_name;
    string c_na, d_idd, d_id;
 
    cout << "\n\n\t\t\t\t BOOK UPDATED";
    file1.open("D:// book1.txt",
               ios::app | ios::out);
    file.open("D:// book.txt", ios::in);
 
    if (!file)
        cout << "\n\nError in OPENING FILE!";
    else {
 
        cout << "\n\nBook_ID : ";
        cin >> d_id;
        file >> d_idd >> d_name;
        file >> c_name >> num_copy;
 
    
        while (!file.eof()) {
            if (d_id == d_idd) {
                system("cls");
                cout << "\t\t\t\t"
                     << "BOOK UPDATED";
                cout << "\n\nN_Book Nam : ";
                cin >> d_na;
                cout << "\nA_Nam : ";
                cin >> c_na;
                cout << "\nBooks_NUMBER: ";
                cin >> num_co;
                file1 << " " << d_id << " "
                      << d_na << " "
                      << c_na << " " << num_co
                      << "\n\n";
                count++;
            }
            else
                file1 << " " << d_idd
                      << " " << d_name
                      << " " << c_name
                      << " " << num_copy
                      << "\n\n";
            file >> d_idd >> d_name;
            file >> c_name >> num_copy;
        }
        if (count == 0)
            cout << "\n\nBook_ID"
                 << " Not AVAILABLE...";
    }
    cout << endl;
    system("pause");
 

    file.close();
    file1.close();
    remove("D:// book.txt");
    rename("D:// book1.txt",
           "D:// book.txt");
}
 
// DELET BOOK
void bookshope::book_delet()
{
    system("cls");
    fstream file, file1;
    int num_copy, count = 0;
    string d_id, d_idd, d_name, c_name;
    cout << "\n\n\t\t\t\t Book DELET";
 

    file1.open("D:// book1.txt",
               ios::app | ios::out);
    file.open("D:// book.txt",
              ios::in);
 
    if (!file)
        cout << "\n\nError IN OPENING FILE...";
    else {
 
        cout << "\n\nBook_ID : ";
        cin >> d_id;
        file >> d_idd >> d_name;
        file >> c_name >> num_copy;
        while (!file.eof()) {
 
            if (d_id == d_idd) {
 
                system("cls");
                cout << "\n\n\t\t\t\t"
                     << " Book DELETED";
                cout << "\n\n Deleted "
                        "BOOK...\n\n";
                count++;
            }
            else
                file1 << " " << d_idd
                      << " " << d_name
                      << " " << c_name
                      << " " << num_copy
                      << "\n\n";
            file >> d_idd >> d_name;
            file >> c_name >> num_copy;
        }
        if (count == 0)
            cout << "\n\nBook_ID "
                 << "Not AVAILABLE...";
    }
    system("pause");
 

    file.close();
    file1.close();
    remove("D:// book.txt");
    rename("D:// book1.txt",
           "D:// book.txt");
}
 
// RECORD OF BOOK SHOP
void ShopRecord()
{
    int choice;
    char x;
    bookshope b;
 
    while (1) {
 
        b.control();
        cout << "\n\nyour choice : ";
        cin >> choice;
        switch (choice) {
 
        case 1:
            do {
 
                b.book_add();
                cout << "\n\nWant a oook"
                     << " another book? "
                        "(y/n) : ";
                cin >> x;
            } while (x == 'y');
            break;
 
        case 2:
            b.book_show();
            break;
 
        case 3:
            b.book_check();
            break;
       // case 4:
          //  b.updataion_book();
         //   break;
 
        case 5:
            b.book_delet();
            break;
 
        case 6:
            exit(0);
            break;
 
        default:
            cout << "\n\nINVALID CHOICE\n";
        }
    }
}
 

int main()
{
    
    ShopRecord();
 
    return 0;
}