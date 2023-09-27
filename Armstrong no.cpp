#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n, d;
    cout << "Enter a number: ";
    cin >> n;

    int num = n; 
    int sum = 0;
    while(num > 0){
        d = num % 10; 
        sum += d*d*d;  
        num /= 10; 
    }

    if(n == sum)
    cout << "Armstrong number" << endl;
    else
    cout << "Not Armstrong number" << endl;

    return 0;
}
