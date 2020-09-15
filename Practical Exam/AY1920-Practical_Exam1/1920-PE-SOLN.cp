#include <stdio.h>


/************
 *  Part A  * 
 ************/
/* Marking Guide 

+1 mark given for style, i.e. meaningful variable names, indentation.
+5 marks for correct solution
+4 marks if fail corner cases: e.g. pins_felled(0)

*/
int pins_felled(long long game) {
    int total;
    for (total = 0; game > 0; game /= 10) {
        total += game % 10;
    }
    return total;
}


/************
 *  Part B  * 
 ************/
/* Marking Guide 

Assume that pins_felled is correct and given if student uses it in solution

+1 mark given for style, i.e. meaningful variable names, indentation.
+6 marks for correct solution
+5 marks almost correct solution but fail to account for corner cases:
   e.g. - 9 pins felled at start, or end
        - only one bowl in the game
+3 marks for paritical solution that shows correct approach, 
   e.g. - tries to store the previous pins felled
        - tries to look at earlier pins felled by doing game % 100 
*/
int score(long long game) {
    int total = pins_felled(game);
    int prev = 0;
    while (game > 0) {
        if (game % 10 == 9) {
            total += prev;
        }
        prev = game % 10;
        game /= 10;
    }
    return total;
}


/************
 *  Part C  * 
 ************/
/* Marking Guide 

Assume that pins_felled is correct and given if student uses it in solution

+1 mark given for style, i.e. meaningful variable names, indentation.
+6 marks for correct solution
+5 marks almost correct solution but fail to account for corner cases:
   e.g. - Same number of pins felled at start, or end
+3 marks for paritical solution that shows correct approach, 
   e.g. - tries to store the previous pins felled
        - tries to look at earlier pins felled by doing game % 100 

*/
int consec_score(long long game) {
    int total = 0;
    int prev = 0;
    int seen = 1;
    
    while (game > 0) {
        int curr = game % 10;
        if (prev == curr) {
            seen += 1;
        } else {
            seen = 1;
            prev = curr;
        }
        total += seen * curr;
        game /= 10;
    }
    return total;

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