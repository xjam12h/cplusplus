#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

double dist(double x1, double x2, double y1, double y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main(void)
{
    int N;

    cin >> N;
    vector<int> v(N);
    for (int i; i < N; i++)
    {
        v[i] = i;
    }
    vector<double> x(N), y(N);

    for (int i = 0; i < N; i++)
    {
        cin >> x[i] >> y[i];
    }
    double sum = 0;
    double count = 0;
    do
    {
        for (int i = 0; i < N - 1; i++)
        {
            sum += dist(x[v[i]], x[v[i + 1]], y[v[i]], y[v[i + 1]]);
        }
        count++;

    } while (next_permutation(v.begin(), v.end()));

    double ans = sum / count;

    cout << fixed << setprecision(6) << ans << endl;
    return 0;
}