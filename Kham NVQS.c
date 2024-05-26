#include <stdio.h>
#define NUM_PEOPLE 20

int main() {
    double height[NUM_PEOPLE], weight[NUM_PEOPLE];
    int pass_militaryService[NUM_PEOPLE] = {0};
    int pass_pilot[NUM_PEOPLE] = {0};
    int pass_tank[NUM_PEOPLE] = {0};
    int i;

    for (i = 0; i < NUM_PEOPLE; i++) {
        printf("Enter height (cm) and weight (kg) for person %d: ", i + 1);
        scanf("%lf %lf", &height[i], &weight[i]);

        if (height[i] > 155 && weight[i] > 50) {
            pass_militaryService[i] = 1;
        }
        if (height[i] > 175 && weight[i] > 50) {
            pass_pilot[i] = 1;
        }
        if (height[i] > 175 && weight[i] > 60) {
            pass_tank[i] = 1;
        }
    }

    for (i = 0; i < NUM_PEOPLE; i++) {
        printf("Person %d:\n", i + 1);
        printf("  Height: %.2lf cm, Weight: %.2lf kg\n", height[i], weight[i]);
        
        if (pass_militaryService[i]) {
            printf("  Pass military service\n");
        } else {
            printf("  Not pass military service\n");
        }

        if (pass_pilot[i]) {
            printf("  Pass pilot\n");
        } else {
            printf("  Not pass pilot\n");
        }

        if (pass_tank[i]) {
            printf("  Pass tank crew\n");
        } else {
            printf("  Not pass tank crew\n");
        }
    }

    return 0;
}

