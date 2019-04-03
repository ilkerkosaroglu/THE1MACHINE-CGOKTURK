from subprocess import Popen, PIPE
import sys
import os
print ("testing.. this may take a while (a couple of seconds)")
arguments=sys.argv[1:]
pref="./" if os.name != "nt" else ".\\"
if os.name!="nt":
    os.system("chmod"+" 777 "+pref+"the1machine.gokturk")
p = Popen([pref+'the1machine.gokturk'], shell=True, stdout=PIPE, stdin=PIPE)
OUT=[]
WR=[]
x=p.stdout.readline().strip()
x2=p.stdout.readline().strip()
x3=p.stdout.readline().strip()
x4=p.stdout.readline().strip()
x5=p.stdout.readline().strip()
OUT.append( x  )
OUT.append( x2 )
OUT.append( x3 )
OUT.append( x4 )
OUT.append( x5 )
while x4:
    the = Popen([pref+arguments[0]], shell=True, stdout=PIPE, stdin=PIPE)
    the.stdin.write(x4+"\n")
    the.stdin.write(x5+"\n")
    the.stdin.flush()
    result = the.stdout.readline().strip()
    # OUT.append( result,"PYTHON"
    # the = Popen(['./the1tt'], shell=True, stdout=PIPE, stdin=PIPE)
    p.stdin.write(result+"\n")
    p.stdin.flush()
    x0=p.stdout.readline().strip()
    x=p.stdout.readline().strip()
    if x.startswith("--!"):
        WR.append(x2[27:])
    x2=p.stdout.readline().strip()
    OUT.append( x0 )
    OUT.append( x )
    OUT.append( x2 )
    if x.startswith("--!"):
        x2=p.stdout.readline().strip()
        OUT.append( x2 )
        x2=p.stdout.readline().strip()
        OUT.append( x2 )
    x3=p.stdout.readline().strip()
    x4=p.stdout.readline().strip()
    x5=p.stdout.readline().strip()
    OUT.append( x3 )
    OUT.append( x4 )
    OUT.append( x5 )
x=p.stdout.readline().strip()
OUT.append( "\033[93m"+x+"\033[00m" )
for i in OUT:
    print (i)
print ("\nlast 25 (or less) wrong cases:\n-----")
print (WR[-25:])
