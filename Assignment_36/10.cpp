// 10. Create a railways ticket counter and allot ticket to first come first take using c++ STL

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    cout << "Enter how many tickets are available : ";
    cin >> n;
    queue<string> q;
    for (int i = 1; i <= n; ++i)
    {

        cout << "\nEnter the name : ";
        string s;
        cin >> s;
        q.push(s);
        cout << q.back() << " has entered in queue at  " << i << " position " << endl;
        if (i == n)
            cout << "\nall tickets are sold" << endl;
    }
    cout<<"\n=============================================\n";
    while (!q.empty()) 
    {
        auto front = q.front(); 
        cout << "\nThe person who get out of queue : ";
        cout << front << '\n'; 
        q.pop();               
    }
    return 0;
}