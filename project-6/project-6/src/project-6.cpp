#include <iostream>
#include "console.h"
#include <string>
using namespace std;

int main()
{
   cout << "Enter the name of the person you want to write to and " << "\n";
   cout << "the name of a friend (followed by 'enter'):\n";
   string first_name = "???";// first_name is a variable of type string
   string friend_name = "???";
   cin >> first_name >> friend_name;      // read characters into first_name
   cout << "Dear " << first_name << ",\n";
   cout << "  How are you? " << "I'm fine. I miss you a lots." << "\n";
   cout << "Do you come to Robertville this summer?" << '\n';
   cout << "Have a nice day! Come visit some day." << '\n';
   cout << "Have you see ower friend " << friend_name << "?\n";
   cout << "Bye! Bye!";
   return 0;
}
