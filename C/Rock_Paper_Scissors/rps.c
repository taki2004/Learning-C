#include "rps.h"

enum choices {
    Scissors = 's', Paper = 'p', Rock = 'r'
};
enum choices player1; //linking them to the enum, but your are not initizlaing them/ giving them a value
enum choices player2; //linking them to the enum, but your are not initizlaing them/ giving them a value

int work_on_input(void) {
    char buffer[LIMIT];  // A Temp array to messure the lenght of the char/s input. Temp acts as our input.

    while (1) {
        printf("Choose one of the following, r(Rock), p(Paper), s(Scissors): ");
        int result = scanf(" %255s", buffer); //Temp input, 256 also includes the array terminator, we dont want a buffer flow, so we limit it. 

        if (result == EOF) { //kinda useless, as eof can happen anywhere?
            printf("End of input. Exiting.\n");
            exit(1);
        }

        if (strlen(buffer) == 1) {
            player1 = buffer[0]; // the condition one char is satisfied, we now switch to player1(main input).
            compare_choice();
            break;
        } else {
            printf("Please enter only a single character, try again: \n");
        }
    }
    return 0;
}

int random_choice() {
    int random_num = rand() % (2 + 1); // Generate a random number between 0 and 2. 2+1, to include 2.
    switch (random_num) {
        case 0:
            player2 = Rock;
            break;
        case 1:
            player2 = Paper;
            break;
        case 2:
            player2 = Scissors;
            break;
    }
    return 0;
}

void compare_choice(void) {
    player1 = tolower(player1);
    
    random_choice();
    
    switch (player1) {
        case Rock:
        case Paper:
        case Scissors:
            if (player1 == player2) {
                printf("It's a tie!\n");
            } else if (
                    (player1 == Rock && player2 == Scissors) ||
                    (player1 == Paper && player2 == Rock) ||
                    (player1 == Scissors && player2 == Paper)
                    ) {
                printf("You won!\n");
            } else {
                printf("You lost!\n");
            }
            printf("The game is over!\n");
            another_round();
        default:
            printf("Yo! Only type r or p or s \n");
            work_on_input();
    }
}

void another_round(void) {
    printf("--------------------------------------------------");
    printf("\nDo you fancy another round? (y for yes) (n Stop): ");
    char round;
    scanf("%s", &round);
    round = tolower(round);
    if (round == 'y') {
        work_on_input();
    } else if (round == 'n') {
        printf("Sad to see you go!\n");
        exit(0);
    } else {
        printf("Yo! Only type y or n!\n");
        another_round();
    }
}