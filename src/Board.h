#pragma once

namespace GameASCII{
    class Board{
        public:
            Board(char * matrix, unsigned int size);
        private:
            char matrix[][];
            unsigned int size;
            string lowercase[] = {"abcdefghijklmnopqrstuvwxyz"};
            srting uppercase[] = {"ABCDEFGHIJKLMNOPQRSTUCWXYZ"};
            string special[] = {"/*-+=:;,$µù"}; 
    }
}