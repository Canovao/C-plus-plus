#ifndef C_PLUS_PLUS_PRIORITYQUEUE_H
#define C_PLUS_PLUS_PRIORITYQUEUE_H

#include <queue>
#include <list>
#include <stdexcept>

template<typename T, typename Comparator = std::less<int>>
class PriorityQueue{
private:
    std::list<std::pair<T, int>> items;
    Comparator comparator;
public:
    explicit PriorityQueue(std::list<std::pair<T, int>> items = std::list<std::pair<T, int>>{}, Comparator comparator = Comparator{}){
        this->items = items;
        this->comparator = comparator;
    }

    void addItem(std::pair<T, int> item){
        items.push_back(item);
    }

    std::list<std::pair<T, int>> getItems() const{
        return this->items;
    }

    std::pair<T, int> runQueue(){
        if (items.empty()) {
            throw std::logic_error("Queue is empty");
        }

        auto highest = items.begin();

        for (auto it = std::next(items.begin()); it != items.end(); ++it) {
            if (comparator(it->second, highest->second)) {
                highest = it;
            }
        }

        std::pair<T, int> result = *highest;
        items.erase(highest);

        return result;
    }

    int size(){
        return this->items.size();
    }

    void clear() const {
        this->items.clear();
    }
};

#endif //C_PLUS_PLUS_PRIORITYQUEUE_H
