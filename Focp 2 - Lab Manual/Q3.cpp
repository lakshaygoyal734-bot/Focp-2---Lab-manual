/*A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to
convert Fahrenheit temperature into Centigrade or vice versa.*/

#include <iostream>
using namespace std;
int main()
{
    float c, f;
    int choice;
    cout << "Menu\n1.Farhenheit to Centigrade\n2.Centigrade to Farhenheit\n";
    cout<<"Choice: ";     
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        cout << "Enter temperature in Farhenheit: ";
        cin >> f;
        float centigrade = (f - 32) * 5.0 / 9;
        cout << "Answer in centigrade: " << centigrade;

        break;
    }    

    case 2:
    {
        cout << "Enter temperature in Celsius: ";
        cin >> c;
        float farhenheit = ((c * 9.0) / 5) + 32;
        cout << "Answer in farhenheit: " << farhenheit;
        break;
    }
    default:
        cout << "Invalid choice!";
    }

    return 0;
}