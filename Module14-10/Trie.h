//
//  Trie.h
//  Module14-10
//
//  Created by Ольга Полевик on 07.09.2021.
//

#ifndef Trie_h
#define Trie_h

#define CHAR_TO_INDEX(c) ((int)c - (int)'a')

#include <string>
#include <vector>

using namespace std;

const int ALPHABET_SIZE = 26;
const int MAX_VARIANTS = 10;

// Структура узла дерева
struct TrieNode
{
   struct TrieNode *children[ALPHABET_SIZE];
   // isEndOfWord - true, если ключ является концом слова
   bool isEndOfWord;
};

TrieNode *getNewNode(void);
void insert(TrieNode*, string);
bool isLastNode(const TrieNode* root);
void recProposition(const TrieNode* root, string currentPrefix, string* result, int& result_length);
int getProposition(TrieNode* root, const string& query, string* result);
#endif /* Trie_h */
