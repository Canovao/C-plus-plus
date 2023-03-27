#include <iostream>
#include "../Classes/PriorityQueue.h"
#include "../Classes/Comparators.h"

int main(){
    PriorityQueue<std::string, DecrescentComparator> q;

    q.addItem({"task1", 1});
    q.addItem({"task2", 2});
    q.addItem({"task3", 0});
    q.addItem({"task4", 3});

    std::cout << "Items in the queue: " << std::endl;
    for(const auto& item: q.getItems()){
        std::cout << item.first << " (" << item.second << ")" << std::endl;
    }

    while(q.size() != 0) {
        auto highest = q.runQueue();
        std::cout << "Highest priority item: " << highest.first << " (" << highest.second << ")" << std::endl;
    }

    return 0;
}
