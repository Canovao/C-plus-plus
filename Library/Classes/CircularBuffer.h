#ifndef C_PLUS_PLUS_CIRCULARBUFFER_H
#define C_PLUS_PLUS_CIRCULARBUFFER_H

#include <list>
#include <stdexcept>

template<typename T>
class CircularBuffer {
private:
    std::list<T> data;
    typename std::list<T>::iterator iterator;
    int maxSize{};
public:
    explicit CircularBuffer(int size) : maxSize(size) {}
    explicit CircularBuffer(int size, std::list<T> data) : maxSize(size), data(data) {}

    void add(T content) {
        if (data.size() == this->maxSize) {
            data.pop_back();
        }
        data.push_front(content);
    }

    std::list<T> getAllContent() const { return data; }

    T getFront() {
        if (data.empty()) {
            throw std::logic_error("Buffer is empty");
        }
        return data.front();
    }

    int size() const { return data.size(); }

    void clear() { data.clear(); }
};

#endif //C_PLUS_PLUS_CIRCULARBUFFER_H
