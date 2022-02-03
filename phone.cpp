#include <iostream>
#include <conio.h>
using namespace std;

class phone
{

private:
    string name;
    string appName;

public:
        string password = "1234";

    void unlockPhone()

    {       
        message(1);
        
    }
    void takePicture()
    {
        cout << "Clicked" << endl;
    }
    void MakeCall(int n)
    {
        cout << "calling..." << n;
    }
    void OpenApp(string appname)
    {
        cout << "opening..." << appname;
    }
    void message(int status)
    {
        if (status == 0)
        {
            cout << "welcome back !";
        }
        if (status == 1)
        {
            cout << "thank you for using...";
        }
    }
};

int main()
{
    char ch = 'y', decision;
    phone a1;
    string password, appname;
    int n, status;
    while (ch == 'y')
    {
        a1.message(0);
        cout << " Enter password \n";
        cin >> password;
        if (password == a1.password)
        {
            cout << "what do you wish to perform ? \n";
            cout << "press t to taake pictures, m to makecall, o to openapp : ";
            cin >> decision;
            switch (decision)
            {
            case 't':

                a1.takePicture();

                break;

            case 'm':
                cout << "enter the number : ";
                cin >> n;
                a1.MakeCall(n);

                break;

            case 'o':
                cout << "enter the name of app : ";
                cin >> n;
                a1.OpenApp(appname);
                break;
            }
           
        }
         cout << "\n do you wish to continue ? (y/n)";
            cin >> ch;
        a1.message(1);
    }
}