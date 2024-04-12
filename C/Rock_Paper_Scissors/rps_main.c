// known issue, if you go for another round, it won't be random
#include "rps.h"

int main() {
    srand(time(NULL));
    work_on_input();
    random_choice();
    compare_choice();
    another_round();
    return 0;
}

// Run: gcc rps.c rps_main.c -o rps && ./rps  