#include <iostream>
using namespace std;
class Stack 
{
    const static int  SIZE = 5;
    int buffer[SIZE];
    int topIndex = -1;
public :
    void push(int ele)
    {
        if(topIndex == SIZE - 1)
            cout <<"Stack Overflow \n";
        else
        {
            topIndex++;
            buffer[topIndex] = ele;
        }
    }
    int pop()
    {
        if(topIndex == -1)
        {
            cout <<"Stack Underflow \n";
            return -1;
        }
        return buffer[topIndex--];
    }
};
int main()
{
    Stack s;
    int ch;
    int ele;
    for(;;)
    {
        cout <<"1. Push 2. Pop \n";
        cin >> ch;
        switch(ch)
        {
        case 1 : cout <<"Enter the element to insert : ";
                 cin >> ele;
                 s.push(ele);
                 break;
        case 2 : cout << s.pop() << endl;
                 break;
        default : return 0;
        }
    }
    return 0;
}
