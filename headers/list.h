#ifndef LIST_H
#define LIST_H
#include <stdexcept>
#include "listiterator.h"

template <typename T>
class List {
private:

    T* data;
    size_t size = 0;
    size_t capacity = 1;

    void resize(size_t newCapacity) {
        T* newData = new T[newCapacity];
        for (size_t i = 0; i < size; ++i) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
        capacity = newCapacity;
    }

public:
    List() {
        data = new T[capacity];
    }

    List(const List& other) : size(other.size), capacity(other.capacity) {
        data = new T[capacity];
        for (size_t i = 0; i < size; ++i) {
            data[i] = other.data[i];
        }
    }

    ~List() {
        delete[] data;
    }

    List& operator=(const List& other) {
        if (this != &other) {
            delete[] data;
            size = other.size;
            capacity = other.capacity;
            data = new T[capacity];
            for (size_t i = 0; i < size; ++i) {
                data[i] = other.data[i];
            }
        }
        return *this;
    }

    void append(const T& value) {
        if (size >= capacity) {
            resize(capacity + 1);
        }
        data[size++] = value;
    }

    ListIterator<T> begin() {
        return data;
    }

    ListIterator<T> end() {
        return data + size;
    }

    const ListIterator<T> begin() const{
        return data;
    }

    const ListIterator<T> end() const{
        return data + size;
    }

    bool empty() const {
        return size == 0;
    }

    void pop() {
        if (empty()) {
            throw std::out_of_range("List is empty");
        }
        --size;
    }

    void deleteAt(size_t index) {
        if (index >= size) {
            throw std::out_of_range("Index out of range");
        }
        for (size_t i = index; i < size - 1; ++i) {
            data[i] = data[i + 1];
        }
        --size;
    }

    size_t getSize() const {
        return size;
    }

    T& operator[](size_t index) {
        if (index >= size) {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }

    const T& operator[](size_t index) const {
        if (index >= size) {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }
};

#endif // LIST_H
