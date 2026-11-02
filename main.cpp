#include <cstdio>
#include "game.h"

int main(void)
{
    int attackPower = PlayerAttack();
    int enemyHp = EnemyHp();
    int defensePower = 5;
    int damage = CalculateDamage(attackPower, defensePower);
    int remainingHp = enemyHp - damage;

    if (remainingHp < 0) {
        remainingHp = 0;
    }

    std::printf("Attack: %d\n", attackPower);
    std::printf("Enemy HP: %d\n", enemyHp);
    std::printf("Defense: %d\n", defensePower);
    std::printf("Damage: %d\n", damage);
    std::printf("Remaining HP: %d\n", remainingHp);
    std::printf("Reward: %d\n", RewardPoints());
    std::printf("Damage(10, 3): %d\n", CalculateDamage(10, 3));
    std::printf("Damage(2, 10): %d\n", CalculateDamage(2, 10));
    std::printf("Damage(0, 0): %d\n", CalculateDamage(0, 0));

    return 0;
}
