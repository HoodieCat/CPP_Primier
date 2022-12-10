#include <iostream>
int main()
{
    int sum = 0;
    int i = 50;
    while (i < 101)
    {
        sum = sum + i;
        ++i;
    }
    std::cout << "the sum is " << sum << std::endl;
    system("pause");
    return 0;
}
