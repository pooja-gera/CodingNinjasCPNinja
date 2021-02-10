#include <iostream>
using namespace std;
int main()
{

    // Write your code here
    int N;
    cin >> N;
    int *arr = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int currentprofit, maxprofit;
    currentprofit = 0;
    maxprofit = currentprofit;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            currentprofit = arr[j] - arr[i];
            if (currentprofit > maxprofit)
            {
                maxprofit = currentprofit;
            }
            currentprofit = 0;
        }
    }

    cout << maxprofit;
}