// Group Project team 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

/*struct parents_reg
{

};*/

struct order
{


    int no;
    char date[20];
    char  item_name[20];
    char quantity; //small = ‘s’ / medium = ‘m’  large = ‘l’
    float price;
    char child_name[40];
    int room_no;
    char payment_status; // ‘y’ || ‘n’


};


// functions
void order_screen(struct Order order);
void admin_menu();
void admin_login();
void line(int, char);

fstream Order_file;


int main()
{
    int main_opt;
    int main_login_as, main_reg_as;


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

        void admin_login();
        void admin_menu(fstream & Order_file);

        break;

    default:
        cout << "\nPlease enter a number between 1 and 3....";
        break;
    }

    cout << "\n\n\n";

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

void order_screen(struct Order order)
{
    int i = 0;

    cout << "\nOrder number : " << i + 1;
    i++;

    

    order.no = rand() % 100;
}
void admin_login()
{
    char login_name_ad[20];
    int pw_ad;

    cin.ignore();
    cout << "\nEnter login name : ";
    cin.getline(login_name_ad, 20);

    cout << "\nEnter your password :";
    cin >> pw_ad;
}


void admin_menu(fstream& Order_file)
{
    int admin_opt;

    while (admin_opt != 6)
    {
        

        cout << "\n\n\t\tAdmin menu";
        cout << "\n1. Menu update";
        cout << "\n2. Daily order report";
        cout << "\n3. Weekly sales report";
        cout << "\n4. Weekly pending payment report";
        cout << "\n5. Weekly comlaint";
        cout << "\n6. Quit";

        switch (admin_opt)
        {
        case 1:
            cout << "\n---- Menu update ----";

            Order_file.open("Order_file.dat", ios::out | ios::app | ios::binary);

            cout << "\t\t\tMain\t\t\tSnack\t\t\tFruit\n";
            cout << "MON :" << setw(25) << "Tuna Pasta" << setw(25) << "Potato Salad" << setw(25) << "Apple\n";
            cout << "TUE :" << setw(25) << "Pork Wrap" << setw(25) << "Kumara Fries" << setw(25) << "Cherry\n";
            cout << "WED :" << setw(25) << "Chiken Donbri Don" << setw(25) << "Tomato Salad" << setw(25) << "Orange\n";
            cout << "THU :" << setw(25) << "Sarmon Pasta" << setw(25) << "Punpkin Soup" << setw(25) << "Pineapple\n";
            cout << "FRI :" << setw(25) << "Butter Chiken Curry" << setw(25) << "Beans Salad" << setw(25) << "Kiwi\n";
            Order_file << "First name : " << p.fname << "\n";
            Order_file << "Last name : " << p.lname << "\n";
            Order_file << "Address line 1 : " << p.address1 << "\n";
            Order_file << "Address line 2 : " << p.address2 << "\n";
            Order_file << "Phone number : " << p.phone << "\n\n";

            Order_file.close();


            break;
        case 2:
            cout << "\n---- Daily order report  ----";
            break;
        case 3:
            cout << "\n---- Weekly sales report ----";
            break;
        case 4:
            cout << "\n---- Weekly pending payment report ----";
            break;
        case 5:
            cout << "\n---- Weekly comlaint ----";
            break;
        case 6:
            break;
        
        
        default:
            cout << "\nInvaild number.. try again....";
            break;
        }
    }

    
}

