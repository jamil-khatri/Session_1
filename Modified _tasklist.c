#include <stdio.h>
#include <string.h>

char tasks[5][50];
int status[5] = {0};

void markTaskDone(int index) {
    if(index >= 0 && index < 5) {
        status[index] = 1;
    }
}

int main() {
    int i;

    printf("Enter 5 tasks:\n");

    for(i = 0; i < 5; i++) {
        printf("Task %d: ", i + 1);
        scanf(" %[^\n]", tasks[i]);
    }

    markTaskDone(1);

    printf("\nUpdated Task List:\n");

    for(i = 0; i < 5; i++) {
        if(status[i] == 1)
            printf("%d. %s - DONE\n", i + 1, tasks[i]);
        else
            printf("%d. %s\n", i + 1, tasks[i]);
    }

    return 0;
}
