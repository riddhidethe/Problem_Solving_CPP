#include<iostream>
using namespace std;

int main() {
    int num, d;
    cout << "Enter a number: ";
    cin >> num;

    string arr[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string wrd = "";

    

    while(num > 0) {
        d = num%10;
        wrd = arr[d] + " " + wrd;
        num /= 10;
    }

    cout << "Output: " << wrd << endl;

    return 0;
}
