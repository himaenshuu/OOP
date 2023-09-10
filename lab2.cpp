#include <iostream>
using namespace std;

int main()
{
    // int p;
    // int r;
    // int t;
    // cout << "Enter principle, rate and time for finding simple interest" << endl;
    // cin >> p;
    // cin >> r;
    // cin >> t;

    // float si = (p * r * t) / 100;
    // cout << "Simple interest is : " << si << endl;

    // Checking even or odd
    // while (1)
    // {
    // int a;
    // cout << "Enter a number:" << endl;
    // cin >> a;
    // if (a % 2 == 0)
    // {
    //     cout << "It is even" << endl;
    // }
    // else
    // {
    //     cout << "It is odd" << endl;
    // }

    // Checking even or odd
    //     int a;
    //     cout<<"Enter a number"<<endl;
    //     cin>>a;
    //     if(a<0){
    //         cout<<"It is negative"<<endl;
    //     }
    //     else {
    //         cout<<"It is positive"<<endl;
    //     }
    // }
    while (1)
    {
        char a;
        cout << "Enter a letter" << endl;
        cin >> a;
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
        {
            cout << "It is vowel" << endl;
        }
        else
        {
            cout << "It is consonant" << endl;
        }
    }
    return 0;
}