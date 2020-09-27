// LINK = https://www.hackerrank.com/challenges/angry-children/problem

int maxMin(int k, vector<int> arr)
{
    sort(arr.begin(), arr.end());
    int result = INT_MAX, unfairness = 0;
    for (int i = 0; i < arr.size() - k + 1; i++)
    {
        unfairness = arr[i + k - 1] - arr[i];
        result = min(result, unfairness);
    }
    return result;
}
