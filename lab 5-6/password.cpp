#include <iostream>
using namespace std;
int main() 
{
    string password; 
    while (true) {
        cout << "Enter password: ";
        cin >> password;  
        if (password == "Python123") {
            cout << "correct password" << endl;
            break; 
        } 
        else {
            cout << "Incorrect password"<<endl;
        }
    }
    return 0;  
}
