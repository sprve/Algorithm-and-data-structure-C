#ifdef root
#define root
#endif

#define TRUE 1001
#define FALSE 1002
#define OK 1003
#define ERROR 1004
#define RANDOM 100
#define MAXSIZE 20

typedef struct ScanfQueue {
	int data[MAXSIZE];
	int length;
} ScanfQueue;

typedef int Bool;

typedef char EleType;
typedef struct TNode {  
	EleType data;
	struct TNode* lchild,*rchild;
} TNode;