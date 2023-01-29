#include<iostream>
#include"T.cpp"
using namespace std;
int main(){
Teacher a1;
Student a;
int i=0;
    while(1){
  system("clear");
  cout<<"Admnistrator System\n";
  cout<<"-------------------\n";
  cout<<"1 Teacher Mangement System\n";
  cout<<"2 Student Mangement System\n";
  cout<<"3 End\n";
  cout<<"--------------------------\n";
  cin>>i;
  if(i==1){
    system("clear");
    a1.Menu();
  }
  if(i==2){
   system("clear");
   a.Menu();
   }
  }
  return 0;
}