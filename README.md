# THE1MACHINE-CGOKTURK
--------

THE-1 Data generator and tester for the CENG140 (Programming in C) Section 3 students

**Respects to Gokturk Ucoluk (Taksitle satan)**

To use this tester, firstly, copy the "data1G.txt" and "the1machine.gokturk" files to your computer where your compiled code is, then, in your terminal, type the following command:
```sh
./the1machine.gokturk | ./yourfinalexecutable.out | ./the1machine.gokturk
```
and it should work.

Note that "yourfinalexecutable.out" is something like.:    **a.out** (your compiled the1.c file)

-------

(if you want, you can compile the code yourself. Source code is available in the SourceCode folder. This is highly optional)
To generate the "the1machine.gokturk" file (and the data that comes with it) , run the following commands:
```bash
g++ DataMachine.cpp -o sub.o k && ./sub.o && g++ checker.cpp -o sub2.o
./sub2.o && g++ Tester.cpp -o the1machine.gokturk
```

and that's it!

