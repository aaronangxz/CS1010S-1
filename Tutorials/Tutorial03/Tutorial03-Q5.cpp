#include <stdio.h>
#include <math.h>

void deposit(int *account, int amount) 
{
    *account += amount;
}
bool withdrawl(int *account, int amount) 
{
    if (*account < amount)
    {
        return false;
    }
    else
    {
        *account -= amount;
        return true;
    }
}
bool transfer(int *from, int *to, int amount) 
{
    if (withdrawl(from,amount))
    {
        deposit(to,amount);
        return true;
    }
    return false;
}

int main(void) 
{

}