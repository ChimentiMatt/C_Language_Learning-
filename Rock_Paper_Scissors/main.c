
#include <stdio.h>
  
int main()
{
  int user = userChoice();
  int computer = computerChoice();

  if (user == 1)
  {
    printf("\nYou chose rock");
  }
  if (user == 2)
  {
    printf("\nYou chose scissors");
  }
  if (user == 3)
  {
    printf("\nYou chose paper");
  }

  if (computer == 1)
  {
    printf("\nComputer chose rock");
  }
  if (computer == 2)
  {
    printf("\nComputer chose scissors");
  }
  if (computer == 3)
  {
    printf("\nComputer chose paper");
  }

  if (user == computer)
  {
      printf("\ntie");
  }
  if (user == 1 && computer == 2)
  {
    printf("\nyou lose");
  }
  if (user == 1 && computer == 3)
  {
    printf("\nyou win");
  }
  if (user == 2 && computer == 1)
  {
    printf("\nyou win");
  }
  if (user == 2 && computer == 3)
  {
    printf("\nyou lose");
  }

  if (user == 3 && computer == 1)
  {
    printf("\nyou lose");
  }
  if (user == 3 && computer == 2)
  {
    printf("\nyou win");
  }
}

int userChoice()
{

    char arr[3][10] = {"rock", "paper", "scissors"};
    printf("You choices are are\n");
        
    for (int i = 0; i < 3; i++) 
    {
        printf("%s\n", arr[i]);
    }

    char choice[] = "";
    char rock[10] = "rock";
    char paper[15] = "paper";
    char scissors[20] = "scissors";
    scanf("%s", &choice);
    // printf("\nChoice\n %s", choice);

    if (strcmp(choice, rock) == 0)
    {
      return 1;
    }
    if (strcmp(choice, paper) == 0)
    {
      return 2;
    }
        if (strcmp(choice, scissors) == 0)
    {
      return 3;
    }

    return 0;

    
}

int computerChoice()
{
  int computer = (rand() % (3 - 1) + 1);
  return computer;
}