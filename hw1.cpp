// Converting decimal to binary
#include <iostream>
#include <cmath>
#include <unistd.h>
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

void binarytodecimal(int num)
{
    int place_value = 0;
    int decimal = 0;
    while (num != 0)
    {
        int value = num % 10;
        decimal = decimal + pow(2, place_value) * value;
        place_value++;
        num = num / 10;
    }
    cout << "decimal is : " << decimal << endl;
    return;
}

void decimaltoOctal(int n)
{
    if (n == 0)
    {
        cout << "Octal is : 0";
        return;
    }
    else
    {
        int Octal = 0;
        int p = 1;

        while (n > 0)
        {
            int r;
            r = n % 8;
            Octal = Octal + r * p;
            p = p * 10;
            n = n / 8;
        }
        cout << "Octal is : " << Octal << endl;
        return;
    }
}
/*
void decimaltoHexal(int n)
{
    if (n == 0)
    {
        cout << "Hexal is : 0";
        return;
    }
    else
    {
        int Octal = 0;
        int p = 1;

        while (n > 0)
        {
            int r;
            r = n % 8;
            Octal = Octal + r * p;
            p = p * 10;
            n = n / 16;
        }
        cout << "Octal is : " << Octal << endl;
        return;
    }
}
*/
void OctaltoDecimal(int num)
{
    int place_value = 0;
    int decimal = 0;
    while (num != 0)
    {
        int value = num % 10;
        decimal = decimal + pow(8, place_value) * value;
        place_value++;
        num = num / 10;
    }
    cout << "decimal is : " << decimal << endl;
    return;
}

int main()
{
    int num;
    cout << "Enter any number :";
    cin >> num;
    if (num < 0)
    {
        cout << "Please enter a positive number :" << endl;
        main();
    }
    cout << "1.Decimaltobinary\n2.Binarytodecimal\n3.DecimaltoOctal\n4.OctaltoDecimal\n5.Exit\nEnter your choice:";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        decimaltobinary(num);
        break;
    }
    case 2:
    {
        binarytodecimal(num);
        break;
    }
    case 3:
    {
        decimaltoOctal(num);
        break;
    }
    case 4:
    {
        OctaltoDecimal(num);
        break;
    }
    default:
    {
        cout << "Please enter a right choice :";
        sleep(2);
        main();
        break;
    }
    }
    system("pause");
    return 0;
}
