#ifndef LISTITERATOR_H
#define LISTITERATOR_H
#include <cstddef>  // Для ptrdiff_t
#include <iterator> // Для std::iterator_traits
#include <compare>

template <typename T>
class ListIterator {
private:
    T* current;

public:
    using iterator_category = std::random_access_iterator_tag;
    using value_type = T;
    using difference_type = ptrdiff_t;
    using pointer = T*;
    using reference = T&;

    ListIterator(T* ptr) : current(ptr) {}

    reference operator*() {
        return *current;
    }

    pointer operator->() {
        return current;
    }

    ListIterator& operator++() {
        ++current;
        return *this;
    }

    ListIterator operator++(int) {
        ListIterator temp = *this;
        ++current;
        return temp;
    }

    ListIterator& operator--() {
        --current;
        return *this;
    }

    ListIterator operator--(int) {
        ListIterator temp = *this;
        --current;
        return temp;
    }

    ListIterator operator+(ptrdiff_t offset) const {
        return ListIterator(current + offset);
    }

    ListIterator operator-(ptrdiff_t offset) const {
        return ListIterator(current - offset);
    }

    difference_type operator-(const ListIterator& other) const {
        return current - other.current;
    }

    std::strong_ordering operator<=>(const ListIterator& other) const {
        return current <=> other.current; // Используем стандартный оператор <=> для указателей
    }

    bool operator!=(const ListIterator& other) const {
        return current != other.current;
    }

    bool operator==(const ListIterator& other) const {
        return current == other.current;
    }

    reference operator[](ptrdiff_t index) {
        return *(current + index);
    }
};
#endif // LISTITERATOR_H
