#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <clocale>

// * Wechseln von define auf undef
#undef WINDOWS
#undef TESTUTF

#define MAX 5


void win_funktion(int _a);
void unix_funktion(int _a);
void UTF_WIN_Unix(int a);
void GleitkommaZahl(int i, float b[]);
void testBereich(int a, int i, float b[MAX]);
