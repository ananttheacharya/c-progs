#include <stdio.h>

struct batsman {
    int bcode;
    char bname[20];
    int innings, notout, runs;
    float batavg;
};

void calcavg(struct batsman *b) {
    if ((b->innings - b->notout) != 0)
        b->batavg = (float)b->runs / (b->innings - b->notout);
    else
        b->batavg = 0;
}

int main() {
    struct batsman b;

    printf("Enter code: ");
    scanf("%d", &b.bcode);

    printf("Enter name: ");
    scanf("%s", b.bname);

    printf("Enter innings, notout, runs: ");
    scanf("%d %d %d", &b.innings, &b.notout, &b.runs);

    calcavg(&b);

    printf("\n--- Batsman Details ---\n");
    printf("Code: %d\n", b.bcode);
    printf("Name: %s\n", b.bname);
    printf("Batting Average: %.2f\n", b.batavg);

    return 0;
}
