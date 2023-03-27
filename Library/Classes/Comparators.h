#ifndef C_PLUS_PLUS_COMPARATORS_H
#define C_PLUS_PLUS_COMPARATORS_H

struct CrescentComparator {
    bool operator()(int a, int b) const {
        return a < b; // menor valor, maior prioridade
    }
};

struct DecrescentComparator {
    bool operator()(int a, int b) const {
        return a > b; // maior valor, maior prioridade
    }
};

#endif //C_PLUS_PLUS_COMPARATORS_H
