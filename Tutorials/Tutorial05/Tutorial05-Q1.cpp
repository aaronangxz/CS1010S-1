#include <iostream>

using namespace std;
 
void printArray(int list[], int numElem);
void passElement(int num);
void changeElements(int list[]);
void copyArray(int list1[], int list2[], int numElem);

int main(void) 
{
    int list1[5] = {11, 22, 33, 44, 55};
    int list2[5] = {99, 99, 99, 99, 99};
    printArray(list1, 5);
    passElement(list1[0]);
    printArray(list1, 5);
    changeElements(list2);
    printArray(list2, 5);
    copyArray(list2, list1, 5);
    printArray(list2, 5);
    return 0;
}

void printArray(int list[], int numElem) 
{
    int i;
    for (i = 0; i < numElem; i++)
        cout << list[i] << " ";
    cout << endl;
    return;
}

void passElement(int num) 
{
    num = 1234;
    return;
}

void changeElements(int list[]) 
{
    list[2] = 77;
    list[4] = 88;
    return;
}

void copyArray(int list1[], int list2[], int numElem) 
{
    int i;
    for (i = 0; i < numElem; i++)
        list1[i] = list2[i];
    return;
}