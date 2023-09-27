#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int revNum = 0, n, d;
    n = num;

    while(num > 0) {
        d = num%10;
        revNum = 10*revNum + d;
        num /= 10;
    }

    if(revNum == n)
    cout << "Palindrome number" << endl;
    else
    cout << "Not a Palindrome Number" << endl;

    return 0;
}
