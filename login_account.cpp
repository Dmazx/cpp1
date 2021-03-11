#include <iostream>
#include <string>
using namespace std;

int main()
{
    // create variabel4
    string password, username;
    string username = "Dmazx10";
    string pinpassword = "programmer1023";

    // user input
    cout << "===== login forum ===== \n\n";
    cout << "username= ";
    getline (cin, username);
    cout << "password= ";
    getline (cin, password);

    // condicition and exsecute
    if (username == username1) {
        if (password == pinpassword) {
            cout << "login success\nyoure welcome";
        }
    }
    else {
        cout << "try again";
    }
    
    cout << endl;
    return 0;
}
