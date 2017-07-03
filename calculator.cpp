#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    float num1, num2;
    int menu_num;
    float sum, quotient, diffence, product;
    cout << "Enter first number\n";
    cin >> num1;
    cout << "Enter second number\n";
    cin >> num2;
    cout << "Enter a menu option\n" << "[1] Add\n" << "[2] Subtract\n" << "[3] Multiply\n" << "[4] Divide\n";
    cin >> menu_num;
    sum = num1 + num2;
    diffence = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    cout << fixed;
    cout << setprecision(1);
    switch (menu_num)
    {
        case 1:
            cout << num1 << " + " << num2 << " = " << sum << endl;
            break;
        case 2:
            cout << num1 << " - " << num2 << " = " << diffence << endl;
            break;
        case 3:
            cout << num1 << " * " << num2 << " = " << product << endl;
            break;
        case 4:
            if (num2 == 0)
            {
                cout << "If division is selected the second number cannot be zero\n";
            }
            else
            {cout << num1 << " / " << num2 << " = " << quotient << endl;}
            break;
        default:
            cout << "Invalid menu option\n";
    }
    return 0;
}
