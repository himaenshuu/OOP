#include <iostream>
using namespace std;
class employee
{
public:
    string name;
    int salary;

    employee(string n, int s)
    {
        this->name = n;
        this->salary = s;
    }

    void printdetails()
    {
        cout << "The name of the employee is " << this->name << " and his salary is " << this->salary << " dollars" << endl;
    }
};
int main()
{
    string n;
    int s;
    cout<<"Enter employee name and salary "<<endl;
    cin>>n>>s;
    employee him(n,s);
    him.printdetails();
    return 0;
