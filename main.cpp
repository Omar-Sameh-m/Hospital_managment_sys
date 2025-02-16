#include <bits/stdc++.h>
#include "HMS.cpp"
using namespace std;

int main()
{
    linkedqueue q[4];
    q[0].departmentname = "GENERAL CLINIC";
    q[1].departmentname = "HEART CLINIC";
    q[2].departmentname = "LUNG CLINIC";
    q[3].departmentname = "PLASTIC SURGERY";
    int choice = 0;

    do
    {
        system("cls");
        cout << "\n +---------------------+---------------------+\n";
        cout << " | " << left << setw(20) << "     HOSPITAL MANAGEMENT SYSTEM" << "           |\n";
        cout << " +---------------------+---------------------+\n";
        cout << " | " << setw(20) << "Departments" << " |" << setw(20) << " " << "|\n";
        cout << " +---------------------+---------------------+\n";

        for (int i = 0; i < 4; i++)
        {
            cout << " | " << setw(20) << (i + 1) << " |" << setw(20) << q[i].departmentname << "|\n";
        }
        cout << " +---------------------+---------------------+\n";
        cout << " | " << setw(20) << "5. Exit" << " |" << setw(20) << " " << "|\n";
        cout << " +---------------------+---------------------+\n";
        cout << " Enter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice >= 1 && choice <= 4)
        {
            departmentmenu(&q[choice - 1]);
        }
    } while (choice != 5);

    cout << "\n Thank you for using my system \x03" << endl;
    return 0;
}