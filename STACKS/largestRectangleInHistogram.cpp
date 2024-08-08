#include <stack>

vector<int> nextMinElement(vector<int> arr, int n)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        int temp = arr[i];
        while (st.top() != -1 && arr[st.top()] >= temp)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

vector<int> prevMinElement(vector<int> arr, int n)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        while (st.top() != -1 && arr[st.top()] >= temp)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

int largestRectangle(vector<int> &heights)
{
    int n = heights.size();
    vector<int> next(n);
    next = nextMinElement(heights, n);
    vector<int> prev(n);
    prev = prevMinElement(heights, n);
    int area = -1;
    for (int i = 0; i < n; i++)
    {
        int l = heights[i];
        if (next[i] == -1)
        {
            next[i] = n;
        }
        int b = next[i] - prev[i] - 1;
        int newArea = l * b;
        area = max(newArea, area);
    }
    return area;
}