#include <iostream>
#include <queue>

int main() {

    std::queue<int> queue;

    // Pushing elements into the queue
    queue.push(10);
    queue.push(20);
    queue.push(30);

    // Accessing the front element of the queue
    std::cout << "Front element: " << queue.front() << std::endl;

    // Removing the front element from the queue
    queue.pop();

    // Checking if the queue is empty
    if (queue.empty()) {
        std::cout << "The queue is empty." << std::endl;
    } else {
        std::cout << "The queue is not empty." << std::endl;
    }

    // Getting the size of the queue
    std::cout << "Queue size: " << queue.size() << "." << std::endl;

    return 0;
}
