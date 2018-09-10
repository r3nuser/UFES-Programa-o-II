#include <stdlib.h>
#include <stdio.h>

typedef struct produto {
	int id;
	char* nome;
	float preco;
	int qnt_estoque;
} Produto;

typedef struct lista_produtos {
	produto* p;
	int length;
} LProdutos;

void insertProduto(LProdutos* p, Produto pr){
	p->length++;
}

LProdutos createList(){
	LProdutos* p = NULL;
	p = (LProdutos) malloc( sizeof(LProdutos) );
	p->length = 0;
	return p;
}

void removeProduto(LProdutos* p){
	
}

void alterProduto(LProdutos* p){
	
}

int main(void){
	int operacao = 0;

	

	printf("\n");
	printf("1- Cadastrar novo produto\n");
	printf("2- Aumentar estoque\n");
	printf("3- Diminuir estoque\n");
	printf("4- Remover produto\n");
	printf("5- Sair\n");
	scanf("%d", &operacao);
	if( operacao == 5 ) return 0;

	else main();
}
