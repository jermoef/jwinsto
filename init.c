#include "network.h"

int main(){

  char buffer[BUFFER_SIZE];
  int type, status;
  
  printf("Are you a fencer or referee? Enter appropriate number\n\t1) Fencer\n\t2) Referee\n"); //determines ref or fencer
  fgets(buffer, sizeof(buffer), stdin);

  type = atoi(buffer);
  type--;

  if (type){ //referee
    printf("You have selected referee\n");
    status = system("./referee");
  }

  else{ //fencer
    printf("You have selected fencer\n");
    status = system("./fencer");
    }
  
  return 0;
}
