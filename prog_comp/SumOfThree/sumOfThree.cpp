#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int K, S, ans = 0, temp = 0;

    cin >> K >> S;

    for (int i = 0; i <= K; i++)
    {
        for (int j = 0; j <= K; j++)
        {
            if (i + j == S)
            {
                ans++;
            }
            else if ((i + j) < S && i <= K && j <= K && (S - (i + j) + 1) <= K)
            {
                ans += (S - (i + j) + 1);
            }
        }
    }
    cout << ans << endl;
    return 0;
}