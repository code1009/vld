////////////////////////////////////////////////////////////////////////////////
//  $Id: main.c,v 1.1 2005/03/11 22:56:50 dmouldin Exp $
//
//  A simple C example program for testing the Visual Leak Detector.
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv [])
{
    char *s = (char*)malloc(60);

    strncpy(s, "Hello World!\n", 14);
    printf(s);

    //free(s);

    return 0;
}