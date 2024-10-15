#pragma once
#include <iostream>

class Node {
    public:

    int data;
    Node *next;

    Node() : data(0), next(nullptr) {}
    Node(int data) : data(data), next(nullptr) {}
    Node(int data, Node *next) : data(data), next(next) {}
};

class Stack {
    private:
        Node *front;
        Node *tail;

    public:
        Stack() : front(nullptr), tail(nullptr) {}

        void push(int data);
        bool pop();
        bool peek(int &data);
        void display(std::ostream &os);

};
