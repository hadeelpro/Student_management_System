#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int id;
    string name;
    float grade;
};

int main()
{
    Student students[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n===== Student Management System =====" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Show Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (count < 100)
            {
                cout << "Enter ID: ";
                cin >> students[count].id;

                cout << "Enter Name: ";
                cin >> students[count].name;

                cout << "Enter Grade: ";
                cin >> students[count].grade;

                count++;

                cout << "Student Added Successfully!" << endl;
            }
            else
            {
                cout << "Maximum number of students reached!" << endl;
            }
            break;

        case 2:
            for (int i = 0; i < count; i++)
            {
                cout << students[i].id << " "
                     << students[i].name << " "
                     << students[i].grade << endl;
            }
            break;

        case 3:
            case 3:
{
    int searchID;
    bool found = false;

    cout << "Enter Student ID: ";
    cin >> searchID;

    for (int i = 0; i < count; i++)
    {
        if (students[i].id == searchID)
        {
            cout << "Name: " << students[i].name << endl;
            cout << "Grade: " << students[i].grade << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Student Not Found!" << endl;

    break;
}

        case 4:
            cout << "Goodbye!" << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
