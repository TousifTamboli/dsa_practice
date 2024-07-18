#include <iostream>
#include <vector>

using namespace std;

vector<int> unionOfSortedArray(const vector<int> &arr1, const vector<int> &arr2)
{

    vector<int> unionArr;
    int i = 0;
    int j = 0;

    // iterate till one of the array is empty
    while (i < arr1.size() && j < arr2.size())
    {
        // check smallest of both arrays & push elements in unionarr from first array
        if (arr1[i] < arr2[j])
        {
            if (unionArr.empty() || unionArr.back() != arr1[i])
            {
                unionArr.push_back(arr1[i]);
            }
            i++;
        }

        // check smallest of both arrays & push elements in unionarr from second array
        else if (arr1[i] < arr2[j])
        {
            if (unionArr.empty() || unionArr.back() != arr1[j])
            {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
        // if both array elements are same push one of them
        else
        {
            if (unionArr.empty() || unionArr.back() != arr1[i])
            {
                unionArr.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    // push remaining elements from array 1
    while (i < arr1.size())
    {
        if (unionArr.empty() || unionArr.back() != arr1[i])
        {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }

    // push remaining elements from array
    while (j < arr2.size())
    {
        if (unionArr.empty() || unionArr.back() != arr2[j])
        {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }

    return unionArr;
}

int main()
{
    vector<int> arr1 = {1, 1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 4, 4, 5, 6};

    vector<int> result = unionOfSortedArray(arr1, arr2);

    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}