#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> two_number_sum(vector<int> a, int target)
{
    sort(a.begin(), a.end());
    int left = 0;
    int right = a.size() - 1;
    while (left < right)
    {
        int current_sum = a[left] + a[right];
        if (current_sum == target)
        {
            return {a[left], a[right]};
        }
        else if (current_sum > target)
        {
            right--;
        }
        else if (current_sum < target)
        {
            left++;
        }
    }
    return {};
}

int main()
{
    int n, a, target_sum;
    cout << "array_size= ";
    cin >> n;
    cout << "target_sum= ";
    cin >> target_sum;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    cout << endl;
    vector<int> result = two_number_sum(arr, target_sum);

    if (result.empty())
    {
        cout << "no pair found" << endl;
    }
    else
        for (int i = 0; i < n; i++)
        {
            if (result[0] == arr[i])
            {
                result[0] = i;
            }
            if (result[1] == arr[i])
            {
                result[1] = i;
            }
        }

    cout << "pos =[" << result[0] << "," << result[1] << "]";
}
