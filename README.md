# AVANT: An Automated Vulnerability Analysis Tool for Assessing Security Vulnerabilities in Processor Architectures

AVANT is a vulnerability checking tool that is architecture-agnostic and reports vulnerabilities found in our test suite.


### Prerequisites

You will need to install Address Sanitizer and LLVM.


### Installing

Download the github AVANT repository. 

```
git clone https://github.com/trecakov/AVANT.git
```


## How to compile

To compile all testcases, from the main directory type:

```
make -j <number of cores to use> -f Makefile.new individuals
```


To compile a specific testcases group, go to the testcase directory and type:

```
make -j <number of cores to use> individuals
```

To clean, use command:

```
make -j <number of cores to use> -f Makefile.new clean
```


## How to run:

To run, there are two ways. One is to run individual testcases group is to go to the specific testcase group directory and type: 

```
for f in *.out; do ./$f > $f.txt 2>&1; done
```
This will output results in *.txt files.


Another way is to run them all automatically by:

```
./run.sh
```

Some of the testcases require user input. Those ones won't give any results and the command will get stuck in the infinite loop. Those test cases need to be ran individually.

## Testcase suite:

Consists of 7 vulnerability groups:
CWE 121 – Stack-based Buffer Overflow
CWE 122 – Heap-based Buffer Overflow
CWE 124 – Buffer Underwrite
CWE 126 – Buffer Over-read
CWE 127 – Buffer Under-read
CWE 190 – Integer Overflow
CWE 191 – Integer Underflow


```
for f in *.out; do ./$f > $f.txt 2>&1; done
```
This will output results in *.txt files.
