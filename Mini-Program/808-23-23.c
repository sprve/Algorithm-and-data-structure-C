#include<stdio.h>
#include<stdlib.h>

typedef char TElemtype;

typedef struct BitNode {
	TElemtype data;
	struct BitNode* lchild, * rchild;
}BiTNode, * BiTree;

void InitTree(BiTree* head)
{
	char data;
	scanf("%c", &data);
	if (data == '#')
	{
		*head = NULL;
		return;
	}
	*head = (BiTNode*)malloc(sizeof(BiTNode));
	(*head)->data = data;
	InitTree(&(*head)->lchild);
	InitTree(&(*head)->rchild);
}

void PreTree(BiTree head)
{
	if (head)
	{
		printf("%c ", head->data);
		PreTree(head->lchild);
		PreTree(head->rchild);
	}
}

void CountTNode(BiTree head, int* count) //关键函数
{
	if (head)
	{
		if (head->lchild != NULL && head->rchild != NULL)
			*count = *count + 1;
		CountTNode(head->lchild, count);
		CountTNode(head->rchild, count);
	}
}

int main(void)
{
	int count = 0;
	BiTNode* head = NULL;
	InitTree(&head);
	PreTree(head);
	CountTNode(head, &count);
	printf("%d", count);
	return 0;
}