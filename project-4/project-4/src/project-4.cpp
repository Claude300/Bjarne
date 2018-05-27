#include <iostream>
#include "console.h"
#include <string>

using namespace std;

int main() {
    cout << "What is your name?" << endl;
    string name = "???";
    cin >> name;
    cout << "Hello, world " << name << '.'<< endl;
    return 0;
}
