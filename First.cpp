
#include <iostream>
#include <string>
using namespace std;

int funcname(){
    cout<<"function 1";
}

class Employees {
    public:
string names;//name is declared
int salary;

Employees(string names, int salary, int password)
{
    this->names = names;
    this->salary = salary;
    this->password = password;
}
void printDetails(){
cout<<"Name:"<<this->names<<"salary"<<this->salary<<endl;
}

void getpswrd(){
    cout<<"password is"<<this-password;
}

private:
  int password;

};

class singer : public Employees {
     
     public:
     int total;
};

int main()
{
    
/*multi line
comment*/
//endl,prints in a new line
    //Datatypes
    char b;
    double num = 90.0;
    float f = 8.9;
    long ln;
    long long lng;
    short sh;
    long double ld;
    
    int number = 90;
    cout<<"Hello World"<<endl;

/*
int one;
int two;
cout<<"Enter First Number"<<endl;
cin>>one;

cout<<"Enter Second Number"<<endl;
cin>>two;
cout<<"The sum is"<<one + two<<endl;
cout<<one + two;
cout<<one - two;
cout<<one * two;
cout<<(float) one / two;
*/

int age = 10;
//if else
if (age>18)
{
cout<<"you can vote";
}
else if(age<18)
{
cout<<"you cannot vote";
}else{
    cout<<"invalid age";
}
 switch (age){
     case 12:
     cout<<"YOU ARE 12";
     break;
     case 18:
     cout<<"YOU ARE 18";
break;
   default:
   cout<<"YOU ARE NOT AN ADULT NEITHER A TEENAGER";
break;
 }

//loops
int index = -1;

while(index<34)
{
    cout<<"We are at "<<index<<endl;
    index = index+1;
}

while (false)//true will keep running
{
cout<<"LOL HACKED!"<<endl;
}

do {
    cout<<"Indexing "<<index<<endl;
    index = index+1;

}while(index < 3333);

for(int i = 0; i < 99; i++)
{
cout<<i<<endl;
}
//count of array things inside []
int arr[4] = {1, 2, 3, 4};
cout<<arr[2];


int arr2d[4][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
//typecasting

int oo = 33;
float ll = 343.0;
cout<<(float) oo<<endl;
cout<<(int) ll;
//substr
string name = "Tawhid";
cout<<"length of name "<<name.length()<<endl;
cout<<name.substr(2,3)<<endl;
//pointer
int pin = 34;
int* ptra;
ptra = &pin;
cout<<"ADDRESS "<<ptra<<endl;
cout<<"ADDRESS "<<*ptra<<endl;
cout<<"VALUE"<<pin<<endl;


Employees td("Contructor", 3444, 99);
//td.names = "Tawhid";
//td.salary = 100;

    return 0;
}
