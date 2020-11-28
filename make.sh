#!/bin/bash

cd src/

make

mv main.o ./../build/obj
mv task.o ./../build/obj
mv checktask.o ./../build/obj
mv wiki.o ./../build/obj

mv walt ./../build/bin/debug
