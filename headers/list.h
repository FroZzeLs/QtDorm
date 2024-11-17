#ifndef LIST_H
#define LIST_H
#include <stdexcept>
#include <cstddef>

template <typename T>
class List {
private:

    T* data;
    size_t size;
    size_t capacity;

    void resize(size_t new_capacity) {
        T* new_data = new T[new_capacity];
        for (size_t i = 0; i < size; ++i) {
            new_data[i] = data[i];
        }
        delete[] data;
        data = new_data;
        capacity = new_capacity;
    }

public:
    List() : size(0), capacity(1) {
        data = new T[capacity];
    }

    ~List() {
        delete[] data;
    }

    void append(const T& value) {
        if (size >= capacity) {
            resize(capacity * 2);
        }
        data[size++] = value;
    }

    T* begin() {
        return data;
    }

    T* end() {
        return data + size;
    }

    const T* begin() const{
        return data;
    }

    const T* end() const{
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
