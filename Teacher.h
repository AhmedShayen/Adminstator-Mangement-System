#include<iostream>
#include"List.cpp"
using namespace std;
class Teacher{
    bool kk=false;
    t a;
    node<t>* head = NULL;
    double_llist<t> L;
public:
    Teacher();
    void Edit();
    void Add();      
    void Menu();
};
class Student{
    s a;
    node<s>* head = NULL;
    double_llist<s> L;
public:
    Student();
    void Edit();
    void Add();
    void Menu();
};