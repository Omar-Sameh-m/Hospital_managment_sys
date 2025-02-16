#ifndef HMS_H
#define HMS_H
#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct patient
{
    ll id;
    int age;
    string firstname, lastname, blood, gender;
    patient *next;
};

class linkedqueue
{
    patient *head, *last;

public:
    linkedqueue()
    {
        head = NULL;
        last = NULL;
    }
    patient input();
    void insertatend();
    void insertatbeg();
    void getpatientout();
    void listofpatients();
    int  search(int); //  by id
    string departmentname;
};
void output(patient *p);
void departmentmenu(linkedqueue *q);

#endif
