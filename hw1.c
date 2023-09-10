// Converting decimal to binary
#include <iostream>
using namespace std;

void decimaltobinary(int n)
{
    if (n == 0)
    {
        cout << "binary is : 0";
        return;
    }
    else
    {
        int binary = 0;
        int p = 1;

        while (n > 0)
        {
            int r;
            r = n % 2;
            binary = binary + r * p;
            p = p * 10;
            n = n / 2;
        }
        cout << "binary is : " << binary << endl;
        return;
    }
}

int main()
{
    int num;
    cout << "Enter any number :";
    cin >> num;
    if (num < 0)
    {
        cout << "Please enter a positive number :";
        main();
    }
    else
    {
        decimaltobinary(num);
    }

    system("pause");
    return 0;
}
