#include<iostream>
#include<fstream>
using namespace std;
struct t{
	
	string Id;
    string First_Name;
    string Last_Name;
	string userName;
    string Email;
    string Date;
    string Gender;
    string Blood_Group;
    string Phone_Number;
	void Add(char &i){
		fstream fout;
		system("clear");
		fout.open("teacher.txt",ios::app);
		fout<<i<<"\n";
		this->Id=i;
		this->Id=this->Id+"\0";
		cout<<"Enter the First Name : ";
        cin>>this->First_Name;
        fout<<this->First_Name<<"\n";
        cout<<"Enter the Last Name : ";
		cin>>this->Last_Name;
		fout<<this->Last_Name<<"\n";
		cout<<"Enter the UserName : ";
		cin>>this->userName;
		fout<<this->userName<<"\n";
		cout<<"Enter the Email : ";
		cin>>this->Email;
        fout<<this->Email<<"\n";
		cout<<"Enter the Date : ";
		cin>>this->Date;
		fout<<this->Date<<"\n";
		cout<<"Enter the Gender : ";
		cin>>this->Gender;
		fout<<this->Gender<<"\n";
		cout<<"Enter the Blood Group : ";
		cin>>this->Blood_Group;
		fout<<this->Blood_Group<<"\n";
		cout<<"Enter The Phone Number :";
		cin>>this->Phone_Number;
		fout<<this->Phone_Number<<"\n";
		fout.close();
	}
	void f(){
		return;
	}
	void Insert(string i){
        this->Id=i;
		cout<<"Enter the First Name : ";
        cin>>this->First_Name;
        cout<<"Enter the Last Name : ";
		cin>>this->Last_Name;
		cout<<"Enter the UserName : ";
		cin>>this->userName;
		cout<<"Enter the Email : ";
		cin>>this->Email;
		cout<<"Enter the Date : ";
		cin>>this->Date;
		cout<<"Enter the Gender : ";
		cin>>this->Gender;
		cout<<"Enter the Blood Group : ";
		cin>>this->Blood_Group;
		cout<<"Enter The Phone Number :";
		cin>>this->Phone_Number;
	}
	void Load(ifstream &a,string l,bool &k,int &i){
     if(a.is_open()!=true){
       cout<<"file Can not be open";
     }
     else{
            a>>this->Id;
			if(this->Id==l){
				if(i==1){
			     k=true;
			     return;
			  }else{
				i=i+1;
			  }
			}
			a>>this->First_Name;
		    a>>this->Last_Name;
			a>>this->userName;
			a>>this->Email;
			a>>this->Date;
			a>>this->Gender;
			a>>this->Blood_Group;
			a>>this->Phone_Number;
	
     }
	}
	void Display(){
		cout<<this->Id<<"\n";
		cout<<this->First_Name<<"\n";
		cout<<this->Last_Name<<"\n";
		cout<<this->userName<<"\n";
		cout<<this->Email<<"\n";
		cout<<this->Date<<"\n";
		cout<<this->Gender<<"\n";
		cout<<this->Blood_Group<<"\n";
		cout<<this->Phone_Number<<"\n";
	}
};
struct s{
	string Id;
    string First_Name;
    string Last_Name;
	string userName;
    string Email;
    string Date;
    string Gender;
    string Blood_Group;
    string Phone_Number;
	string fees;
	void Add(char &i){
		fstream fout;
		system("clear");
		fout.open("student.txt",ios::app);
		fout<<i<<"\n";
		this->Id=i;
		this->Id=this->Id+"\0";
		cout<<"Enter the First Name : ";
        cin>>this->First_Name;
        fout<<this->First_Name<<"\n";
        cout<<"Enter the Last Name : ";
		cin>>this->Last_Name;
		fout<<this->Last_Name<<"\n";
		cout<<"Enter the UserName : ";
		cin>>this->userName;
		fout<<this->userName<<"\n";
		cout<<"Enter the Email : ";
		cin>>this->Email;
        fout<<this->Email<<"\n";
		cout<<"Enter the Date : ";
		cin>>this->Date;
		fout<<this->Date<<"\n";
		cout<<"Enter the Gender : ";
		cin>>this->Gender;
		fout<<this->Gender<<"\n";
		cout<<"Enter the Blood Group : ";
		cin>>this->Blood_Group;
		fout<<this->Blood_Group<<"\n";
		cout<<"Enter The Phone Number :";
		cin>>this->Phone_Number;
		fout<<this->Phone_Number<<"\n";
		cout<<"Fee Status Y(yes) & N(not) :";
		cin>>this->fees;
		fout<<this->fees<<"\n";
		fout.close();
	}
	
	void Insert(string i){
        this->Id=i;
		cout<<"Enter the First Name : ";
        cin>>this->First_Name;
        cout<<"Enter the Last Name : ";
		cin>>this->Last_Name;
		cout<<"Enter the UserName : ";
		cin>>this->userName;
		cout<<"Enter the Email : ";
		cin>>this->Email;
		cout<<"Enter the Date : ";
		cin>>this->Date;
		cout<<"Enter the Gender : ";
		cin>>this->Gender;
		cout<<"Enter the Blood Group : ";
		cin>>this->Blood_Group;
		cout<<"Enter The Phone Number :";
		cin>>this->Phone_Number;
		cout<<"Fee Status Y(yes) & N(not) :";
		cin>>this->fees;
	}
	void f(){
		fstream fout;
		fout.open("student.txt",ios::app);
		fout<<this->fees<<endl;
	}
	void Load(ifstream &a,string l,bool &k,int &i){

     if(a.is_open()!=true){
       cout<<"file Can not be open";
     }
     else{
            a>>this->Id;
			if(this->Id==l){
				if(i==1){
			     k=true;
			     return;
			  }else{
				i=i+1;
			  }
			}
			a>>this->First_Name;
		    a>>this->Last_Name;
			a>>this->userName;
			a>>this->Email;
			a>>this->Date;
			a>>this->Gender;
			a>>this->Blood_Group;
			a>>this->Phone_Number;
			a>>this->fees;
	
     }
	}
	void Display(){
		cout<<this->Id<<"\n";
		cout<<this->First_Name<<"\n";
		cout<<this->Last_Name<<"\n";
		cout<<this->userName<<"\n";
		cout<<this->Email<<"\n";
		cout<<this->Date<<"\n";
		cout<<this->Gender<<"\n";
		cout<<this->Blood_Group<<"\n";
		cout<<this->Phone_Number<<"\n";
		cout<<this->fees<<"\n";
	}
};
template<class T>
struct node
{
    T data;
	struct node* next;
	struct node* prev;
};
template <class T>  class double_llist
{
private:
	node<T>* head = NULL;
	node<T>* current_ptr = NULL;
	int count;
public:
	node<T>* insert_at_begin(T &value, node<T>* temp) {//use
		 if (head == NULL || temp==NULL) {
			temp = new node<T>;
			temp->data = value;
			head = temp;
			current_ptr = temp;
			temp->next = NULL;
			temp->prev = NULL;
		}
		else {
			current_ptr = temp;
			temp = new node<T>;
			temp->data = value;
			this->current_ptr->next=temp;
			temp->prev = current_ptr;
			temp->next = NULL;
		}
		return temp;
	}
	void insert_after( string id,int &position) {//use
	    T value;
		value.Insert(id);
		node<T>* Temp = head;
		int counter = 0;
		node<T>* temp2 = NULL;
		node<T>* temp1 = new node<T>;
		while (Temp != NULL) {
			if (position == 0) {
				temp1->data = value;
				temp1->prev = Temp;
				temp2 = Temp;
				temp2 = temp2->next;
				temp1->next = temp2;
				Temp->next = temp1;
				break;
			}
			if (counter == position) {
				temp1->prev = Temp;
				temp2 = Temp;
				temp2 = temp2->next;
				temp1->data = value;
				temp1->next = temp2;
				Temp->next = temp1;
				break;
			}
			Temp = Temp->next;
			counter = counter + 1;
		}
	}
	int Insert_Search(string &id){
		int i=0;
       node<T>* Temp = this->head;
		while (Temp != NULL) {
			if(Temp==head){
				if(Temp->data.Id[3]==id[0]){
					i=0;
					return i;
				}
			}
			if(id==Temp->data.Id){
				return i;
			}
			Temp = Temp->next;
			i=i+1;
		}
		i=-1;
		return i;
	}
	void delete_at_begin() {
		node<T>* temp = head;
		if (temp == NULL) {
			delete temp;
			return;
		}
		temp = temp->next;
		delete head;
		if (temp == NULL) {
			head = NULL;
			return;
		}
		head = temp;
		temp->prev = NULL;
	};
	string delete_before(string value) {//use
		node<T>* Temp = head;
		node<T>* temp2 = NULL;
		node<T>* temp3 = NULL;
		while (Temp != NULL) {
			if (Temp->data.Id == value) {
				temp3 = Temp;
				temp2 = Temp;
				temp2 = Temp->prev;
				temp3 = Temp->next;
				if (temp3 == NULL) {
					break;
				}
				delete Temp;
				temp3->prev = temp2;
				temp2->next = temp3;
				Temp = temp3;
				return value;
			}
			Temp = Temp->next;
		}
		return 0;
	};
	void delete_ll(node<T>* head){
		node<T>* temp=head;
		node<T>* temp1=temp;
		while(temp!=NULL){
			temp1=temp;
			temp=temp->prev;
			delete temp1;
		}
	}
	void display_dlist() {
		node<T>* Temp = head;
		cout << "Your Data is ";
		cout << endl;
		cout << "-------------------";
		cout << endl;
		while (Temp != NULL) {
			Temp->data.Display();
			Temp = Temp->next;
		}
		cout << endl;
	}
	void Fout(){
		ofstream fout;
		fout.open("teacher.txt");
		int i=1;
		node<T>* Temp = head;
		while (Temp != NULL) {	
		 fout<<i<<endl;
		 fout<<Temp->data.First_Name<<endl;
		 fout<<Temp->data.Last_Name<<endl;
         fout<<Temp->data.userName<<endl;
		 fout<<Temp->data.Email<<endl;
		fout<<Temp->data.Date<<endl;
		fout<<Temp->data.Gender<<endl;
		fout<<Temp->data.Blood_Group<<endl;
		fout<<Temp->data.Phone_Number<<endl;
        Temp->data.f();
			i=i+1;
			Temp = Temp->next;

		}
		cout << endl;
	}
	void fout(){
		ofstream fout;
		fout.open("student.txt");
		int i=1;
		node<T>* Temp = head;
		while (Temp != NULL) {	
		 fout<<i<<endl;
		 fout<<Temp->data.First_Name<<endl;
		 fout<<Temp->data.Last_Name<<endl;
         fout<<Temp->data.userName<<endl;
		 fout<<Temp->data.Email<<endl;
		fout<<Temp->data.Date<<endl;
		fout<<Temp->data.Gender<<endl;
		fout<<Temp->data.Blood_Group<<endl;
		fout<<Temp->data.Phone_Number<<endl;
        fout<<Temp->data.fees<<endl;
			i=i+1;
			Temp = Temp->next;

		}
		cout << endl;
	}
	bool is_empty();
	double_llist()
	{
		head = NULL;
		current_ptr = NULL; //constructor for my class
		count = 0;
	}

};
