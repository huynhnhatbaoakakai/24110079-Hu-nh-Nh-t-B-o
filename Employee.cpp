// This code was written with AI assistance (ChatGPT) and then customized by me.
#include <iostream>
using namespace std;
//yêu cầu tạo class employee bao gồm name (tên) và salaray(lương lậu) 
class Employee{
    public:
    string name; 
    double salary;
    //constructor 
    Employee(string n , double s){
        name = n ;
        salary = s ;

    }
    void displayInfo(){
        cout <<"Name:"<<name << endl;
        cout << "Salary: " << salary <<endl;

    }


};
int main()
{
    Employee nv1("Tony",25000);
    nv1.displayInfo();
    Employee nv3("Jack" , 500000);
    nv3.displayInfo(); 
}