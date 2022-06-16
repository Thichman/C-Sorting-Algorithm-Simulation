#include <stdio.h>
#include <stdlib.h>

int main(){
float fall = 0;
float test = -1;
float bb;
char test2 = 'f';
char b[5];

printf("Enter daily raingfall totals, one per line, use 'T' for trace, use '-1' to quit: \n"); 
while(b = getchar()){
float bb += atof(b);
if (bb == test){
    break;
  }


printf("%f\n", bb);

}

printf("Total rainfall: %f\n", fall);

}

