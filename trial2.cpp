#include <iostream>
using namespace std;
int count = 0;
class number
{
public:
    number()
    {
        count++;
        cout << "count is : " << count << endl;
        
    }
    ~number(){
        cout << "count is : " << count << endl;
        count--;
    }
};
int main()
{
    number n1,n2,n3;
    system("pause");
    return 0;
}
