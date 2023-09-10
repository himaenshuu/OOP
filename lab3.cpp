// binary to decimal

// #include <iostream>
// using namespace std;

// class number
// {
// private:
//     int dec;

// public:
//     number(int d)
//     {
//         dec = d;
//     }
//     number()
//     {
//         cout << "Enter any decimal number: ";
//         int d;
//         cin >> d;
//         dec = d;
//     }
//     int decimaltobinary()
//     {
//         if (dec == 0)
//         {
//             int binary = 0;
//             return binary;
//         }
//         else
//         {
//             int binary = 0;
//             int p = 1;

//             while (dec > 0)
//             {
//                 int r;
//                 r = dec % 2;
//                 binary = binary + r * p;
//                 p = p * 10;
//                 dec = dec / 2;
//             }
//             return binary;
//         }
//     }
// };

// int main()
// {
//     number n1(10);
//     // number n1();
//     cout << "The binary of 10 is " << n1.decimaltobinary() << endl;
//     system("pause");
//     return 0;
// }

// updation of the length

// #include <iostream>
// using namespace std;

// class length
// {
// private:
//     int len;

// public:
//     length(int l)
//     {
//         len = l;
//     }
//     void setlength(int d){
//         len=d;
//     }
// };

// int main()
// {
//     length l1(10);
//     //length updated
//     l1.setlength(5);
//     system("pause");
//     return 0;
// }

// check if it is vowel or consonent

// #include <iostream>
// using namespace std;

// class character
// {
// private:
//     char ch;

// public:
//     character()
//     {
//         char c;
//         cout << "Enter a character : ";
//         cin >> c;
//         ch = c;

//         check();
//     }
//     void check()
//     {
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
//         {
//             cout << "It is vowel" << endl;
//         }
//         else
//         {
//             cout << "It is consonant" << endl;
//         }
//     }
// };
// int main()
// {
//     character ();
//     system("pause");
//     return 0;
// }

// check prime or not

// #include <iostream>
// using namespace std;

// class number
// {
//     int num;

// public:
//     number()
//     {
//         int n;
//         cout << "Enter any number : ";
//         cin >> n;
//         num = n;
//         int check=checkifprime();
//         if (check)
//         {
//             cout << "It is prime" << endl;
//         }
//         else
//         {
//             cout << "It is not prime" << endl;
//         }
//     }

//     bool checkifprime()
//     {
//         int i;
//         if (num <= 1)
//         {
//             return false;
//         }
//         if (num <= 3)
//         {
//             return true;
//         }
//         if (num % 2 == 0 || num % 3 == 0)
//         {
//             return false;
//         }
//         for (i = 5; i * i <= num; i = i + 6)
//         {
//             if (num % i == 0 || num % (i + 2) == 0)
//             {
//                 return false;
//             }
//         }
//         return true;
//     }
// };
// int main()
// {
//     number();
//     cout << "\n";
//     system("pause");
//     return 0;
// }

// program on static member p1

// #include <iostream>
// using namespace std;

// class number
// {
// private:
//     int a;
//     int b;

// public:
//     static int count;
//     number(int num1, int num2)
//     {
//         a = num1;
//         b = num2;
//         count++;
//     }
// };
// int number::count=10;
// int main()
// {
//     cout<<"the value of count before object creation is : "<< number::count<<endl;
//     number n1(5,6);
//     cout<<"the value of count after object creation is : "<< number::count<<endl;
//     system("pause");
//     return 0;
// }

// p2

#include <iostream>
using namespace std;

class number
{
private:
    int a;
    int b;

public:
    static int count=10;
    number(int num1, int num2)
    {
        a = num1;
        b = num2;
        count++;
    }
    int getcount();
};
int number::getcount()
{
    return number::count;
}
int main()
{
    cout << "the value of count before object creation is : " << number::getcount() << endl;
    number n1(5, 6);
    cout << "the value of count after object creation is : " << number::getcount() << endl;
    system("pause");
    return 0;
}


