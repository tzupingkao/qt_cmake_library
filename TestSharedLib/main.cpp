#include <iostream>
#include "mysharedlib.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    hello();
    cout << "1 + 2 = " << sum(1,2) << endl;
    cout << "1 + 2 + 3 = " << sum(1,2,3) << endl;


    return 0;
}
