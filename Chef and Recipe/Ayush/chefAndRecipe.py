t=int(input())
for k in range(t):
    n=int(input())
    l=list(map(int,input().split()))[:n]
    i=0
    c=0
    done=[]
    done1=[]
    while(i<n):
        if l[i] in done:
            print("NO")
            c=1
            break
        else:
            srv=l[i]
            done.append(srv)
            coun=0
            while(i<n and l[i]==srv):
                i+=1
                coun+=1
            if coun in done1:
                print("NO")
                c=1
                break
            else:
                done1.append(coun)
    if c==0:
        print("YES")
