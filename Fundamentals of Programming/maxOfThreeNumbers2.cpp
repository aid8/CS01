#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    //Input three numbers
    cin >> a >> b >> c;

    //Solution 2:
    //Pero Kung gusto mo lahat ichececk kung may kaparehas na largest number, idedetermine niya yung lahat na possible test case
    if(a > b && a > c)
        cout << "Largest Number is A: " << a;
    else if(b > a && b > c)
        cout << "Largest Number is B: " << b;
    else if(c > a && c > b)
        cout << "Largest Number is C: " << c;
    else if(a == b && b == c)
        cout << "There is no larger number.";
    else if(a == b)
        cout << "A and B are larger: " << a << " and " << b;
    else if(b == c)
        cout << "B and C are larger: " << b << " and " << c;
    else
        cout << "A and C are larger: " << a << " and " << c;
    cout << endl;


    return 0;
}
