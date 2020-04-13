#include <menu.h>

void menu(){
    clear_screen();
    menu_screen();
    printf("-> Escolha a função para testar ou '0' para sair: ");
    int opt;
    scanf("%d", &opt);
    clear_screen();
    bool last_input_is_getline;
    while(true){
        last_input_is_getline = true;
        switch (opt) {
            case 1:
                printf("Desenha retângulo\n");
                exercise_5_1a();
                break;
            case 2:
                printf("Volume esfera\n");
                exercise_2_1b();
                break;
            case 3:
                printf("Fatorial\n");
                exercise_6_1b();
                break;
            case 4:
                printf("Fibonacci\n");
                exercise_8_1b();
                break;
            case 5:
                printf("Numero Regular\n");
                exercise_9_1b();
                break;
            case 6:
                printf("Combinações\n");
                exercise_10_1b();
                break;
            case 7:
                printf("Palíndromo\n");
                exercise_3_1c();
                last_input_is_getline = false;
                break;
            case 8:
                printf("Converte para minúsculas\n");
                exercise_5_1c();
                last_input_is_getline = false;
                break;
            case 9:
                printf("Converte para maiúsculas\n");
                exercise_6_1c();
                last_input_is_getline = false;
                break;
            case 10:
                printf("Centralizar texto\n");
                exercise_7_1c();
                break;
            case 11:
                printf("Ordenar três numeros\n");
                exercise_1_2a();
                break;
            case 12:
                printf("Tamanho string\n");
                exercise_3_2a();
                last_input_is_getline = false;
                break;
            case 13:
                printf("Compara string\n");
                exercise_4_2a();
                last_input_is_getline = false;
                break;
            case 14:
                printf("Converte string para int\n");
                exercise_1_2b();
                break;
            case 15:
                printf("Remove espaços em branco inicio e fim\n");
                exercise_3_2b();
                last_input_is_getline = false;
                break;
            case 16:
                printf("Quebrar string\n");
                exercise_4_2b();
                break;
            case 17:
                printf("Buscar na string\n");
                exercise_5_2b();
                last_input_is_getline = false;
                break;
            case 18:
                printf("Soma números gigantes\n");
                exercise_6_2b();
                break;
            case 19:
                printf("Maior e menor do vetor\n");
                exercise_4_2c();
                break;
            case 20:
                printf("Soma matriz\n");
                exercise_6_2d();
                break;
            case 0:
                printf("Finalizando o programa\n");
                usleep(1500000);
                charge_bar(5);
                exit_screen();
            default:
                printf("Escolha uma opção válida!\n");
        }
        printf("Aperte ENTER para voltar ao menu de funções\n");
        if(last_input_is_getline)
            cin.ignore();
        while (cin.get() != '\n');
        charge_bar(5);
        menu();
    }

}
