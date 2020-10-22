#include <iostream>
#include <string>

using namespace std;

void print_song(int n) 
{
    const char *num[12] = {"first","second","third","fourth","fifth","sixth","seventh","eighth","ninth","tenth","eleventh","twelfth"};
    // string gifts[12] = {"a partridge in a pear tree.","two turtle doves,","three French hens,","four calling birds,",
    //                     "five golden rings,","six geese a laying,","seven swans a swimming,","eight maids a milking,",
    //                     "nine ladies dancing,","ten lords a leaping,","eleven pipers piping,","twelve drummers drumming,"};
    const char *gifts1[12] = {"a partridge in a pear tree.","two turtle doves,","three French hens,","four calling birds,",
                        "five golden rings,","six geese a laying,","seven swans a swimming,","eight maids a milking,",
                        "nine ladies dancing,","ten lords a leaping,","eleven pipers piping,","twelve drummers drumming,"};

    //Run n times
    for (int k = 0; k < n; k++) //k = n
    {
        //Prints out first line with month
        cout << "On the " << num[k] << " day of Christmas," << endl << "my true love sent to me," << endl ;
        
        //Prints out gift of each day
        for (int j = k ; j >= 0; j--) //j = k = n
        {
            //When it's printing day 1 and when it is not in the final loop
            if (j == 0 && k != 0)
            {
                //When there is only 1 month / it is in the final loop, new line not required
                if (n == 1 || k == n - 1)
                {
                    cout << "and " << gifts1[j];
                }
                else
                {
                    cout << "and " << gifts1[j] << endl;
                }
            }
            //When it's printing day 1 and when it is in the final loop, omit "and" in the sentence
            else
            {
                cout << gifts1[j] << endl;
            }
        }
        //When it is in the final loop, new line not required
        if (k == n - 1)
        {
            break;
        }
        cout << endl;
    }
}

int main(void)
{
    print_song(5);
}



