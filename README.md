# THE1MACHINE-CGOKTURK

THE-1 Data generator and tester for the CENG140 (Programming in C) Section 3 students

**Respects to Gokturk Ucoluk (Taksitle satan)**

To use this tester, in your terminal (bash, or PowerShell if you are on windows(not tested)) type the following command:
```sh
./the1machine.gokturk | ./"yourfinalexecutable" | ./the1machine.gokturk
```
and it should work.

Note that "yourfinalexecutable" is something like.:    **a.out** (your compiled the1.c file)


To generate the "the1machine.gokturk" file (and the data that comes with it) , run the following command:
```bash
g++ DataMachine.cpp -o the1machine.gokturk && ./the1machine.gokturk && g++ checker.cpp -o the1machine.gokturk && ./the1machine.gokturk && g++ Tester.cpp -o the1machine.gokturk
```

and that's it!

