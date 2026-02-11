#include <iostream>
using namespace std;
int result(int, int);
int result(int, int, int);
int result(int, int, int, int);
int result(int, int, int, int, int);
int main()
{

    cout << "\nresult of 2 subject: " << result(45, 58);
    cout << "\nresult of 3 subject: " << result(57, 68, 95);
    cout << "\nresult of 4 subject: " << result(78, 49, 65, 77);
    cout << "\nresult of 5 subject: " << result(47, 69, 84, 56, 75);

    return 0;
}
int result(int a, int b)
{
    return (a + b);
}
int result(int a, int b, int c)
{
    return (a + b + c);
}
int result(int a, int b, int c, int d)
{
    return (a + b + c + d);
}
int result(int a, int b, int c, int d, int e)
{
    return (a + b + c + d + e);
}