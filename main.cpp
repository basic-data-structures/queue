#include "Queue.h"

int main() {
    Queue<int> q;
    for (int i = 0; i < 10; ++i) {
        cout << "\tQueueing " << i + 1 << "...\n";
        q.enqueue(i + 1);
    }
    for (int i = 0; i < 10; ++i) {
        cout << "\tDequeueing " << q.peek() << "...\n";
        q.dequeue();
    }
    return 0;
}
