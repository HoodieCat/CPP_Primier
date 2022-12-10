#include <iostream>
using namespace std;
int main()
{
    int value = 0, current = 0;
    int end = 0;
    if (cin >> value)
    {
        int cnt = 1;
        while (cin >> current)
        {
            if (current == value)
                ++cnt;
            else
            {
                cout << value << "occurs" << cnt << " times" << endl;
                value = current;
                cnt = 1;
            }
        }
        cout << value << "occurs" << cnt << " times" << endl;
    }
    else
        cout << "no value input!" << endl;
    system("pause");
    return 0;
}
