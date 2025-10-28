#include <stdio.h>

int main(){
    char pet[3];

  printf("Do you have a cat or a dog? ");
  scanf("%s", pet);

  if (pet[0] == 'c' && pet[1] == 'a' && pet[2] == 't' && pet[3] == '\0'){
    printf("Meow!\n");
  } 
  else if (pet[0] == 'd' && pet[1] == 'o' && pet[2] == 'g' && pet[3] == '\0'){
    printf("Hav!\n");
  }
  else{
      printf("No sound!\n");
  }    

  return 0; 
}

