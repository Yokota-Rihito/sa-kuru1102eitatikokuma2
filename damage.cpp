#include "game.h"

int CalculateDamage(int attackPower, int defensePower)
{
    int damage = attackPower - defensePower;
    if (damage < 1) {
        return 1;
    }
    return damage;
}
