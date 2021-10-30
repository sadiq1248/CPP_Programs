
#include <iostream>
using namespace std;

namespace A
{
    int a = 5;
    int b = 10;
};
namespace A 
{
    int c = 5;
    int d = 10;
}


int main()
{
    cout <<" a = " << A::a << endl;
    cout <<" b = " << A::b << endl;
    return 0;
}
