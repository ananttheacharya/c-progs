#include <stdio.h>

struct student {
    int admno;
    char sname[20];
    float eng, math, science;
    float total;
};

int main() {
    struct student s;

    printf("Enter admission no: ");
    scanf("%d", &s.admno);

    printf("Enter name: ");
    scanf("%s", &s.sname);

    printf("Enter marks (eng math science): ");
    scanf("%f %f %f", &s.eng, &s.math, &s.science);

    s.total = s.eng + s.math + s.science;

    printf("\n--- Student Details ---\n");
    printf("Adm No: %d\n", s.admno);
    printf("Name: %s\n", s.sname);
    printf("Total: %.2f\n", s.total);

    return 0;
}
