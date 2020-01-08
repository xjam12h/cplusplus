#include <iostream>

using namespace std;

int X[20][20];
int Y[20][20];
int A[20];

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);
/*
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        for (int j = 0; j < A[i]; j++)
        {
            cin >> X[i][j] >> Y[i][j];
            X[i][j]--;
        }
        cout<<"test"<<endl;
    }

*/
int ans=0;
for(int bit=0;bit<(1<<4);bit++){
    cout<<bit<<endl;
    bool isOK=true;
    for(int i=0;i<4;i++){
        int a=bit&(1<<i);
        cout<<a<<" ";
    }
    cout<<""<<endl;
}


}