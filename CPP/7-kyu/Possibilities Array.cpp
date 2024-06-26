/*
    A non-empty array a of length n is called an array of all possibilities if it contains all numbers between 0 and a.length - 1 (both inclusive).

Write a function that accepts an integer array and returns true if the array is an array of all possibilities, else false.

Examples:

[1,2,0,3] => True
# Includes all numbers between 0 and a.length - 1 (4 - 1 = 3)

[0,1,2,2,3] => False
# Doesn't include all numbers between 0 and a.length - 1 (5 - 1 = 4)

[0] => True
# Includes all numbers between 0 and a.length - 1 (1 - 1 = 0).

*/

#include <vector>
#include <algorithm>

bool isAllPossibilities(std::vector<int> arr)
{
    sort(arr.begin(), arr.end());
    int len = arr.size();

    if (arr[len - 1] != len - 1)
    {
        return false;
    }

    for (int i = 0; i < len - 1; ++i)
    {
        if (arr[i + 1] - arr[i] != 1)
        {
            return false;
        }
    }

    return true;
}
