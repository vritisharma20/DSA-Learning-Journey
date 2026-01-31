// find character is upper case or lower case

#include <iostream>
using namespace std;    
int main(){
    
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;

    if ( ch >= 'a' && ch <= 'z' ){
        cout<<"The character is Lowercase."<<endl;
    }else {
        cout<<"The character is Uppercase."<<endl;
    }
/*
    Other ways to do the same task:
    
    if ( ch >= 'A' && ch <= 'Z' ){
        cout<<"The character is Uppercase."<<endl;
    }else {
        cout<<"The character is Lowercase."<<endl;
    }

    if ( ch >= 97 && ch <= 122 ){
        cout<<"The character is Lowercase."<<endl;
    }else {
        cout<<"The character is Uppercase."<<endl;
    }

    if ( ch >= 65 && ch <= 90 ){
        cout<<"The character is Uppercase."<<endl;
    }else {
        cout<<"The character is Lowercase."<<endl;
    }
*/

    return 0;
}