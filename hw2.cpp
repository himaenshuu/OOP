#include <iostream>
using namespace std;
class wages
{
public:
    int grosspay(int basic, int hra, int da, int ta)
    {
        return basic + hra + da + ta;
    }
    int grosspay(int wageperhr, int time)
    {
        return wageperhr * time;
    }
    int grosspay(int amount)
    {
        return amount;
    }
};

int main()
{
    wages w1;
    cout << "1.Regular wages\n2.Daily wages\n3.Adhoc\nEnter your choice:" << endl;
    int choice, basic, hra, da, ta, wageperhr, time, amount;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        cout << "Enter the basic,hra,da and ta (in order)" << endl;
        cin >> basic >> hra >> da >> ta;
        cout << "Your Grosspay is : " << w1.grosspay(basic, hra, da,ta)<<" rupees"<<endl;
        break;
    }

    case 2:
    {
        cout << "enter the wage per hour and time " << endl;
        cin >> wageperhr >> time;
        cout << "Your Grosspay is : " << w1.grosspay(wageperhr, time)<<" rupees"<<endl;
        break;
    }
    case 3:
    {
        cout << "Enter the fixed amount do you get " << endl;
        cin >> amount;
        cout << "Your Grosspay is : " << w1.grosspay(amount)<<" rupees"<<endl;
        break;
    }
    default:
    {
        cout << "You have entered a wrong choice...!\n" << endl;
        main();
        break;
    }
        system("pause");
        return 0;
    }
}
