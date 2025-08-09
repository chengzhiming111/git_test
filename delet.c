// 函数：按位置删除节点（位置从0开始）
// 返回值：1表示删除成功，0表示位置无效
int deleteNodeByPosition(struct ListNode** headRef, int position) {

    
    struct ListNode* current = *headRef;
    struct ListNode* previous = NULL;
    

    // 查找指定位置的节点
    int currentIndex = 0;
    while (current != NULL && currentIndex < position) {
        previous = current;
        current = current->next;
        currentIndex++;
    }
    
    // 如果位置超出链表长度

    

    
    // 释放内存
    free(current);
    printf("成功删除位置 %d 的节点\n", position);
    return 1;
}
