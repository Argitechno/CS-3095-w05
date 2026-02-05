#include <stdio.h>
#include <stdlib.h>

void solve_hanoi(int num, char from, char aux, char to);

int main(int argc, char** argv) {
   int discs = atoi(argv[1]);
   solve_hanoi(discs, 'A', 'B', 'C');
   return 0;
}

/// Solves a tower of hanoi recursively, moving all discs from a to c.
void solve_hanoi(int num, char from, char aux, char to) {
   if(num > 1) {
      solve_hanoi(num - 1, from, to, aux);
      printf("Move %c to %c\n", from, to);
      solve_hanoi(num - 1, aux, from, to);
   }
   else {
      printf("Move %c to %c\n", from, to);
   }
}
