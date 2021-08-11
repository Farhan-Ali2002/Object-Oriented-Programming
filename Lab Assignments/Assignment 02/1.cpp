#include<iostream>
using namespace std;
class Employee{
public:

// members of class

	int employee_number;
	string employee_name;
	int employee_phone_number[4];
	int employee_age;
	float employee_compensation;

// constructor,parametrized constructor, destructor prototypes

	Employee();
	Employee(string name);
	~Employee();

// set function prototypes

	void set_number(int a);
	void set_name(string b);
	void set_phone_number(int c[4]);
	void set_age(int d);
	void set_compensation(float e);

// get function prototypes

	int get_number();
	string get_name();
	int* get_phone_number();
	int get_age();
	float get_compensation();

// print function prototypes

	void print_number();
	void print_name();
	void print_phone_number();
	void print_age();
	void print_compensation();

// update function prototypes

	void update_number(int a);
	void update_name(string b);
	void update_phone_number(int c[4]);
	void update_age(int d);
	void update_compensation(float e);
	
	

};

//-----------------------------

// Constructor

Employee::Employee(){
	cout<<"Default Constructor ! "<<endl;

}
//------------------------------

// Parametrized Constructor

Employee::Employee(string name){
	employee_name=name;
	cout<<"Paramaterized Constructor ! "<<endl;


}
//-----------------------------

// Destructor

Employee::~Employee(){
	cout<<"Destructor ! "<<endl;
}
//-------------------------------

// Set Fuctions

void Employee::set_number(int a){
	employee_number=a;
}
void Employee::set_name(string b){
	employee_name=b;
}
void Employee::set_phone_number(int c[4]){
	for(int i=0;i<4;i++)
		employee_phone_number[i]=c[i];
}
void Employee::set_age(int d){
	employee_age=d;
}
void Employee::set_compensation(float e){
	employee_compensation=e;
	cout<<"------------------------------------"<<endl;
}
//-----------------------------------------

// Get Functions



int Employee::get_number(){
	return employee_number;
}
string Employee::get_name(){
	return employee_name;
}
int* Employee::get_phone_number(){
	return employee_phone_number;
}
int Employee::get_age(){
	return employee_age;
}
float Employee::get_compensation(){
	return employee_compensation;
	cout<<"-----------------------------------------"<<endl;
}


//----------------------------------------

// Print Functions

void Employee::print_number(){
	cout<<"Employee Number => "<<employee_number<<endl;
}

void Employee::print_name(){
cout<<"Employee Name => "<<employee_name<<endl;
}

void Employee::print_phone_number(){
cout<<"Employee Phone Number => ";
for(int i=0;i<4;i++)
	cout<<"\n"<<employee_phone_number[i];
cout<<endl;

}

void Employee::print_age(){
cout<<"Employee Age => "<<employee_age<<endl;
}

void Employee::print_compensation(){
cout<<"Employee Compensation => "<<employee_compensation<<endl;
}

//-----------------------------------------

//Update Functions

void Employee::update_number(int a){
	employee_number=a;
}
void Employee::update_name(string b){
	employee_name=b;
}
void Employee::update_phone_number(int c[4]){
	for(int i=0;i<4;i++)
		employee_phone_number[i]=c[i];
}
void Employee::update_age(int d){
	employee_age=d;
}
void Employee::update_compensation(float e){
	employee_compensation=e;
	cout<<"------------------------------------"<<endl;
}


//------------------------------------------





int main(){
// Creating Class Objects

	Employee a1,a2,a3;

// Creating some variables

	int x,y,z[4];
	string name;
	float cmp;

// Taking name,number,age etc from user 
	cout<<"Enter Employee Name => ";
	cin>>name;
	cout<<"Enter "<<name  <<" Number => " ;
	cin>>x;
	cout<<"Enter "<<name <<" Age => ";
	cin>>y;
	for(int i=0;i<4;i++){
		cout<<"Enter Employee "<<name<<" Phone Number "<<i+1<<endl;
		cin>>z[i];
	}
	cout<<"Enter Compensation Of "<<name<<" => ";
	cin>>cmp;

//calling functions

	a1.set_number(x);
	a1.set_name(name);
	a1.set_phone_number(z);
	a1.set_age(y);
	a1.set_compensation(cmp);

	a1.print_number();
	a1.print_name();
	a1.print_phone_number();
	a1.print_age();
	a1.print_compensation();





}