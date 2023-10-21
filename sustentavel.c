#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h> // Biblioteca para usar a função sleep

// Função para imprimir uma mensagem colorida
void printGreen(const char *message, ...) {
    va_list args;
    va_start(args, message);
    printf("\033[0;32m");
    vprintf(message, args);
    printf("\033[0m");
    va_end(args);
}

void printRed(const char *message, ...) {
    va_list args;
    va_start(args, message);
    printf("\033[0;31m");
    vprintf(message, args);
    printf("\033[0m");
    va_end(args);
}

// Função para exibir uma pergunta e suas alternativas
void exibirPergunta(int numeroPergunta, char *pergunta, char *alternativas[], char respostaCorreta, char respostaEscolhida) {
    printf("%d. %s\n", numeroPergunta, pergunta);
    for (char letra = 'a'; letra <= 'd'; letra++) {
        if (letra == respostaCorreta) {
            if (letra == respostaEscolhida) {
                printGreen("%c) %s\n", letra, alternativas[letra - 'a']);
            } else {
                printf("%c) %s\n", letra, alternativas[letra - 'a']);
            }
        } else if (letra == respostaEscolhida) {
            printRed("%c) %s\n", letra, alternativas[letra - 'a']);
        } else {
            printf("%c) %s\n", letra, alternativas[letra - 'a']);
        }
    }
}

int main() {
    int opcao;
    char resposta;

    do {
        printf("===== Menu =====\n");
        printf("1 - Iniciar\n");
        printf("2 - Sair\n");
        printf("==============\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                system("clear"); // Limpa a tela (para sistemas Unix/Linux; substitua por "cls" no Windows)
                int pontuacao = 0;

                // Perguntas e respostas
                char respostasCorretas[] = {'b', 'd', 'c', 'b', 'c', 'c', 'c', 'c', 'c', 'b'};
                char *perguntas[] = {
                    "Qual é a melhor maneira de proteger uma floresta tropical ameaçada de desmatamento?",
                    "Como reduzir a poluição de um rio local?",
                    "O que pode ser feito para preservar a biodiversidade em um ecossistema ameaçado?",
                    "Como reduzir o desperdício de água em uma comunidade?",
                    "O que é uma prática sustentável de pesca?",
                    "Como promover a sustentabilidade na agricultura?",
                    "Qual é uma fonte de energia renovável?",
                    "Como reduzir a emissão de gases de efeito estufa no transporte?",
                    "Como reduzir o desperdício de alimentos em uma casa?",
                    "O que é a poluição luminosa?"
                };

                char *alternativas[][4] = {
                    {"Plantar árvores exóticas", "Implementar regulamentações rigorosas de desmatamento", "Criar uma reserva de caça", "Expandir a extração de madeira"},
                    {"Despejar resíduos químicos diretamente no rio", "Promover a reciclagem de plástico", "Construir uma usina de energia a carvão nas proximidades", "Realizar regularmente limpezas fluviais"},
                    {"Introduzir espécies invasoras", "Expandir a agricultura intensiva", "Criar áreas de conservação e proteção", "Incentivar a caça indiscriminada"},
                    {"Tomar banhos mais longos", "Substituir torneiras antigas por modelos de baixo consumo de água", "Lavar carros com mangueira regularmente", "Deixar as torneiras pingando constantemente"},
                    {"Capturar peixes abaixo do tamanho mínimo permitido", "Utilizar redes de pesca de arrasto", "Respeitar cotas de pesca", "Descartar todas as capturas indesejadas no mar"},
                    {"Usar pesticidas fortes para eliminar as pragas", "Praticar a agricultura de monocultura", "Implementar rotação de culturas", "Desmatar florestas para expandir a terra agrícola"},
                    {"Petróleo", "Carvão", "Energia solar", "Gás natural"},
                    {"Usar carros movidos a gasolina", "Viajar de avião com frequência", "Utilizar veículos elétricos ou de baixa emissão", "Ignorar práticas de carona"},
                    {"Comprar em grandes quantidades e descartar o que não é usado", "Fazer compras diárias sem planejamento", "Armazenar alimentos adequadamente e consumi-los antes de estragarem", "Comer fora com frequência"},
                    {"Uso excessivo de iluminação em festas", "Excesso de iluminação artificial que prejudica o ambiente noturno", "Derramamento de tintas luminosas em cursos d'água", "Luz natural presente em ambientes urbanos"}
                };

                for (int i = 0; i < 10; i++) {
                    system("clear"); // Limpa a tela (para sistemas Unix/Linux; substitua por "cls" no Windows)
                    exibirPergunta(i + 1, perguntas[i], alternativas[i], respostasCorretas[i], ' ');
                    sleep(2); // Congela a tela por 2 segundos

                    do {
                        scanf(" %c", &resposta);
                    } while (resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd');

                    system("clear"); // Limpa a tela novamente
                    exibirPergunta(i + 1, perguntas[i], alternativas[i], respostasCorretas[i], resposta);

                    if (resposta == respostasCorretas[i]) {
                        pontuacao++;
                    }

                    sleep(2); // Congela a tela por 2 segundos
                }

                system("clear"); // Limpa a tela novamente
                printf("Pontuação final: %d/10\n\n", pontuacao);

                break;

            case 2:
                printf("Saindo do jogo. Até a próxima!\n");
                break;

            default:
                printf("Opção inválida. Escolha novamente.\n");
                break;
        }
    } while (opcao != 2);

    return 0;
}
