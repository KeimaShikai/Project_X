#!/bin/sh

BUILD_DIR="_result"

if [ ! -d $BUILD_DIR ]; then
    mkdir $BUILD_DIR;
fi

cd $BUILD_DIR
cmake ../
make
