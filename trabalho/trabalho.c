#include <stdio.h>
#include <string.h>

typedef struct produto_t {
    int id;
    char nome[50];
    char categoria[30];
    float preco;
    int quantidade;
} Produto;

int main() {
    Produto estoque[10];
    int total = 0;
    int opcao = 0;

    printf("Bem vindo ao nosso sistema de cadastro! Pressione ENTER para continuar.\n");
    getchar();

    do {
        printf("<========================>\n");
        printf("      MENU PRINCIPAL      \n");
        printf("<========================>\n");
        printf("1. Cadastrar produto\n");
        printf("2. Listar produtos\n");
        printf("3. Buscar produtos por ID\n");
        printf("4. Atualizar produtos\n");
        printf("5. Remover produtos\n");
        printf("0. Sair\n");
        printf("<========================>\n");
        printf("Escolha uma opcao: \n");

        if (scanf("%i", &opcao) != 1) {
            while (getchar() != '\n');
            printf("ERRO!!\n");
            printf("Tente novamente e digite um numero\n");
            opcao = -1;
            continue;
        }
        getchar();

        switch (opcao) {
            case 1:
                if (total >= 10) {
                    printf("Limite de %i registros atingidos. Remova um antes de cadastrar.\n", 10);
                } else {
                    int novo_id;
                    printf("Cadastrar novo produto\n");
                    printf("ID (numero inteiro positivo): ");
                    if (scanf("%i", &novo_id) != 1 || novo_id <= 0) {
                        while (getchar() != '\n');
                        printf("ERRO!!!\n");
                        printf("ID invalido. Deve ser numero positivo.\n");
                    } else {
                        getchar();
                        int duplicado = 0;
                        for (int i = 0; i < total; i++) {
                            if (estoque[i].id == novo_id) {
                                duplicado = 1;
                                break;
                            }
                        }

                        if (duplicado) {
                            printf("ERRO!!\n");
                            printf("Ja existe um produto com ID %i\n", novo_id);
                        } else {
                            estoque[total].id = novo_id;

                            printf("Nome (maximo de 49 caracteres): \n");
                            fgets(estoque[total].nome, sizeof(estoque[total].nome), stdin);
                            estoque[total].nome[strcspn(estoque[total].nome, "\n")] = '\0';

                            if (strlen(estoque[total].nome) == 0) {
                                printf("ERRO!!\n");
                                printf("Nome nao pode ser vazio.\n");
                            } else {
                                printf("Categoria (maximo 29 caracteres): \n");
                                fgets(estoque[total].categoria, sizeof(estoque[total].categoria), stdin);
                                estoque[total].categoria[strcspn(estoque[total].categoria, "\n")] = '\0';

                                printf("Preco (ex: 29.90): ");
                                if (scanf("%f", &estoque[total].preco) != 1 || estoque[total].preco < 0) {
                                    while (getchar() != '\n');
                                    printf("ERRO!!\n");
                                    printf("Preco invalido.\n");
                                } else {
                                    getchar();
                                    printf("Quantidade: ");
                                    if (scanf("%i", &estoque[total].quantidade) != 1 || estoque[total].quantidade < 0) {
                                        while (getchar() != '\n');
                                        printf("ERRO!!\n");
                                        printf("Quantidade invalida.\n");
                                    } else {
                                        getchar();
                                        total++;
                                        printf("Produto cadastrado com sucesso! Total de registros: %i/%i\n", total, 10);
                                    }
                                }
                            }
                        }
                    }
                }
                break;

            case 2:
                if (total == 0) {
                    printf("Nenhum produto cadastrado.\n");
                } else {
                    printf("\n%-6s %-20s %-15s %10s %10s\n",
                           "ID", "Nome", "Categoria", "Preco", "Qtd");
                    printf("===============================================\n");
                    for (int i = 0; i < total; i++) {
                        printf("%-6i %-20s %-15s %10.2f %10i\n",
                               estoque[i].id,
                               estoque[i].nome,
                               estoque[i].categoria,
                               estoque[i].preco,
                               estoque[i].quantidade);
                    }
                    printf("===============================================\n");
                    printf("Total: %i/%i registros\n", total, 10);
                }
                break;

            case 3:
                if (total == 0) {
                    printf("Nenhum produto cadastrado.\n");
                } else {
                    int busca_id;
                    printf("\nBuscar Produto\n");
                    printf("Informe o ID: ");
                    if (scanf("%i", &busca_id) != 1) {
                        while (getchar() != '\n');
                        printf("ERRO!!\n");
                        printf("ID invalido.\n");
                    } else {
                        getchar();
                        int encontrado = -1;
                        for (int i = 0; i < total; i++) {
                            if (estoque[i].id == busca_id) {
                                encontrado = i;
                                break;
                            }
                        }

                        if (encontrado == -1) {
                            printf("Produto com ID %i nao encontrado.\n", busca_id);
                        } else {
                            printf("\nID         : %i\n", estoque[encontrado].id);
                            printf("Nome       : %s\n", estoque[encontrado].nome);
                            printf("Categoria  : %s\n", estoque[encontrado].categoria);
                            printf("Preco      : R$%.2f\n", estoque[encontrado].preco);
                            printf("Quantidade : %i\n", estoque[encontrado].quantidade);
                        }
                    }
                }
                break;

            case 4:
                if (total == 0) {
                    printf("Nenhum produto cadastrado.\n");
                } else {
                    int att_id;
                    printf("\nAtualizar Produto\n");
                    printf("Informe o ID do produto que deseja atualizar: \n");
                    if (scanf("%i", &att_id) != 1) {
                        while (getchar() != '\n');
                        printf("ERRO!!\n");
                        printf("ID invalido.\n");
                    } else {
                        getchar();
                        int pos = -1;
                        for (int i = 0; i < total; i++) {
                            if (estoque[i].id == att_id) {
                                pos = i;
                                break;
                            }
                        }

                        if (pos == -1) {
                            printf("Produto com ID %i nao encontrado.\n", att_id);
                        } else {
                            printf("Novo nome (atual: %s): ", estoque[pos].nome);
                            char tmp_nome[50];
                            fgets(tmp_nome, sizeof(tmp_nome), stdin);
                            tmp_nome[strcspn(tmp_nome, "\n")] = '\0';
                            if (strlen(tmp_nome) > 0) {
                                strcpy(estoque[pos].nome, tmp_nome);
                            }

                            printf("Nova categoria (atual: %s): ", estoque[pos].categoria);
                            char tmp_cat[30];
                            fgets(tmp_cat, sizeof(tmp_cat), stdin);
                            tmp_cat[strcspn(tmp_cat, "\n")] = '\0';
                            if (strlen(tmp_cat) > 0) {
                                strcpy(estoque[pos].categoria, tmp_cat);
                            }

                            printf("Novo preco (atual: %.2f, negativo para manter): ", estoque[pos].preco);
                            float tmp_preco;
                            if (scanf("%f", &tmp_preco) == 1 && tmp_preco >= 0) {
                                estoque[pos].preco = tmp_preco;
                            }
                            getchar();

                            printf("Nova quantidade (atual: %i, negativo para manter): ", estoque[pos].quantidade);
                            int tmp_qtd;
                            if (scanf("%i", &tmp_qtd) == 1 && tmp_qtd >= 0) {
                                estoque[pos].quantidade = tmp_qtd;
                            }
                            getchar();

                            printf("Produto ID %i atualizado com sucesso!\n", att_id);
                        }
                    }
                }
                break;

            case 5:
                if (total == 0) {
                    printf("[AVISO] Nenhum produto cadastrado.\n");
                } else {
                    int rem_id;
                    printf("\n-- Remover Produto --\n");
                    printf("Informe o ID do produto a remover: ");
                    if (scanf("%d", &rem_id) != 1) {
                        while (getchar() != '\n');
                        printf("ERRO!!\n");
                        printf("ID invalido.\n");
                    } else {
                        getchar();
                        int pos = -1;
                        for (int i = 0; i < total; i++) {
                            if (estoque[i].id == rem_id) {
                                pos = i;
                                break;
                            }
                        }

                        if (pos == -1) {
                            printf("Produto com ID %i nao encontrado.\n", rem_id);
                        } else {
                            char confirm;
                            printf("Confirma remocao de \"%s\" (ID %d)? (s/n): ",
                                   estoque[pos].nome, rem_id);
                            scanf(" %c", &confirm);
                            getchar();

                            if (confirm == 's' || confirm == 'S') {
                                for (int i = pos; i < total - 1; i++) {
                                    estoque[i] = estoque[i + 1];
                                }
                                total--;
                                printf("Produto removido. Total de registros: %d/%d\n", total, 10);
                            } else {
                                printf("Remocao cancelada.\n");
                            }
                        }
                    }
                }
                break;

            case 0:
                printf("Encerrando o sistema.\n");
                printf("Ate mais!\n");
                break;

            default:
                printf("ERRO!!!\n");
                printf("Opcao invalida. Escolha entre 0 e 5.\n");
        }
    } while (opcao != 0);

    return 0;
}