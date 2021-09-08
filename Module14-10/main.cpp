//
//  main.cpp
//  Module14-10
//
//  Created by Ольга Полевик on 07.09.2021.
//

#include <iostream>
#include "Trie.h"

int main(int argc, const char * argv[])
{
    struct TrieNode* root = getNewNode();
    insert(root, "in");
    insert(root, "insert");
    insert(root, "insertion");
    insert(root, "int");
    insert(root, "interior");
    insert(root, "example");
    insert(root, "execute");
    insert(root, "exit");
    insert(root, "exercize");
    insert(root, "exam");
   
    //std::string buffer;
    string input;
    
    while(true)
    {
        cout << "Begin to type a word then press Enter, or type 'q' for exit: ";
        cin >> input;
        if(input == "q")
        {
            break;
        }
            
        string props[MAX_VARIANTS];
        const int num_variants = getProposition(root, input, props);
                
        if(num_variants != 0)
        {
            for ( size_t i = 0; i < num_variants; ++i )
            std::cout << props[i] << std::endl;
        }
    }
    
    //if(!buffer.empty())
    /*if(!input.empty())
    {
    cout << "Result: " << input << std::endl;
    }*/
     
    /*int complete = printProposition(root, "ex");
     
        if(complete == -1)
            cout << "No other strings found with this prefix\n";
     
        else if(complete == 0)
            cout << "No string found with this prefix\n";*/
    
    return 0;
}
