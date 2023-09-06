#include <iostream>
using namespace std;

bool validate_subsequence(string s, string t)
{
    int sidx = 0;
    int tidx = 0;
    for (char value : t)
    {
        if (value == s[sidx])
        {
            sidx++;
        }
    }
    return (sidx == s.size());
}

int main()
{
    string subsequnce, array;
    cout << "array: ";
    cin >> array;
    cout << "subsequence: ";
    cin >> subsequnce;
    cout << "result: " << validate_subsequence(subsequnce, array);
}