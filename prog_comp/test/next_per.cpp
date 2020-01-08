#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v{1, 2, 4};

    do
    {
        for (int i = 0; i < (int)v.size(); i++)
        {
            if (i)
                cout << " ";
            cout << v[i];
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));

    return 0;
}