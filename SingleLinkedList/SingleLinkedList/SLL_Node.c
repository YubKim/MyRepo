//
//  SLL_Node.c
//  SingleLinkedList
//
//  Created by 김인엽 on 2016. 10. 22..
//  Copyright © 2016년 iykim. All rights reserved.
//

#include "SLL_Node.h"

int init_SLL(int nCntList)
{
    if(pHead == NULL || pList == NULL)
    {
        // Null Pointer
        return RET_NULL_PTR;
    }
    
    memset((stNode *)pHead, 0x00, sizeof(stNode));
    memset((stList *)pList, 0x00, sizeof(stList));
    
    pList->unNodeCnt = 1;
    pList->pHead = pHead;
    
    return RET_SUCC;
}

int deinit_SLL(int nCntList)
{
    unsigned int unCntNode;
    int i;
    stNode *pNode = NULL;
    stNode *pNextNode = NULL;
    
    if(pList == NULL)
        return RET_NULL_PTR;
    
    pNode = pList->pHead;
    
    unCntNode = pList->unNodeCnt;
    for (i = 0 ; i < unCntNode; i++)
    {
        if(pNode->pNext == NULL && i != unCntNode - 1)
        {
            //Invlid unNodeCnt
            return RET_FAIL;
        }
        pNextNode = (stNode *)pNode->pNext;
        free((stNode *)pNode);
        pNode = pNextNode;
    }
    return RET_SUCC;
}

int add_SLL(unsigned int unKeyValue, unsigned char *pData)
{
    stNode *pNode = NULL;
    stNode *pNextNode = NULL;
    stNode *pAddNode = NULL;
    
    if(pList->pHead == NULL)
        return RET_NULL_PTR;
    
    pNode = pList->pHead;
    pNextNode = (stNode *)pNode->pNext;
    
    while(1)
    {
        if(pNextNode == NULL)
            break;
        pNode = pNextNode;
        pNextNode = (stNode *)pNode->pNext;
    }
    
    pAddNode = malloc(sizeof(stNode));
    pNextNode = pAddNode;
    pList->unNodeCnt++;
    pAddNode->unKeyValue = pList->unNodeCnt++;
    
    return RET_SUCC;
}

int del_SLL(unsigned int unKeyValue)
{
    return RET_SUCC;
}
//int set_List_SLL();
int srch_SLL(unsigned int unKeyValue, stNode *pSrchNode)
{
    stNode *pNode = NULL;
    stNode *pNextNode = NULL;
    unsigned int unNodeCnt = 0;
    int i;
    unNodeCnt = pList->unNodeCnt;
    
    if(pList->pHead == NULL)
    {
        //Null Pointer
        return RET_NULL_PTR;
    }
    
    pNode = pList->pHead;
    pNextNode = (stNode *)pHead->pNext;
    
    for(i=0; i<unNodeCnt; i++)
    {
        if(pNode->unKeyValue == unKeyValue)
        {
            *pSrchNode = *pNode;
            return RET_SUCC;
        }
        if(pNextNode == NULL)
            return RET_FAIL;
        pNode = pNextNode;
        pNextNode = (stNode *)pNextNode->pNext;
    }
    return RET_FAIL;
}

