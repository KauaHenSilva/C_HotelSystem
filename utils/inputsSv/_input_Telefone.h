#if !defined(INPUTTELEFONE)
#define INPUTTELEFONE

#include <stdio.h>
#include <string.h>

void getTelefone(char *telefone)
{
  char telefoneTemp[11];
  while (1)
  {
    printf("Digite o telefone [89981280128]: ");
    scanf("%s", telefoneTemp);

    if(strlen(telefoneTemp) != 11)
    {
      printf("Telefone inválido!\n");
      continue;
    }

    strcpy(telefone, telefoneTemp);
    return;
  }
  

}

#endif // INPUTTELEFONE
