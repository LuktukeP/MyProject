//simple io operations to get as input three numbers and display output
#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cout<<"Enter three numbers"<< endl;
    cin>>a>>b>>c;
    auto sum= a+b+c;
    cout<<"sum is"<<sum;
    return 0;
}
