/*
Mason Henry
Data Structures
Due: 3/26/20
Use recursion to flip a stack.
*/
 
#include <iostream>
#include "Stack.h"

using namespace std;

void Recursionflip(Stack& list1, Stack& flip);

int main()
{
    Stack list1;
    Stack flip;

    list1.Push(42);
    list1.Push(44);
    list1.Push(2);

    Recursionflip(list1, flip);
    cout << flip.Top() << endl;
    flip.Pop();
    cout << flip.Top() << endl;
    flip.Pop();
    cout << flip.Top();

    return 0;
}

void Recursionflip(Stack& list1, Stack& flip)
{
    flip.Push(list1.Top());
    list1.Pop();
    if (list1.IsEmpty() == false)
        Recursionflip(list1, flip);

}