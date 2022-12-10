#include <iostream>
int main()
{
    int sum = 0;
    int i = 0;
    while (i < 11)
    {
        sum = sum + i;
        ++i;
    }
    std::cout << "the sum is " << sum << std::endl;
    system("pause");
    return 0;
}
