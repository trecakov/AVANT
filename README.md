To compile all testcases, from the main directory type:
make -j <number of cores to use> -f Makefile.new individuals

To compile a specific testcases group, go to the testcase directory and type:
make -j <number of cores to use> individuals

To clean, use command:
make -j <number of cores to use> -f Makefile.new clean

To run, there are two ways. One is to run individual testcases group is to go to the specific testcase group directory and type: 

for f in *.out; do ./$f > $f.txt 2>&1; done

This will output results in *.txt files.


Another way is to run them all automatically by:
./run.sh

This script runs all the testcases.

Some of the testcases need user input. Those ones wont give any results and it will get stuck in the infinite loop. Those test cases need to be ran individualy.


