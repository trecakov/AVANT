#!/bin/bash


cd testcases/CWE121_Stack_Based_Buffer_Overflow/s01/
$(for f in *.out; do ./$f > $f.txt 2>&1; done) &sleep 15; kill$!
cd ../../


cd CWE122_Heap_Based_Buffer_Overflow/s01/
$(for f in *.out; do ./$f > $f.txt 2>&1; done) &sleep 15; kill$!
cd ../../

cd CWE124_Buffer_Underwrite/s01/
$(for f in *.out; do ./$f > $f.txt 2>&1; done) &sleep 15; kill$!
cd ../../

cd CWE126_Buffer_Overread/s01/
$(for f in *.out; do ./$f > $f.txt 2>&1; done) &sleep 15; kill$!
cd ../../

cd CWE127_Buffer_Underread/s01/
$(for f in *.out; do ./$f > $f.txt 2>&1; done) &sleep 15; kill$!
cd ../../

cd CWE190_Integer_Overflow/s01/
$(for f in *.out; do ./$f > $f.txt 2>&1; done) &sleep 15; kill$!
cd ../../

cd CWE191_Integer_Underflow/s01/
$(for f in *.out; do ./$f > $f.txt 2>&1; done) &sleep 15; kill$!
cd ../../
