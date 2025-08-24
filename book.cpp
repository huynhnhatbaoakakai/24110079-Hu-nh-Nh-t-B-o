//yêu cầu : tạo class book bao gồm tiêu đề và tác giả 
// This code was written with AI assistance (ChatGPT) and then customized by me.
using namespace std;
#include <iostream>
using namespace std;
class Book{
public:
    string title ;// thuộc tính tiêu đề
    string author; //thuộc tính điểm số 
    //constructor có tham số : khởi tạo sinh sách với tiêu đề và tác giả 

    Book(string title , string author){
        this->title = title; // gán tham số tile cho thuộc tính title
        this->author = author; // gán ts author cho thuộc tính autho 
        
    }
    //this: phân biệt thuộc tính của đối tượng và tham số truyền vào 
    //this là con trỏ ẩn
    //hiện thị thông tin sách
    void displayInfo(){
        cout << "Tieu de: " << title << " Tac Gia: " << author <<endl;

    }

};
int main(){
    //không càn gán thủ công chỉ cần tạo object book và gọi constructor
    Book sach1("Harry Potter and the Philosopher's Stone" , "J. K. Rowling") ;
    sach1.displayInfo();
    Book sach2("Meu Pé de Laranja Lima","José Mauro de Vasconcelos");
    sach2.displayInfo();
}

