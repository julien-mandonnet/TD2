#include <stdio.h>

int maximum(int *t, int n);
void f(int a, int b, int *s, int *p);
void minmax(int *t, int n, int *min, int *max);
void stl();





int main() {
  int t[10] = {1, 8, 3, -14, 6, -29, 78, -6, 24, -10};
  int p;
  int s;
  int min;
  int max;
  stl();

  printf("Hello World !\n");
  stl();

  printf("%i\n", maximum(t, 10));
  stl();

  f( 5, 7, &s, &p);
  printf("somme: %i\nproduit: %i\n", s, p);
  stl();

  minmax( t, 10, &min, &max);
  printf("min: %i\nmax: %i\n", min, max);

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

void f(int a, int b, int *s, int *p) {
  *s = a + b;
  *p = a * b;
}

void minmax(int *t, int n, int *pmin, int *pmax) {
  *pmin = t[0];
  *pmax = t[0];
  for(int i=0; i<n; i++){
    if( t[i] > *pmax) {
      *pmax = t[i]; 
    }else if( t[i] < *pmin) {
      *pmin = t[i]; 
    }
  }
}

void stl() {
  printf("\n");
  printf("*******");
  printf("\n");
}