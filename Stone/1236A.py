import sys

def In():
    return sys.stdin.readline()

def Out(x):
    return sys.stdout.write(str(x)+'\n')


def Solve(arr):
    count=0
    obj1=min(arr[1],arr[2]//2)
    count+=obj1*3
    arr[1]=arr[1]-obj1
    arr[2]=arr[2]-obj1*2
    obj2=min(arr[0],arr[1]//2)
    count+=obj2*3
    arr[0]=arr[0]-obj2
    arr[1]=arr[1]-obj2*2
    return count
    



t=int(In())
for i in range(t):
    arr=list(map(int,In().split()))
    Out(Solve(arr))
