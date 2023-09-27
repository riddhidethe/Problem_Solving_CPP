#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int flag = 0;

    while(num > 0) {
        if(num%10 == 0) {
            flag = 1;
            break;
        } else{
            num /= 10;
        }
    }

    if(flag == 0)
    cout << "Not a Duck number" << endl;
    else
    cout << "Duck Number" << endl;

    return 0;
}
