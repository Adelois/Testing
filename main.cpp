//This function returns the square of the number input
#include <iostream>

using namespace std;
int square (int number)
{
    return number * number;
}

int main()
{
    int number;
    cout << "Input number"<<endl;
    cin >> number;
    cout<<"The square of "<< number<<" is: "<<square(number)<<endl;

    return 0;
}
