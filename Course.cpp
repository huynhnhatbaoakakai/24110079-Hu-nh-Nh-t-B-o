#include<iostream>
// This code was written with AI assistance (ChatGPT) and then customized by me.
using namespace std;
class Course{
    public : 
    string coursename ; 
    int coursecode; 
    string instructorname ; 
    //constructor cho nhanh 
    Course(string n , int c, string i ){
        coursename = n ; 
        coursecode = c; 
        instructorname = i ;

    }
    void displayInfo(){
        cout << "Course: " << coursename << endl; 
        cout << "Code: " << coursecode << endl; 
        cout << "Ïnstructor Name : " << instructorname << endl ;

    }
    bool isHighCredit(){
        if(coursecode > 3){
            return true ; 
        }else return false; 

    }
    void LabRequired(){
        if(!isHighCredit()){
            cout << "Does not require a lab!" <<endl; 

        }else cout << "Require a lab! " << endl; 
    }


};
int main(){
    Course kh1("Object Oriented Programming",4, "Huynh Xuan Phung") ;
    kh1.displayInfo() ;
    kh1.LabRequired() ;
    Course kh2("Research Methods",3,"Diep Phuong Chi" ) ;
    kh2.displayInfo() ;
    kh2.LabRequired() ; 

}