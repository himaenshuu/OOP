#include <iostream>
using namespace std;

class number
{
private:
    int n;

public:
    number()
    {
        cout << "Enter a number : ";
        int num;
        cin >> num;
        n = num;
    }
    void decimaltobinary();
    void decimaltooctal();
};
void number::decimaltobinary()
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
         cout << "Binary is : " << binary<<endl;
}
    }
int main()
{
    number n1;
    n1.decimaltobinary();
    system("pause");
    return 0;
}
