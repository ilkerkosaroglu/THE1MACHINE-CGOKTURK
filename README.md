# THE1MACHINE-CGOKTURK
--------

THE-1 Data generator and tester for the CENG140 (Programming in C) Section 3 students

**Respects to Gokturk Ucoluk (Taksitle satan)**

To use this tester, first, copy the "data1G.txt", "the1machine.gokturk" and "starttest.py" files to your computer where your compiled code resides, then, in your terminal, type the following command:
```sh
python starttest.py yourexecutable.out
```
and it should work.

Note that "yourexecutable.out" is something like.:    **a.out** (your compiled the1.c file)

-------

(if you want, you can compile the code yourself. Source code is available in the SourceCode folder. This is highly optional)
To generate the "the1machine.gokturk" file (and the data that comes with it) , run the following commands:
```bash
g++ DataMachine.cpp -o sub.o && ./sub.o && g++ checker.cpp -o sub2.o
./sub2.o && g++ Tester.cpp -o the1machine.gokturk
```

and that's it!

