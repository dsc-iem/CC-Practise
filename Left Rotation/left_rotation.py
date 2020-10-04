import sys

def In():
    return sys.stdin.readline()

def Out(x):
    return sys.stdout.write(str(x)+'\n')


n,d=map(int,In().split())
arr=list(map(str,In().split()))
d=d%n
ans=arr[d:]+arr[:d]
Out(' '.join(ans))
