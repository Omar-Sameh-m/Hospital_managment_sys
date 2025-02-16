
#include "HMS.h"
#include <bits/stdc++.h>

int linkedqueue::search(int item)
{
    if (head == NULL)
        return 0;

    patient *p = head;
    while (p != NULL)
    {
        if (p->id == item)
        {
            return 1;
        };
        p = p->next;
    }
    return 0;
}

patient linkedqueue::input()
{
    patient *p = new patient();
    cout << "\n Enter patient details:\n";
    cout << " First name: ";
    cin.ignore();
    getline(cin, p->firstname);
    cout << " Last name: ";
    getline(cin, p->lastname);
    cout << " Blood group: ";
    cin >> p->blood;
    cout << " Gender (m/f): ";
    cin >> p->gender;
    cout << " Age: ";
    cin >> p->age;
    cout << " Mobile number: ";
    cin >> p->id;
    if (search(p->id))
    {
        p->id = 0;
        cout << "\n ERROR: Patient with this ID already exists.\n";
    }
    return *p;
}

void linkedqueue::insertatend()
{
    patient *p = new patient();
    *p = input();
    if (p->id == 0)
        return;
    if (head == NULL)
    {
        head = p;
        last = p;
        p->next = NULL;
    }
    else
    {
        p->next = NULL;
        last->next = p;
        last = p;
    }
    cout << "\n Patient added to the end of the queue.\n";
}

void linkedqueue::insertatbeg()
{
    patient *p = new patient();
    *p = input();
    if (p->id == 0)
        return;
    if (head == NULL)
    {
        head = p;
        last = p;
        p->next = NULL;
    }
    else
    {
        p->next = head;
        head = p;
    }
    cout << "\n Patient added to the beginning of the queue.\n";
}

void output(patient *p)
{
    cout << "\n Patient Data:\n";
    cout << " +---------------------+---------------------+\n";
    cout << " | " << left << setw(20) << "First Name" << " | " << setw(20) << p->firstname << " |\n";
    cout << " | " << setw(20) << "Last Name" << " | " << setw(20) << p->lastname << " |\n";
    cout << " | " << setw(20) << "Gender" << " | " << setw(20) << p->gender << " |\n";
    cout << " | " << setw(20) << "Age" << " | " << setw(20) << p->age << " |\n";
    cout << " | " << setw(20) << "Blood Group" << " | " << setw(20) << p->blood << " |\n";
    cout << " | " << setw(20) << "Mobile Number" << " | " << setw(20) << p->id << " |\n";
    cout << " +---------------------+---------------------+\n";
}
void linkedqueue::getpatientout()
{
    if (head == NULL)
    {
        cout << "\n No patients in the queue.\n";
    }
    else
    {
        patient *p = head;
        head = head->next;
        cout << "\n The patient to operate is:\n";
        output(p);
        delete p;
    }
}

void linkedqueue::listofpatients()
{
    if (head == NULL)
    {
        cout << "\n No patients in the queue.\n";
        return;
    }
    patient *p = head;
    while (p != NULL)
    {
        output(p);
        p = p->next;
    }
}

void departmentmenu(linkedqueue *q)
{
    int choice = 0;
    do
    {
        system("cls");
        cout << "\n Department: " << q->departmentname;
        cout << "\n 1. Add normal patient\n";
        cout << " 2. Add critically ill patient\n";
        cout << " 3. Take patient to doctor\n";
        cout << " 4. Display patient list\n";
        cout << " 5. Exit\n";
        cout << " Enter your choice: ";
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
            q->insertatend();
            break;
        case 2:
            q->insertatbeg();
            break;
        case 3:
            q->getpatientout();
            break;
        case 4:
            q->listofpatients();
            break;
        }
        if (choice != 5)
        {
            cout << "\n Press any key to continue...";
            cin.get(); // wait for user input
        }
    } while (choice != 5);
}
