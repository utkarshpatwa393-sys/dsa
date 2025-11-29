#include <stdio.h>
#include <string.h>

struct student {
    int roll_no;
    char name[20];
};
struct result {
    struct student s;
    int marks[3];
};

void get_student_data(struct student *s, int r, const char *name) {
    s->roll_no = r;
    strcpy(s->name, name);
}

void get_marks(struct result *r, int m1, int m2, int m3) {
    r->marks[0] = m1;
    r->marks[1] = m2;
    r->marks[2] = m3;
}

void display_result(struct result r) {
    printf("Name of student: %s\n", r.s.name);
    printf("Roll number: %d\n", r.s.roll_no);
    printf("Marks of subject 1 : %d\n", r.marks[0]);
    printf("Marks of subject 2 : %d\n", r.marks[1]);
    printf("Marks of subject 3 : %d\n", r.marks[2]);
}

int main() {
    struct result r;
    get_student_data(&r.s, 123, "John");
    get_marks(&r, 30, 40, 50);
    display_result(r);
    return 0;
}
