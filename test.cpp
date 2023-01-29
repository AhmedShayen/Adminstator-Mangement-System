#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string a1[9];
     ifstream a;
     a.open("teacher.txt");
     if(a.is_open()!=true){
       cout<<"file Can not be open";
     }
     else{
        int i=0;
        while(!a.eof()){
            a>>a1[i];
            if( a.eof() ) {
               break;
            };
            cout<<a1[i]<<endl;
        }
        cout<<endl;
     }
}
