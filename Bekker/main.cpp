#include <iostream>
#include <string>
using namespace std;

int main()
{
    int Choice,Choice1;
    setlocale(LC_ALL, "rus");
    cout << "1. Auth" << endl;
    cin >> Choice;
    switch (Choice) {

    case 1:
        system("cls");
        string Login,Password;
        cout << "Login:" << endl;
        cin >> Login;
        cout << "Password" << endl;
        cin >> Password;
        if (Login == "Casir" & Password == "123"){
            system("cls");
            cout << "1. Start selling" << endl;
            cout << "2. Stock balance" << endl;
            cout << "3. ..." << endl;
            cout << "4. ..." << endl;
            cout << "5. ..." << endl;
            cout << "6. Quit" << endl;
            cout << "Choice: ";
            cin >> Choice1;
            switch (Choice1) {
                case 6:
                break;
}
        } else {
            cout << "Wrong Login or Password!" << endl;
        }
    }
    return(0);
}
