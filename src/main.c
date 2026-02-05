void solve_hanoi(struct Tower a, struct Tower b, struct Tower c);

int main(int argc, char** argv) {
   int discs = atoi(argv[1]);
   struct Tower {
      int *discs;
      int size;
      const char *name;
   } A, B, C;

   A.size, B.size, C.size = discs;  
   A.discs = calloc(A.size, sizeof *A.discs);
   B.discs = calloc(B.size, sizeof *B.discs);
   C.discs = calloc(C.size, sizeof *C.discs);
   
   for (int idx = 0; idx < n; idx++) {
      A.discs[idx] = 1;
   }
   
   A.name = "A";
   B.name = "B";
   C.name = "C";
   
   solve_hanoi(A, B, C);
}

/// Solves a tower of hanoi recursively, moving all discs from a to c.
void solve_hanoi(struct Tower a, struct Tower b, struct Tower c) {
   solve_hanoi(a, c, b);
   printf("Move %s to %s", a.name, c.name);
   solve_hanoi(b, a, c);
}
