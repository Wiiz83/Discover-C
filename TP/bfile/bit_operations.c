#include "bit_operations.h"

int get_bit(int variable, int decalage) {
    return (variable >> decalage) &1;
}
int set_bit(int variable, int decalage) {
    return variable | (1 << (decalage - 1));
}
int clr_bit(int variable, int decalage) {
    return variable & ~(1 << (decalage - 1));
}

