#include <iostream>
using namespace std;
int main() {
char a,b,c,d,f;
int grade;
cout<<"Enter your grade number :";
cin>>grade;
if (grade>90 && grade<100){
    cout<<"your grade is :"<<endl ;
    cout<<'a'<<endl;
}
else if (grade>80 && grade<90){
    cout<<"your grade is :"<<endl ;
    cout<<'b'<<endl;
}
else if (grade>70 && grade<80){
    cout<<"your grade is :"<<endl ;
    cout<<'c'<<endl;
}
else if (grade>50 && grade<70){
    cout<<"your grade is :"<<endl ;
    cout<<'d'<<endl;
}
else if (grade >= 0 && grade < 50) {
    cout<<"your grade is :"<<endl ;
    cout<<'f'<<endl;
}
else if (grade < 0 || grade > 100) {
    cout << "Invalid grade entered. Please enter a grade between 0 and 100." << endl;
}
    return 0;
}