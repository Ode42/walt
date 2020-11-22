#!/bin/bash

cd src/

make

mv main.o ./../build/obj
mv task.o ./../build/obj
mv walt ./../build/bin