# THE1MACHINE-CGOKTURK
--------

THE-1 Data generator and tester for the CENG140 (Programming in C) Section 3 students

**Respects to Gokturk Ucoluk (Taksitle satan)**   

 **If testing takes too long, use the smalldata instead. (you should rename it to data1G first.**

To use this tester, first, copy the "data1G.txt", "the1machine.gokturk" (on windows, you need the the1machine.gokturk.exe file) and "starttest.py" files from "MustFiles" folder to your computer where your compiled code resides, then, in your terminal, type the following command on linux:
```sh
python starttest.py yourexecutable.out
```
or if you are on windows,
```sh
python starttest.py yourexecutable.exe
```
and it should work.

**If testing takes too long, use the smalldata instead. (you should rename it to data1G first.**

Note that "yourexecutable.out" is something like.:    **a.out** (your compiled the1.c file)

-------

(if you want (or you get an error otherwise), you can compile the code yourself. Source code is available in the SourceCode folder. This is highly optional)
To generate the "the1machine.gokturk" file (and the data that comes with it) , run the following commands on linux:
```bash
g++ DataMachine.cpp -o sub.o && ./sub.o && g++ checker.cpp -o sub2.o
./sub2.o && g++ Tester.cpp -o the1machine.gokturk
```
or if you are on Windows,
```bash
g++ DataMachine.cpp -o sub.exe
sub.exe 
g++ checker.cpp -o sub2.exe
sub2.exe 
g++ Tester.cpp -o the1machine.gokturk.exe
```
and that's it!

