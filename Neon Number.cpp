#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n, d;
    cout << "Enter a number: ";
    cin >> n;

    int square = n*n;
    int sum = 0;
    while(square > 0){
        d = square % 10; 
        sum += d; 
        square /= 10; 
    }

    if(n == sum)
    cout << "Neon number" << endl;
    else
    cout << "Not Neon number" << endl;

    return 0;
}
