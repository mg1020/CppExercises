#include <iostream>

using namespace std;

int main()
{
    double cel, fahr;
    cout << "introduceti temperatura in Celsius: " << endl;
    cin >>cel;
    fahr= cel/(5./9)+32;
    cout << "In fahrenheit temperatura este: "<<fahr<<endl;

    return 0;
}

