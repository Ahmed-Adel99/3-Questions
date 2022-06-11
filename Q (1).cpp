#include <iostream>
using namespace std ;
int main() {

    int a=10 , x=2000 , y , total;

    while(a <= 30 )
    {
        cout<<"\n Please Enter the number of cources :  " ;
        cin>> y ;
        total = x * y ;
        cout<<"the course fee is : " << total ;
        a++;
    }

    return 0;
}