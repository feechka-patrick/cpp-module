#include <sstream>
#include <iostream>

using namespace std;

int main()
{
    string s = "123 456";

    istringstream ss(s);
    int a, b;
    ss >> a >> b;

    ostringstream os;
    os << a + 1 << " " << b + 1;
    s = os.str();
    cout << s;
}