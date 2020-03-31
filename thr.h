//
// Created by Rares on 31.03.2020.
//

#include <iostream>

class thr{
public:

    thr(){



    }

    void operator()() const {
        int * i;
        float * p;

        std::cout << "hey";
        while(true){
            (*p++)+1.144564542315345;
            (*i++)+1;

        }
    }



};


#ifndef UNTITLED_THR_H
#define UNTITLED_THR_H

#endif //UNTITLED_THR_H
