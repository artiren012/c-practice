//
//  ex4-linked-list.c
//  c-practice
//

#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int key;
    struct _node *next;
} node;

node *head, *tail;

void init_list(void) {
    head = (node*)malloc(sizeof(node));
    tail = (node*)malloc(sizeof(node));
    head->next = tail;
    tail->next = tail;
}

node *insert_after(int key, node *t) {
    node *s;
    s = (node*)malloc(sizeof(node));
    s->key = key;
    s->next = t->next;
    t->next = s;
    return s;
}

int delete_next(node *t) {
    node *s;
    if (t->next == tail)
        return 0;
    s = t->next;
    t->next = t->next->next;
    free(s);
    return 1;
}

node *find_node(int key) {
    node *s;
    s = head->next;
    while (s->key != key && s != tail)
        s = s->next;
    return s;
}

int delete_node(int key) {
    node *s, *p; // s 검색할 노드 p 이전 노드
    p = head;
    s = head->next;
    while (s->key != key && s != tail) {
        p = p->next;
        s = p->next;
    }
    if (s != tail) {
        p->next = s->next;
        free(s);
        return 1;
    } else {
        return 0;
    }
}

node *insert_node(int insertKey, int beforeKey) {
    node *s, *p, *r; // s 키 검색 p s이전 노드 r 삽입노드
    p = head;
    s = p->next;
    while (s->key != beforeKey && s != tail) {
        p = p->next;
        s = p->next;
    }
    if (s != tail) {
        r = (node*)malloc(sizeof(node));
        r->key = insertKey;
        r->next = s;
        p->next = r; // p - r - s
    }
    return p->next;
}
