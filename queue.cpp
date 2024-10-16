#include <iostream>
#include "queue.h"


    void Stack::push(int data) {
        // create a Node, storing the given data
        Node *tmp = new Node(data);

        // check if the queue is empty
        if (front == nullptr) {
            // if queue is empty, set new node to the front
            front = tmp;
        // queue is not empty
        } else {
            // set new node after the current tail node
            tail->next = tmp;
        }

        // make the tail the new node
        tail = tmp;
    }

    bool Stack::pop() {
        // if queue is empty
        if (front == nullptr) {
            // return false (empty)
            return false;
        }

        // create a new node and set it to the top node (front)
        Node *tmp = front;
        // point the front to the next node
        front = front->next;

        // if the front node is empty
        if (front == nullptr) {
            // tail will also be empty, since a null front node means an empty queue.
            tail == nullptr;
        }
        // delete tmp, freeing the memory of the poped node
        delete tmp;
        // return
        return true;
    }

    bool Stack::peek(int &data) {
        if (front == nullptr) {
            return false;
        }
        // retrieve data from the front node
        data = front->data;
        return true;
    }

    void Stack::display(std::ostream &os) {
        Node *tmp = front;
        os << "top(front)->     ";
        while (tmp != nullptr) {
            os << tmp->data << " ";
            tmp = tmp->next;
        }
        std::cout << "      <-tail(rear)" << std::endl;
    }
