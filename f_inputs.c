//MAX is te max value acceptable

#include "utils.h"
#include "input.h"


int isValid(char *string) {
  int i = 0;

  while(TYPES[i]) {
    if(strcmp(TYPES[i], string) == 0) {
      return 0;
    }
    i++;
  }

  return 1;
}


void rInput(char *argv[], int *max_value, char **type){
  *max_value = atoi(argv[1]);
  *type = argv[2];
}



int isInputValid(int max_value, char *type) {
  if(max_value > pow(10, MAX) || isValid(type)) {
    printf("Invalid input. Try again, please.\n");
    return 0;
  }

  return 1;
}
