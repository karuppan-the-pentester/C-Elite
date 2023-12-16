#include <stdio.h>

int main() {

    char *Department[] = {"ECE","CSE","EEE","Mech"};
    printf("The Departments are: ");
    for (int i = 0; i < 4; ++i) {
        printf("%s ",Department[i]);
    }

    char *Student[][10] = { {"21EC001","21EC002","21EC003"},{"21CS001","21CS002"}};
    for (int i = 0; i < sizeof(Student)/ sizeof(Student[0]); ++i) {
        printf("\n%s roll No are: ",Department[i]);
        for (int j = 0; j < sizeof(Student)/ sizeof(Student[0]); ++j) {
            printf("%s, ",Student[i][j]);
        }
    }
}