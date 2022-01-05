// C++ program to illustrate Stack in STL

#include<iostream>
#include<stack>

using namespace std;

int main()
{
    // Creating a Stack using STL
    stack<int> s;

    // The push function inserts elements at the top of Stack
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(99);

    //     ******
    //     * 30 *  <- Stack TOP
    //     * 20 *
    //     * 10 *
    //     ******

    // While stack is not empty
    while(!s.empty())
    {
        // Print top element
        cout<<s.top()<<" ";

        // Pop top element
        s.pop();
    }

//    cout<<s.size()<<endl;
//    cout<<s.top()<<endl;

//    s.pop();

//    cout<<s.top();
return 0;
}
