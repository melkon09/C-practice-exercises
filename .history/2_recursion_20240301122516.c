#include <stdio.h>
#include <stdlib.h>
#include <string.h> //χρειάζεται για την εκτύπωση string

char *RevStr(int count, char *str)
{
    char Value;
    if (count)
    {
        Value = str[count-1];//κρατάει τον τελευταίο χαρακτήρα
        RevStr(count-1, str); //αναδρομή
    }
    if (count)//αποθηκεύει στη συμμετρική από την αρχή θέση
        str[strlen(str) - count] = Value;
    return(str);
}

int main( )
{
    char Test[20] = "ABCDEFGHIJK";
    char Out[20];
    printf( "Value of Test: %s\n" , Test );
    strcpy(Out,RevStr(strlen(Test), Test));//αντιγράφει το
    //αντίστροφο του Test στο Out
    printf( "Value of Out: %s\n" , Out );
    system("PAUSE");
    return 0;
}