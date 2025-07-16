/*Maximum Consecutive Ones*/

#include<iostream>
using namespace std;

int consecutiveOnes(int n, int arr[])
{
    int maxCount = 0, currentCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            currentCount++;
        }
        else
        {
            if (currentCount > maxCount)
            {
                maxCount = currentCount;
            }
            currentCount = 0;
        }
    }

    // Final check to update maxCount if the array ends with a sequence of 1's
    if (currentCount > maxCount)
    {
        maxCount = currentCount;
    }

    return maxCount;
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array (max 10): ";
    cin >> n;

    // Input validation
    if (n < 1 || n > 10)
    {
        cout << "Number of elements must be between 1 and 10." << endl;
        return 1;
    }

    int arr[10];
    cout << "Enter the array elements (0 or 1 only): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // Input validation
        if (arr[i] != 0 && arr[i] != 1)
        {
            cout << "Invalid input. Please enter only 0 or 1." << endl;
            return 1;
        }
    }

    cout << "Array elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int result = consecutiveOnes(n, arr);
    cout << "Maximum number of consecutive 1's: " << result << endl;

    return 0;
}
