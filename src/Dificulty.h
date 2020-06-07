#pragma once

namespace GameASCII{
    class Dificulty{
        public:
            Dificulty(unsigned int dificulty);
        private:
            char * genetrateField(unsigned int dificulty);
            string lowercase[] = {"abcdefghijklmnopqrstuvwxyz"};
            srting uppercase[] = {"ABCDEFGHIJKLMNOPQRSTUCWXYZ"};
            string special[] = {"/*-+=:;,$µù"}; 
    }
}