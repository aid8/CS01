#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    //Input three numbers
    cin >> a >> b >> c;

    //Solution 1:
    //Ito nagagana lang ito kung unique yung mga numbers
    if(a > b && a > c)
        cout << "Largest Number is A: " << a;
    else if(b > a && b > c)
        cout << "Largest Number is B: " << b;
    else
        cout << "Largest Number is C: " << c;

    return 0;
}
