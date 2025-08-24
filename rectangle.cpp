// This code was written with AI assistance (ChatGPT) and then customized by me.
#include <iostream>
using namespace std;
//yêu cầu tạo class employee bao gồm name (tên) và salaray(lương lậu) 
class Rectangle{
    public:
    double width; 
    double height;
    //constructor 
    Rectangle(double w , double h){
        width = w ;
        height = h ;

    }
  //hàm tính diện tích hcn
  int calculateArea(){
    return width*height ; 
  }


};
int main()
{
   Rectangle hcn(2,3) ;
   cout << "Area: " << hcn.calculateArea() << endl;

}