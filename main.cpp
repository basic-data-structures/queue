#include "Queue.h"

int main() {
    Queue<int> q;
    for (int i = 0; i < 10; ++i) {
        q.enqueue(i+1);
    }
    q.showElements();
    return 0;
}
