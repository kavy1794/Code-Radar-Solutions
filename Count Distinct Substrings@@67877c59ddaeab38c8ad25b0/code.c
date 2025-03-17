#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct TrieNode {
    struct TrieNode *children[26];
} TrieNode;

TrieNode *createNode() {
    TrieNode *node = (TrieNode *)malloc(sizeof(TrieNode));
    for (int i = 0; i < 26; i++) {
        node->children[i] = NULL;
    }
    return node;
}

int insertSubstring(TrieNode *root, char *str, int start) {
    TrieNode *current = root;
    int count = 0;

    for (int i = start; str[i] != '\0'; i++) {
        int index = str[i] - 'a';
        if (current->children[index] == NULL) {
            current->children[index] = createNode();
            count++;
        }
        current = current->children[index];
    }

    return count;
}

int countDistinctSubstrings(char *str) {
    TrieNode *root = createNode();
    int total = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        total += insertSubstring(root, str, i);
    }

    return total;
}

int main() {
    char str[100];
    scanf("%s", str