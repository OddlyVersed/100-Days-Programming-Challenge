#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight current_light;
    int input_value;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    if (scanf("%d", &input_value) != 1) {
        return 0;
    }
    
    if (input_value < RED || input_value > GREEN) {
        printf("Invalid traffic light value.\n");
        return 0;
    }
    
    current_light = (enum TrafficLight)input_value;

    switch (current_light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}
