

#define MaxNumberOfLevels 16
#define MaxLevel (MaxNumberOfLevels-1) 

typedef struct nodeStructure *node;
typedef struct nodeStructure
{
    keyType 		key;	// key值
    valueType 		value;	// value值
    node 			forward[1];	
};

typedef struct listStructure{
	int 			level; 	  	/* Maximum level of the list  */
	node 			header; 	/* pointer to header */
} * list; 

list newList();

boolean insert(list l,keyType key,valueType value); 

boolean remove(list l,keyType key);

boolean search(list l,keyType key,valueType &value); 

