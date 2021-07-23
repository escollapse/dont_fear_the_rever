#include <stdio.h>
#include <stdlib.h>
/*
 *compile:
 * gcc chal0.c -o chal0
 *run:
 * ./chal0
 *solve!
 * bonus points if you do not use source :D
*/

void flag_value();

int main()
{
    char * not_a_hint = "don\'t you wish there was some form of a hint?\n";
    printf("%s", not_a_hint);
    flag_value();
    return 0;
}

void flag_value()
{
    char* not_the_flag = "42yopuxa625r7epqcs9olwb3887261x3472883iwn7";
    char flag[41];
    for (int j = 0; j < 0x2A; j++) {
        flag[j] = 0x02 + j;
    }
    for (int i = 0; i < 0x2A; i++) {
        flag[i] ^= not_the_flag[i];
    }
    char retval[13];
    retval[6] = *(flag+17);
    retval[12] = *(flag+41);
    retval[7] = *(flag+19);
    retval[1] = *(flag+3);
    retval[8] = *(flag+23);
    retval[2] = *(flag+5);
    retval[9] = *(flag+29);
    retval[4] = *(flag+11);
    retval[10] = *(flag+31);
    retval[0] = *(flag+2);
    retval[11] = *(flag+37);
    retval[5] = *(flag+13);
    retval[3] = *(flag+7);
    char* sort_of_the_flag = malloc((13)*sizeof(char));
    for(int k=0;k<13;k++) {
        sort_of_the_flag[k] = retval[k];
    }
    puts(sort_of_the_flag);
}
