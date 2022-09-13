#include <iostream>
using namespace std;

class nStacks
{
    int *arr;
    int *top;
    int size;
    int num_stacks;

public:
    nStacks(int num_stacks, int size)
    {
        this->num_stacks = num_stacks;
        this->size = size;
        arr = new int[num_stacks * size];
        top = new int[num_stacks];

        for (int i = 0; i < num_stacks; i++)
        {
            top[i] = -1 + i * size;
        }
    }

    void push(int stack_num, int d)
    {
        if (top[stack_num] < -1 * (num_stacks + 1) * size)
        {
            top[stack_num]++;
            arr[top[stack_num]] = d;
        }
        else
        {
            cout << "overflow in Stack " << stack_num << endl;
            return;
        }
    }

    void pop(int stack_num)
    {
        if (top[stack_num] > -1 + stack_num * size)
        {
            cout << "popped" << arr[top[stack_num]] << endl;
            top[stack_num]--;
        }
        else
        {
            cout << "underflow in stack " << stack_num << endl;
            return;
        }
    }

    void peek(int stack_num)
    {
        if (top[stack_num] > -1 + stack_num * size)
        {
            cout << "top element if stack " << stack_num << "is: " << arr[top[stack_num]] << endl;
        }
        else
        {
            cout << "No element in stack " << stack_num << endl;
        }
    }
};

int main()
{
    nStacks A(3, 2);
    A.pop(0);
    A.pop(1);
}