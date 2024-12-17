// Create a student management system where:
// Each student has an ID, name, and marks.
// Data is stored in a file.
// Provide options to add, display, and search for students

#include <iostream>
#include <fstream>
#include <cstring> // For strcpy
using namespace std;

struct Student
{
    int id;
    char name[40];
    int marks;
};

void addStudent()
{
    Student s1;
    cout << "Enter student id: ";
    cin >> s1.id;

    cout << "Enter student name";
    cin.ignore();
    cin.getline(s1.name, 40);

    cout << "Enter Student marks";
    cin >> s1.marks;

    ofstream file("students.dat", ios::binary | ios::app);
    if (file.is_open())
    {
        file.write((char *)&s1, sizeof(s1));
        cout << "data entered successfully";
        file.close();
    }
    else
    {
        cout << "error loading file";
    }
}

void displayStudents()
{
    Student s;

    ifstream file("students.dat", ios::binary);

    if (file.is_open())
    {
        

        while(file.read((char *)&s, sizeof(s))){
            cout << "---------------END---------------" << endl<<endl;
        cout << "Id :" << s.id << "\nName:" << s.name << "\nMarks:" << s.marks << endl;
        cout << "---------------END---------------" << endl<<endl;
        }
        file.close();
    }
    else
    {
        cout << "error loading file";
    }
}

void searchStudent(int id)
{
    Student s;
    ifstream file("students.dat", ios::binary);
    if (file.is_open())
    {
        bool flag=false;
        while(file.read((char *)&s, sizeof(s))){
        if (s.id == id)
        {
            cout << "---------------END---------------" << endl<<endl;
            cout << "Student found"<<endl;
            flag=true;
            cout << "Id :" << s.id << "\nName:" << s.name << "\nMarks:" << s.marks << endl;
            cout << "---------------END---------------" << endl<<endl;
            file.close();
        }
        }
        if(flag==false){
            cout<<"Data not found"<<endl;
        }
    }
    else
    {
        cout << "Some error encountered";
    }
}

int main()
{
    int choice;
    do
    {
        cout << "\n--- Student Management System ---" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Search Student by ID" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3:
        {
            int id;
            cout << "Enter ID to search: ";
            cin >> id;
            searchStudent(id);
            break;
        }
        case 4:
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
