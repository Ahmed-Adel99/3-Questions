#include <iostream>
using namespace std ;

int main() {
    int a=0 , x = 0, even=0 , odd=0 ;

    while ( a < 100 )
    {
        if (x >= 0)
        {
            cout<<" \n Enter the positive number : " ;
            cin>> x ;
            a++;

            if ( (x % 2) == 0 )
            {
                even++ ;
            }
            else
            {
                odd++;
            }
        }
        else
        {
            cout<<"Error , Please Enter Postive Number : " ;
            cin >> x;
        }

    }
    cout<<"number of even : " << even<< "\n" ;
    cout<<"nubmer of odd : " << odd <<"\n";

    return 0;
}