#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cmath>
using namespace std;
int main(void)
{
    set<int> st;
    vector<int> v;
    map<int, int> mp;

    double a[100][2] = {0}, max = -10000000, dis;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            dis = sqrt(abs(pow(a[i][0] - a[j][0], 2) + pow(a[i][1] - a[j][1], 2)));
            if (max <= dis)
            {
                max = dis;
            }
        }
    }
    cout << max << endl;

    return 0;
}
