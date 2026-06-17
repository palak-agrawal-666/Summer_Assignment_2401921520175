#include <stack>
using namespace std;

class MinStack
{
public:
    stack<long long> st;
    long long mini;

    MinStack()
    {
        mini = LLONG_MAX;
    }

    void push(int val)
    {
        long long x = val;

        if (st.empty())
        {
            mini = x;
            st.push(x);
        }
        else if (x < mini)
        {
            st.push(2 * x - mini);
            mini = x;
        }
        else
        {
            st.push(x);
        }
    }

    void pop()
    {
        long long x = st.top();
        st.pop();

        if (x < mini)
        {
            mini = 2 * mini - x;
        }
    }

    int top()
    {
        long long x = st.top();

        if (x < mini)
            return mini;

        return x;
    }

    int getMin()
    {
        return mini;
    }
};