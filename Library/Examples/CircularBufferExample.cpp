#include <iostream>
#include <list>
#include "../Classes/CircularBuffer.h"

int main() {
    std::list<int> initialData = {1, 2, 3, 4, 5};
    CircularBuffer<int> buffer(5, initialData);

    buffer.add(6);
    buffer.add(7);

    std::cout << "Conteudo atual do buffer: ";
    for (auto data : buffer.getAllContent()) {
        std::cout << data << " ";
    }
    std::cout << std::endl;

    std::cout << "Topo do buffer: " << buffer.getFront() << std::endl;

    return 0;
}
