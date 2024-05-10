#include <iostream>
#include <string>
using namespace std;

string q1 = "Enter your first number to add: ";
string q2 = "Enter your second number to add: ";

int main() {
    cout << q1 << endl;
    cin >> q1;
    cout << q2 << endl;
    cin >> q2;
    cout << q1 << " + " << q2 << " = " << q1 + q2;
    return 0;
}
