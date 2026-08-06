#include <stdio.h>

int main() {
    int voterIDs[10] = {1045, 2031, 3872, 4590, 5123,
                       6789, 7234, 8102, 9567, 10023};
    int searchID, i, found = 0, position = -1;

    printf("Registered Voter IDs:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", voterIDs[i]);
    }

    printf("\n\nEnter Voter ID to search: ");
    scanf("%d", &searchID);

    for (i = 0; i < 10; i++) {
        if (voterIDs[i] == searchID) {
            found = 1;
            position = i;
            break;
        }
    }

    if (found) {
        printf("Voter ID %d FOUND at position %d\n", searchID, position + 1);
    } else {
        printf("Voter ID %d NOT FOUND in the list.\n", searchID);
    }

    return 0;
}
