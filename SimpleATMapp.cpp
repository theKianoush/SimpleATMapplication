#include <iostream>
using namespace std;


//check balance, deposit, withdraw, show menu to user 


void showMenu() {
     cout << "**********MENU**********\n";
     cout << "1. Check Balance\n";
     cout << "2. Deposit\n";
     cout << "3. Withdraw\n";
     cout << "4. Exit\n";
     cout << "************************\n";
}


int main() {

     system("Color 4E");  // first digit is for the background color red, and the second digit is for the font yellow

     int option;
     double balance = 0.0; //balance of bank account initalized to 0 dollars

     do {
          showMenu();

          cout << "Option: ";
          cin >> option;

          system("cls");

          if (option == 1) {
               cout << "Balance is: $" << balance << "\n";;
          }
          else if (option == 2)
          {
               cout << "Deposit Amount: $";
               double depositAmount;
               cin >> depositAmount;
               balance += depositAmount;
          }
          else if (option == 3) {
               cout << "Withdraw Amount: $";
               double withdraw;
               cin >> withdraw;
               if (withdraw <= balance) {
                    balance -= withdraw;
               }
               else { cout << "You don't even have $"<< withdraw <<" in your account\n"; }
          }
     } while (option != 4);

     cout << "Thank you, have a nice day!\n";
     return 0;
}