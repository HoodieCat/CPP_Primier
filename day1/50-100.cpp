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
    int i, j, k;
    std::cout << "the sum is " << sum << std::endl;
    system("pause");
    return 0;
}
