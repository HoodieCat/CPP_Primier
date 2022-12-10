#include <iostream>
int main()
{
    int i, sum = 0;
    // win cin 结束符号 ctrl+z +enter  linux 结束符号 ctrL+d和 终端的退出一样
    while (std::cin >> i)
    {
        sum += i;
    }
    std::cout << sum << std::endl;
    return 0;
}
