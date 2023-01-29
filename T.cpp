#include"Teacher.h"
#include <cstdlib>
#include <chrono>
#include <thread>
#include<stdlib.h>
using namespace std;
Teacher::Teacher(){

}
void Teacher::Menu(){

    int t;
    while(1){ 
    system("clear");
    cout<<"Welcome to the Teacher Mangement System\n";
    cout<<"-----------------------------------------\n";
    cout<<"1.Add Teacher\n";
    cout<<"2.Edit\n";
    cout<<"3.Return To Main\n";
    cout<<"----------------------------------------\n";
    cin>>t;
    if(t==1){
        this->Add();
    }
    if(t==2){
        this->Edit();
     }
     if(t==3){
        break;
     }
    }
}
void Teacher::Edit(){
    system("clear");
    int i;
    string k;
    ifstream fin;
    bool t=false;
    fin.open("teacher.txt");
    fin>>k;
    fin.close();
    fin.open("teacher.txt");
    while(!fin.eof()){
      this->a.Load(fin,k,t,i);
     if(fin.eof()){
        break;
     }
      this->head=L.insert_at_begin(a,this->head);
   }
   string userid;
   L.display_dlist();
   cout<<"Enter the Id Number You Want to Edit\n";
   cout<<"-------------------------------------\n";
   cin>>userid;
   int kkk=L.Insert_Search(userid);
   if(kkk==-1){
    cout<<"Your Id does not exits\n";
   }else{
    cout<<"Id exits\n";
    L.insert_after(userid,kkk);
    cout<<"\n\n\n\n";
    L.display_dlist();
    if(kkk==0){
         L.delete_at_begin();
    system("clear");
    L.display_dlist();
    L.Fout();
    this_thread::sleep_for(chrono::milliseconds(5000));
    }else{
    L.delete_before(userid);
    system("clear");
    L.display_dlist();
    L.Fout();
    this_thread::sleep_for(chrono::milliseconds(5000));
    }
    this->head=NULL;
   }
}
void Teacher::Add(){
    char mmm='1';
    int i;
    string k;
    ifstream fin;
    bool t=false;
    fin.open("teacher.txt");
    fin>>k;
    fin.close();
    fin.open("teacher.txt");
    while(!fin.eof()){
      mmm=mmm+1;
      this->a.Load(fin,k,t,i);
     if(fin.eof()){
        break;
     }
   }
   fin.open("teacher.txt");
   while(!fin.eof()){
       
   }
   fin.close();
   mmm=mmm-1;
   system("clear");
   this->a.Add(mmm);
}
Student::Student(){

}
void Student::Menu(){

    int t;
    while(1){ 
    system("clear");
    cout<<"Welcome to the Student Mangement System\n";
    cout<<"-----------------------------------------\n";
    cout<<"1.Add Studen\n";
    cout<<"2.Edit\n";
    cout<<"3.Return To Main\n";
    cout<<"----------------------------------------\n";
    cin>>t;
    if(t==1){
        this->Add();
    }
    if(t==2){
        this->Edit();
     }
     if(t==3){
        break;
     }
    }
}
void Student::Edit(){
    system("clear");
    int i;
    string k;
    ifstream fin;
    bool t=false;
    fin.open("student.txt");
    fin>>k;
    fin.close();
    fin.open("student.txt");
    while(!fin.eof()){
      this->a.Load(fin,k,t,i);
     if(fin.eof()){
        break;
     }
      this->head=L.insert_at_begin(a,this->head);
   }
   string userid;
   L.display_dlist();
   cout<<"Enter the Id Number You Want to Edit\n";
   cout<<"-------------------------------------\n";
   cin>>userid;
   int kkk=L.Insert_Search(userid);
   if(kkk==-1){
    cout<<"Your Id does not exits\n";
   }else{
    cout<<"Id exits\n";
    L.insert_after(userid,kkk);
    cout<<"\n\n\n\n";
    L.display_dlist();
    if(kkk==0){
         L.delete_at_begin();
    system("clear");
    L.display_dlist();
    L.fout();
    this_thread::sleep_for(chrono::milliseconds(5000));
    }else{
    L.delete_before(userid);
    system("clear");
    L.display_dlist();
    L.fout();
    this_thread::sleep_for(chrono::milliseconds(5000));
    }
    this->head=NULL;
   }
}
void Student::Add(){
    char mmm='1';
    int i;
    string k;
    ifstream fin;
    bool t=false;
    fin.open("student.txt");
    fin>>k;
    fin.close();
    fin.open("student.txt");
    while(!fin.eof()){
      mmm=mmm+1;
      this->a.Load(fin,k,t,i);
     if(fin.eof()){
        break;
     }
   }
   fin.open("student.txt");
   while(!fin.eof()){
       
   }
   fin.close();
   mmm=mmm-1;
   this->a.Add(mmm);
   system("cls");
}