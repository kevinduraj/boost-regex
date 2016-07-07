//
// Created by Kevin Duraj on 7/7/16.
//

#include "SplitString.h"
#include<iostream>
#include<vector>
#include<boost/algorithm/string/split.hpp>
#include<boost/algorithm/string.hpp>

using namespace std;
using boost::is_any_of;

SplitString::SplitString() {

}

void SplitString::regular_string() {

    cout << "Splitting Tab/Space delimited String" << endl;

    std::string str("Kevin   Thomas Duraj");
    std::vector<string> strVec;

    boost::algorithm::split(strVec,str,is_any_of("\t "),boost::token_compress_on);
    std::vector<string>::iterator i;

    for (i = strVec.begin(); i != strVec.end(); i++) {
        cout << *i << endl;
    }

}