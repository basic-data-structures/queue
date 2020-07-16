#include "Queue.h"

int main() {
    Queue<int> q;
    for (int i = 0; i < 11; ++i) {
        q.enqueue(i);
    }
    return 0;
}
