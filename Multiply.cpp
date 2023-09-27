Multiply of digits of a number


#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int mul = 1;
    int d;

    while(num > 0) {
        d = num%10;
        mul *= d;
        num /= 10;
    }

    cout << "Output: " << mul << endl;

    return 0;
}
