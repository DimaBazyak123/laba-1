#include <stdio.h>

int main() {
    int t1, t2, t3;
    scanf("%d %d %d", &t1, &t2, &t3);

    double total_time = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;
    double time_to_eat_pie = 1.0 / total_time;

    printf("Час для зїдання пирога:%.2f годин", time_to_eat_pie);

    return 0;
}