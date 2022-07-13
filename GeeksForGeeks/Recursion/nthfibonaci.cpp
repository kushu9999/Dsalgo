#include<bits/stdc++.h>
using namespace std;

class Stacks
{
    public:
        int i = 0;
        int arr[10];

    void push(int value)
    {
        arr[i++] = value;
    }

    void top()
    {
        cout<<arr[i-1]<<endl;;
    }

    void pop()
    {
        i--;

    }

    void size()
    {
        cout<<i+1<<endl;
    }
};

int main()
{


    Stacks st;
    st.push(13);
    st.push(11);
    st.top();
    st.pop();
    st.top();
    st.push(15);
    st.top();
    st.size();
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);
// \
//     // for(auto i: st) cout<<st.top();
//     cout<<st.size()<<endl;
//     cout<<st.top()<<endl;
//     st.pop();
//     cout<<st.top()<<endl;
//     cout<<st.empty()<<endl;
    
    return 0;
}