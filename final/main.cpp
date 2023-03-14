#include <iostream>

using namespace std;
//menu:
int main()
{
    //task 2 (rest):
    char choice;
    cout << " a => chicken" << endl;
    cout << " b => meat" << endl;
    cout << " c => sea food" << endl;
    cout << " d => berverage" << endl;
    cout << " e => exist" << endl;
    do
    {
        cin>> choice;
        switch (choice)
        {
        case 'a':
        case 'A':
        cout <<" 100 L.E";
        break;

        case 'b':
        case 'B':
        cout <<" 200 L.E";
        break;

        case 'c':
        case 'C':
        cout <<" 300 L.E";
        break;

        case 'd':
        case 'D':
        cout <<" 400 L.E";
        break;

        case 'e':
        case 'E':
       cout <<" Thank you";
        break;

        default:
        cout <<"not valid choice,Please choose again";
        }

    }while (choice !='e'  || choice !='E');
        cout <<"thank you";
    return 0;
}
