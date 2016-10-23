//
//  SLL_Node.h
//  SingleLinkedList
//
//  Created by 김인엽 on 2016. 10. 22..
//  Copyright © 2016년 iykim. All rights reserved.
//

#ifndef SLL_Node_h
#define SLL_Node_h

#include <stdio.h>
#include <stdlib.h>

typedef enum _eCmnRetValue {
    RET_FAIL = -1,
    RET_SUCC = 0,
    RET_NULL_PTR = 1
} eCmnRetVal;

typedef struct _stNode {
    unsigned char   *pNext;
    unsigned int    unKeyValue;
    unsigned char   *pData;
} stNode, *ptNode;

typedef struct _stList {
    unsigned int    unNodeCnt;
    stNode          *pHead;
} stList, *ptList;

stNode *pHead;
stList *pList;

int init_SLL(int nCntList);
int deinit_SLL(int nCntList);
int add_SLL(unsigned int unKeyValue, unsigned char *pData);
//int del_SLL();
int set_List_SLL();
int srch_SLL(unsigned int unKeyValue, stNode *pSrchNode);


#endif /* SLL_Node_h */
