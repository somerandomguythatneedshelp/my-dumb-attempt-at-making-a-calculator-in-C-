#include <iostream>
#include <string>
using namespace std;

string q1 = "Enter your first number to add: ";
string q2 = "Enter your second number to add: ";
int one, two;

int main() {
    cout << q1 << endl;
    cin >> one;
    cout << q2 << endl;
    cin >> two;
    cout << one << " + " << two << " = " << one + two;
    return 0;
}
