#include <iostream>
#include <string>

using namespace std;

/*
Make a program where you enter the height of a pyramid
and the program will print out that pyramid.

For example, if I was to type 5, it would show
    
    *
   ***
  *****
 *******
*********

If I was to type 3 it would show
   *
  * *
* * * *

*/
int main()
{
    int num = 0;
    cout << "Type an integer: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
        {
            cout << " ";
        }

        for (int star = 1; star <= (i * 2) - 1; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}