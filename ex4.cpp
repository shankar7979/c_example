#include<iostream>
#include<cstring>

using namespace std;


class Person{
public:

int age;
char name[20];
float salary;

void info()
{
	cout<<"\nPerson information";
	cout <<"\nage is "<<age;  
	cout<<"\nname is "<<name;
	cout<<"\nsalary is "<<salary;
}

void input(){
	
	
}


};

int main()
{
	Person p;
	p.age=20;
	strcpy(p.name,"ram kumar");
	p.salary=30000.67;
    
	p.info();
	
}



