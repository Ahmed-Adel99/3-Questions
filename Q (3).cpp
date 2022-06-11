#include <iostream>
using namespace std;
int main()
{
    int a = 0 , x, smallest = 0;
    smallest=x;
    while (a < 3)
    {
        cout << "Enter the number: ";
        cin >> x;

        if (x < smallest){
            smallest = x;
        }
        a++;
    }
    cout << "Smallest number is : " << smallest <<"\n";
    return 0;
}