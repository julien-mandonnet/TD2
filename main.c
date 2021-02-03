#include <stdio.h>

int maximum(int *t, int n);
void stl();





int main() {
  int t[5] = {1, 8, 3, 4, 6};
  stl();

  printf("Hello World !\n");
  stl();

  printf("%i\n", maximum(t, 5));
  stl();

}





int maximum(int *t, int n) {
  int m = t[0];
  for(int i=0; i<n; i++){
      if( t[i] > m) {
        m = t[i]; 
      }
  }
  return m;

}

void stl() {
  printf("\n");
  printf("*******");
  printf("\n");
}