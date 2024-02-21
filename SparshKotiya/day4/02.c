#include<stdio.h>
int main ()
{


  int person;

  printf("If Nobita's mom enters (input is 1) \n");
  printf("If Nobita enters (input is 2) \n");
  printf("If others enter (input is 3) \n");
//  take input from user
  printf("Who enter in the room ?");
  scanf("%d",&person);

 switch(person)
 {
    case 1:
    printf("Nobita's mom is here. Pausing Dora Cake baking!");
    break;

    case 2:
    printf("Nobita is here. Continuing Dora Cake baking!");
    break;

    case 3:
    printf("Someone else is here. Stopping Dora Cake");
    break;

    default:
    printf("plese enter valid input which is 1,2,3");
 }

      // 
   
        for (int i = 0; i < 10; i++) 
        {  printf("baking dora cake...");

          if (person == 1 || person == 3) 
          {
            break;
          }
        } 











    return 0;
}
