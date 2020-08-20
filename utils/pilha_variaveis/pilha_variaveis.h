#ifndef PILHA_VARIAVEIS
#define PILHA_VARIAVEIS

typedef struct PilhaVariaveis {
    struct PilhaVariaveis *cabeca;
    char *tipo;
    struct PilhaVariaveis *proximo;
} PilhaVariaveis;

PilhaVariaveis *cria_pilha_variaveis();
void empilha_variavel(PilhaVariaveis *p, PilhaVariaveis *v);
void desempilha_variavel(PilhaVariaveis *p);


#endif