#include <stdio.h>
int main(void)
{
     int selection;
     printf("Press 1 if you would like to pay your bill.\n");
     printf("Press 2 if for general information.\n");
     printf("Press 3 to speak with a representative.\n");
     scanf("%d", &selection);
     switch(selection)
     {
          case 1:
              printf("\nGreat! Please send a large bag of unmarked bills "
                     "to Michael McCarron, address to follow.");
              break;

          case 2:
              printf("\nIf you aren't yet a customer, but would  still like "
                    "to send us a large bag of cash, please press 1 after "
                    "the next prompt.");
              break;

          case 3:
              printf("\nPlease hold for the next representative. I should warn "
                     "you, it could be a while, so in the meantime, if you're "
                     "bored, you can use this time to send us a large bag of "
                     "cash.");
              break;

          default:
              printf("\nSince you did not make a valid selection, we'll just "
                    "assume you would like to send us a large bag of cash. "
                    "Please hold for further instructions.");
     }
     return 0;
}