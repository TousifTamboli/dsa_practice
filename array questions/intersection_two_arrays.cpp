#include <iostream>
#include <vector>

using namespace std;

vector<int> interSection(const vector<int> &nums1, const vector<int> &nums2)
{
    int i = 0;
    int j = 0;

    vector<int> intersectArr;

    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] < nums2[j])
        {
            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            j++;
        }
        else
        {
            intersectArr.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    return intersectArr;
}

int main()
{
    vector<int> nums1 = {1, 1, 2, 3, 4};
    vector<int> nums2 = {2, 4, 6};

    vector<int> result = interSection(nums1, nums2);

    cout << "The Intersection array is : ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
