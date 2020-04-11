#!/bin/bash
set -eou pipefail
###
 # @Github: https://github.com/Certseeds/CS205_C_CPP
 # @Organization: SUSTech
 # @Author: nanoseeds
 # @Date: 2020-04-11 23:29:35
 # @LastEditors: nanoseeds
 # @LastEditTime: 2020-04-11 23:29:45
 ###
language=("Armenian" "Georgian" "Lao" "Malayalam" "Devanagari" "Georgian")
if [[ -f ass3_03.out ]]; then
    rm ass3_03.out
fi
g++ Assignment_3_03.cpp utf8.c -o ass3_03.out -Wall -Wextra
for (( i = 1,j=0; i < 7; i++,j++ )); do
    output=$(./ass3_03.out < "./../test/sample${i}.txt")
    if [[ ${output} != ${language[${j}]} ]]; then
        echo "${i} error";
        exit 1;
    fi
done
echo "no error"