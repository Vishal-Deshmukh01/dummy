#include <iostream>

using namespace std;

int main()
{int a;
    cout << "Hello world!" << endl;
    cout<<"enter year ";
    cin>>a;

    if(a%400==0 || a%100!=0 && a%4==0)
    {
        cout<<"leap yr";

    }
    else
    {
        cout<<"not a leap yr";
    }
    return 0;
}
