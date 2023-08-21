#!/bin/bash

mkdir object_files1

for file in ./c_files/*.c; do
    gcc -c -fPIC "$file" -o "object_files1/$(basename $file .c).o"
done

cd object_files1
gcc -shared -o liball.so *.o
cp liball.so ..

