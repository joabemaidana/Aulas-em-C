
#include <stdio.h>

int main()
{
    int senha = 1234, tentativa, palpite;

    printf("Digite sua senha, voce tera 3 tentativas para acertar\n");
    scanf("%d",&tentativa);

    if (senha == tentativa)
    {
        printf("A senha esta correta.");
    }
    else
    {
        palpite = 1;
        while (palpite < 3)
        {
            printf("sua senha esta errada, tente novamente\n");
            scanf("%d",&tentativa);
            if (senha == tentativa)
            {
                printf("A senha esta correta");
                break;
            }

            palpite = palpite + 1;
        }
        if (palpite == 3)
        {
            printf("sua conta foi bloqueada");
        }
    }

    return 0;
}
