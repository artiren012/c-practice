//
//  12-calories-calculate.c
//  c-study
//

#include <stdio.h>

struct food {
    char name[100];
    int calories;
};

int calc_total_calroies(struct food foods[], int size) {
    int total_calroies = 0;
    for (int i = 0; i < size; i++) {
        total_calroies += foods[i].calories;
    }
    return total_calroies;
}

int main(void) {
    struct food food_array[3] = { { "hambuger", 900 }, { "bulgogi", 500 }, { "sushi", 700 } };
    int total = calc_total_calroies(food_array, 3);
    printf("총 칼로리=%d\n\n", total);
    return 0;
}
