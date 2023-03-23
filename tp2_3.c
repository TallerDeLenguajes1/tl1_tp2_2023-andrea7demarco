#define N 5
#define M 7
#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int main(){

    int i,j;
    int mt[N][M];
    int *punt_mt;
    punt_mt=&mt[0][0];
    srand(time(0));

    for(i = 0;i<N; i++)
  {
    for(j = 0;j<M; j++)
  {
    *punt_mt=1+rand()%100;
    printf("%d ", *punt_mt);
    punt_mt++;
  }
    printf("\n");
  }
 return 0;
}

