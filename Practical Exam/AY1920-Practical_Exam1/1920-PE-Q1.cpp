#include <stdio.h>


/************
 *  Part A  * 
 ************/
int pins_felled(long long game) 
{
    int felled = 0;

    while (game > 0)
    {
        felled += game % 10;
        game /= 10;
    }
    
    return felled;
}

/************
 *  Part B  * 
 ************/
int score(long long game) 
{
    int pins = pins_felled(game);
    int previous = 0;

    while (game > 0)
    {
        if (game % 10 == 9)
        {
            pins += previous;
        }
        previous = game % 10;
        game /= 10;
    }
    return pins;
}

/************
 *  Part C  * 
 ************/
int consec_score(long long game) {
    int previous = 0;
    int pins = 0;
    int current = 0;
    int count = 0;

    while (game > 0)
    {
        current = game % 10;
        if (current == previous)
        {
            count ++;
        }
        else
        {
            count = 1;
        }
        pins += count * current;
        previous = game % 10;
        game /= 10;
    }

    return pins;
}


int main() {
    // Part A
    printf("pins_felled(45678): %d\n", pins_felled(45678));
    printf("pins_felled(9999999999): %d\n", pins_felled(9999999999));

    // Part B
    printf("score(45678): %d\n", score(45678));
    printf("score(4927): %d\n", score(4927));
    printf("score(9999999999): %d\n", score(9999999999));

    // Part C
    printf("consec_score(335588833): %d\n", consec_score(335588833));
    printf("consec_score(9999999999): %d\n", consec_score(9999999999));

    return 0;
}