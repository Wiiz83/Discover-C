#include "bit_operations.h"

int get_bit(int value, int position) {
    return (value >> position) & 1;
}

int set_bit(int value, int position) {
    return value | (1 << position);
}

int clr_bit(int value, int position) {
    return value & ~(1 << position);
}
