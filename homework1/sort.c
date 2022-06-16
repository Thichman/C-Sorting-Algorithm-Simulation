#include <stdio.h>

void selection_sort(int arg[], int size){
 int s = 0;
  for(int i = 0; i < size; i++){
    for(int j = 0; j <size; j++){
    if (arg[j] > arg[i]){
    s = arg[i];
    arg[i] = arg[j];
    arg[j] = s;
}

}

}


}


int main(){

int arg[] = {9,8,7,6,9,300,5,4,3,2,1};
selection_sort(arg,11);
for(int i = 0; i < 11; i++){
printf("%d\n",arg[i]);
}



}
