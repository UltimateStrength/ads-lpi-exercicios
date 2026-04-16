#include <stdio.h>
#include <string.h>

int main() {

    //dbzinho
    char usuario_padrao[] = "user";
    char senha_usuario[] = "1234";

    char admin_padrao[] = "admin";
    char senha_admin[] = "admin123";

    //inputs
    char usuario[50];
    char senha[50];

    printf("Login brabo\n");

    printf("Qual teu usuario: ");
    scanf("%s", usuario);

    printf("Manda a senha ai tbm: ");
    scanf("%s", senha);

    // verify maroto
    if (strcmp(usuario, admin_padrao) == 0 && strcmp(senha, senha_admin) == 0) {
        printf("deu boa tu e ademiro!\n");
    }
    else if (strcmp(usuario, usuario_padrao) == 0 && strcmp(senha, senha_usuario) == 0) {
        printf("deu boa ce e usuario beta!\n");
    }
    else if (strcmp(usuario, admin_padrao) == 0 || strcmp(usuario, usuario_padrao) == 0) {
        printf("deu ruim com a senha pae!\n");
    }
    else {
        printf("existe nn esse user ai!\n");
    }

    return 0;
}