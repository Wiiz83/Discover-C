#include "bit_operations.h"

//affiche la variable en binaire
int get_bit(int value, int pos) {
    return (value >> pos) & 1;
}

//met a 1 le bit 'nombre' de la variable
int set_bit(int value, int pos) {
    return value | (1 << pos);
}


//met a 0 le bit 'nombre' de la variable
int clr_bit(int value, int pos) {
    return value & ~(1 << pos);
}
