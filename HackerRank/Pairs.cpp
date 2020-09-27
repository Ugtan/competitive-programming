// Determine the number of pairs of array elements that have a difference equal to a target value.
// LINK =

int pairs(int k, vector<int> arr)
{
    int count = 0;
    unordered_map<int, int> mp;
    for (auto i = 0; i < arr.size(); i++)
        mp[arr[i]] = i;
    for (auto i = 0; i < arr.size(); i++)
    {
        if (mp.find(arr[i] - k) != mp.end())
            count++;
    }
    return count;
}