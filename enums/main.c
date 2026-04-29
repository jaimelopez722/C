#include <stdio.h>

enum Day{
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};

int main(){

    // enum = A user-defined data type that consists
    //        of a set of named integer constants.
    //        Benefit: Replaces numbers with readable names

    enum Day today = TUESDAY;

    printf("%d", today);

    return 0;
}