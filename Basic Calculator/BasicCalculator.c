#include <stdio.h>
#include <unistd.h>

int main()

{
    float number1, number2;
    int action;

    printf("CALCULATOR \n");
    sleep(1);

    printf("Please enter two numbers. \n");
    scanf("%f", &number1);
    scanf("%f", &number2);
    sleep(1);

    printf("Please select the action you want to take. \n");
    sleep(1);
    printf("1:Addition | 2:Subtraction | 3:Multiplication | 4:Division \n");
    scanf("%d", &action);
    sleep(1);

      if (action == 1) 
      {
          printf("Result is: %f. \n", number1+number2);
      }
      else if (action == 2)
      {
          printf("Result is: %f. \n", number1-number2);
      }
      else if (action == 3)
      {
          printf("Result is: %f. \n", number1*number2);
      }
      else if (action == 4)
      {
          printf("Result is: %f. \n", number1/number2);
      }
 
    return 0;
    

}