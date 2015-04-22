#!/bin/bash

make clean;
make;

quick=$(time ./quick | grep "user");

echo "$quick";
