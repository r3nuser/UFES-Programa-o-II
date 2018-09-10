#include <stdlib.h>
#include <stdio.h>

typedef struct produto {
	int id;
	char nome[20];
	float preco;
	int qnt_estoque;
} Produto;

typedef struct lista_produtos {
	Produto* p;
	int length;
} LProdutos;

void insertProduto(LProdutos* p, Produto pr){
	pr.id = p->length;
	p->length++;
	p->p = (Produto*) realloc(p->p, sizeof(Produto*) * p->length);
	p->p[p->length - 1] = pr;
}

void selectProduto(LProdutos* p){
	int i = 0;
	for( i = 0 ; i < p->length ; i++ ){
		printf("[%d] %s\n", p->p[i].id, p->p[i].nome);
		printf("Preco: %f | ", p->p[i].preco);
		printf("Qnt. Estoque: %d\n", p->p[i].qnt_estoque);
	}
}

LProdutos* createList(){
	LProdutos* p = (LProdutos*) malloc(sizeof(LProdutos*));
	p->length = 0;
	return p;
}

void removeProduto(LProdutos* p){

}

void alterProduto(LProdutos* p){

}

Produto readProduto(){
	Produto p;

	printf("Insira o nome do produto:\n");
	scanf("%s", p.nome);
	printf("Insira o preco do produto:\n");
	scanf("%f", &p.preco);
	printf("Insira a quantidade em estoque:\n");
	scanf("%d", &p.qnt_estoque);

	return p;
}

int main(void){
	int operacao = 0;

	LProdutos* lista_produtos;
	lista_produtos = createList();
	Produto* p;

	printf("\n");
	printf("1- Cadastrar novo produto\n");
	printf("2- Aumentar estoque\n");
	printf("3- Diminuir estoque\n");
	printf("4- Remover produto\n");
	printf("5- Listar produtos\n");
	printf("6- Sair\n");
	scanf("%d", &operacao);
	switch(operacao){
		case 1:
			p = readProduto();
			insertProduto(lista_produtos, *p);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			selectProduto(lista_produtos);
			break;
		case 6: return 0;
		default:
			printf("Opção invalida\n");
			break;
	}
	main();
}
