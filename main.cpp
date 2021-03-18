#include <iostream>

using namespace std;
#include <time.h>

void GUI(int index){ // function for calculating and outputting GUI
    if(index%3 == 0 && index%5 == 0) //if index is divisible by 3 and 5
        cout << "MustangBronco" << endl;
    else if(index%3 == 0) // if index is divisible only by 3
        cout << "Mustang " << endl;
    else if(index%5 == 0) // if index is divisible only by 5
        cout << "Bronco" << endl;
    else // if index is divisible by neither 3 or 5
        cout << index << endl;

}
int main()
{
    srand (time(NULL));
    int UserIndex = 0;
    GUI(3); // tests to see if code works on known divisible and non divisible numbers
    GUI(5);
    GUI(30);
    GUI(7);
    GUI(75);
    for(int i = 0; i < 10; i++) // random tests to see if code will work
    {
        UserIndex = rand() % 100 + 1;
        GUI(UserIndex);
    }
    while (UserIndex != -1)
    {
        cout << "Please enter a number (-1 to end)" << endl;
        cin >> UserIndex;
        GUI(UserIndex);
    }
    return 0;
}
