//
// Created by will on 22-6-20.
//

#include "person.pb.h"

#include <iostream>

int main(int argc,char ** argv){

    pb::Person person;

    person.add_score(1);
    person.add_score(2);

    std::cout<<person.score_size()<<std::endl;
}