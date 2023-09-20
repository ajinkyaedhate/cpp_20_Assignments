// 8. Efficiently implement k Queues in a single array.

#include <iostream>
#include <vector>

using namespace std;

class KQueues {
private:
    int* arr;        // Array to hold queue elements
    int* front;      // Array to store front indices of queues
    int* rear;       // Array to store rear indices of queues
    int* next;       // Array to store the next index for each element
    int freeIdx;     // Index of the first free slot in the array
    int n, k;        // Total array size and number of queues

public:
    KQueues(int totalSize, int numQueues) : n(totalSize), k(numQueues) {
        arr = new int[n];
        front = new int[k];
        rear = new int[k];
        next = new int[n];

        for (int i = 0; i < k; ++i) {
            front[i] = rear[i] = -1;
        }

        freeIdx = 0;
        for (int i = 0; i < n - 1; ++i) {
            next[i] = i + 1;
        }
        next[n - 1] = -1;  // End of array
    }

    bool isFull() {
        return (freeIdx == -1);
    }

    bool isEmpty(int queueNum) {
        return (front[queueNum] == -1);
    }

    void enqueue(int queueNum, int value) {
        if (isFull()) {
            cout << "Queue is full." << endl;
            return;
        }

        int idx = freeIdx;
        freeIdx = next[idx];

        if (isEmpty(queueNum)) {
            front[queueNum] = rear[queueNum] = idx;
        } else {
            next[rear[queueNum]] = idx;
            rear[queueNum] = idx;
        }

        arr[idx] = value;
        next[idx] = -1;
    }

    int dequeue(int queueNum) {
        if (isEmpty(queueNum)) {
            cout << "Queue " << queueNum << " is empty." << endl;
            return -1;  // Assuming -1 represents an invalid value
        }

        int idx = front[queueNum];
        front[queueNum] = next[idx];

        next[idx] = freeIdx;
        freeIdx = idx;

        return arr[idx];
    }

    ~KQueues() {
        delete[] arr;
        delete[] front;
        delete[] rear;
        delete[] next;
    }
};

int main() {
    int totalSize = 10;
    int numQueues = 3;
    KQueues kq(totalSize, numQueues);

    kq.enqueue(0, 1);
    kq.enqueue(1, 2);
    kq.enqueue(2, 3);
    kq.enqueue(0, 4);

    cout << kq.dequeue(1) << endl;
    cout << kq.dequeue(0) << endl;
    cout << kq.dequeue(2) << endl;

    return 0;
}
