//
//  SLL_Node.h
//  SingleLinkedList
//
//  Created by 김인엽 on 2016. 10. 22..
//  Copyright © 2016년 iykim. All rights reserved.
//

#ifndef SLL_Node_h
#define SLL_Node_h

typedef struct stNode {
    unsigned char *pNext;
    unsigned char *pValue;
} tNode, *ptNode;

typedef struct stList {
    unsigned int unNodeCnt;
    unsigned char *pHead;
} tList, *ptList;

void init_SLL(ptNode *pHead);
void add_SLL();
void del_SLL();
void set_List_SLL();
ptNode srch_SLL();


#endif /* SLL_Node_h */
