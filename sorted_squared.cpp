#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

vector<int> sorted_squared(const vector<int> &a)
{
    vector<int> initArray(a.size(), 0);
    int smallerValueIdx = 0;
    int largeValueIdx = a.size() - 1;
    int resultIdx = a.size() - 1;

    while (smallerValueIdx <= largeValueIdx)
    {
        int smallerValue = abs(a[smallerValueIdx]);
        int largeValue = abs(a[largeValueIdx]);

        if (smallerValue > largeValue)
        {
            initArray[resultIdx] = smallerValue * smallerValue;
            smallerValueIdx++;
        }
        else
        {
            initArray[resultIdx] = largeValue * largeValue;
            largeValueIdx--;
        }

        resultIdx--;
    }

    return initArray;
}

int main()
{
    int n;
    cout << "size of array: ";
    cin >> n;
    vector<int> arr(n);

    cout << "array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> result = sorted_squared(arr);

    for (int i = 0; i < n; i++)
    {
        cout << "sorted_squared[" << i << "]: " << result[i] << endl;
    }

    return 0;
}
