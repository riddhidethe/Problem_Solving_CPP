#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n % 10 == 7 || n % 7 == 0)
    cout << "Buzz number" << endl;
    else
    cout << "Not Buzz number" << endl;

    return 0;
}
