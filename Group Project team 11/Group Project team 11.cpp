// Group Project team 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

/*struct parents_reg
{

};*/

//function with arg without return value
void line(int, char);

int main()
{
    int main_opt;
    int main_login_as;
    int main_reg_as;

    cout << "\n\t\t\tYoobee School Lunch \n";

    line(85, '*');
    cout << "\n\t\t\t----- Weekly Menu -----\n\n";
    cout << "Week 1 (July, 2021)\n";
    cout << "\t\t\tMain\t\t\tSnack\t\t\tFruit\n";
    cout << "MON :" << setw(25) << "Tuna Pasta" << setw(25) << "Potato Salad" << setw(25) << "Apple\n";
    cout << "TUE :" << setw(25) << "Pork Wrap" << setw(25) << "Kumara Fries" << setw(25) << "Cherry\n";
    cout << "WED :" << setw(25) << "Chiken Donbri Don" << setw(25) << "Tomato Salad" << setw(25) << "Orange\n";
    cout << "THU :" << setw(25) << "Sarmon Pasta" << setw(25) << "Punpkin Soup" << setw(25) << "Pineapple\n";
    cout << "FRI :" << setw(25) << "Butter Chiken Curry" << setw(25) << "Beans Salad" << setw(25) << "Kiwi\n";
    line(85, '*');

    cout << "\n\t\t\t----- Discounts for bulk booking -----\n\n";
    line(85, '*');

    cout << "\n\t\t\t----- Contact Us -----\n\n";
    cout << "Phone   :   0800 000 000\n";
    cout << "E-mail  :   Yoobeelunch@gmail.com\n";
    cout << "Address :   4/3 City Road, Grafton Auckland\n";
    line(85, '*');

    cout << "\nRegistar with us from today!!      (Press 1)";
    cout << "\nDo you already have an account?    (Press 2)";
    cout << "\nAdmin login                        (Press 3)";

    cout << "\n\nToday I want......(Please Enter the number from above) : ";
    cin >> main_opt;

    switch (main_opt)
    {
    case 1:
        cout << "\nLogin as parents   (Press 1)\n";
        cout << "\nLogin as staff     (Press 2)\n";
        cout << "Login as ...... : "; cin >> main_login_as;

        if (main_login_as == 1)
        {

        }
        else if (main_login_as == 2)
        {

        }
        else
        {
            cout << "\nSorry try again....\n";
        }
        break;

    case 2:
        cout << "\nRegistar as parents   (Press 1)\n";
        cout << "\nRegistar as staff     (Press 2)\n";
        cout << "Registar as ...... : "; cin >> main_reg_as;

        if (main_reg_as == 1)
        {

        }
        else if (main_reg_as == 2)
        {

        }
        else
        {
            cout << "\nSorry try again....\n";
        }
        break;

    case 3:

        break;

    default:
        cout << "\nPlease enter a number between 1 and 3....";
        break;
    }
    return 0;
}






void line(int n, char ch)
{
    cout << "\n";

    for (int i = 0; i < n; i++)
    {
        cout << ch;
    }

    cout << "\n";
}
