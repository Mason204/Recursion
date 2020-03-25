/*
Mason Henry
Data Structures
Due: 3/26/20
Use recursion to flip a stack.
*/
 
#include <iostream>
#include "Stack.h"

using namespace std;

//Pre: Two stack objects in the function argument have to be created.
//Post: The item order has been flipped into a different list. 
void Recursionflip(Stack& list1, Stack& flip);

int main()
{
    //Creates the two stacks.
    Stack list1;
    Stack flip;
    //Adds items into first stack.
    list1.Push(42);
    list1.Push(44);
    list1.Push(2);

    Recursionflip(list1, flip);
    //Outputs the new order of the list.
    cout << flip.Top() << endl;
    flip.Pop();
    cout << flip.Top() << endl;
    flip.Pop();
    cout << flip.Top();

    return 0;
}

void Recursionflip(Stack& list1, Stack& flip)
{
    //Inserts the top item from the first list onto the second
    flip.Push(list1.Top());
    //Removes the top item of the first list.
    list1.Pop();
    //If the list isn't empty calls the function again.
    if (list1.IsEmpty() == false)
        Recursionflip(list1, flip);

}