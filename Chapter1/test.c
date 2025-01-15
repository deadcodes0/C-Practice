#include <stdio.h>
#include <string.h>
int main () {
    char *p[12] = {"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"};
    int i, j;
    char *t;
    
    for (i = 0; i < 11; i++)
        for (j = 0; j < 12 - i - 1; j++)
            if (strcmp(p[j], p[j + 1]) > 0) {
                t = p[j];
                p[j] = p[j + 1];
                p[j + 1] = t;
            }
    
    
    
    return 0;
}