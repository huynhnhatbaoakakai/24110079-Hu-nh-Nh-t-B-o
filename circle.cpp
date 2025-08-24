// This code was written with AI assistance (ChatGPT) and then customized by me.
#include <iostream>
#include <cmath>
using namespace std;
class Circle{
    public:
    double radius ; 
    string color ; 
    double circumference(){
        return 2 *M_PI *radius ;
    }
    double area(){
        return M_PI* pow(radius ,2 ) ; 
    }
   bool kt(){
    return radius > 0 ; 

   }

};
int main()
{
  Circle tron1;
  cout << "Please enter radius: " ;
  cin >> tron1.radius ;
  if(!tron1.kt()){
    cout << "Invalid Radius, Radius must be a postitive number. " <<endl; 
  }else{
  cout << "Please enter color: " ;
  cin >> tron1.color ; 
  cout << "Circumference : " << tron1.circumference() << " (Length Units) and Area: " << tron1.area() << "(Square Units)" <<endl; 
  cout << "Color of the circle: " <<tron1.color ; }
}