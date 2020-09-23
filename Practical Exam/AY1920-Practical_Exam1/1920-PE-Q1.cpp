#include <stdio.h>


/************
 *  Part A  * 
 ************/
int pins_felled(long long game) 
{
    int felled = 0;
    //Extract the last digits and sum together
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
    //Compute the total pins felled via function
    int pins = pins_felled(game);
    int previous = 0;

    //To eliminate the possibility of game = 0
    while (game > 0)
    {
        if (game % 10 == 9)
        {
            //When the last digit is 9,
            //Add up the previous pin
            //i.e. during the first loop, previous = 0, so pins = pins
            pins += previous;
        }
        //Otherwise do nothing
        //Proceed to compute values for previous digit
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

    //To eliminate the possibility of game = 0
    while (game > 0)
    {
        //The current digit
        current = game % 10;
        //Comparing current digit and previous digit
        //If 3 same digits in a row, count will increment 3 times
        if (current == previous)
        {
            count ++;
        }
        else
        //Otherwise return 1
        {
            count = 1;
        }
        
        //Total is count * current
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