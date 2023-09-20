// 7. Returns a reverse iterator which points to the last element of the deque (i.e., its reverse
// beginning).

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> myDeque = {10, 20, 30, 40, 50};

    deque<int>::reverse_iterator rIter = myDeque.rbegin();

    cout << "Last element using reverse iterator: " << *rIter << endl;

    return 0;
}
