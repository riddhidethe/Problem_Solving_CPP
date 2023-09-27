#include<iostream>

using namespace std;

int countDigits(int  num) {
    int count = 0;
    while(num > 0) {
        count++;
        num /= 10;
    }
    return count;
}
int main() {
    int num, d;
    cout << "Enter a number: ";
    cin >> num;

    int square = num*num;
    int flag = 0;

    while(num > 0) {
        if(num%10 != square%10) {
            flag = 1;
            break;
        }

        num /= 10;
        square /= 10;
    }

    if(flag == 1)
    cout << "Not an Automorphic number" << endl;
    else
    cout << "It is an Automorphic Number" << endl;

    return 0;
}
