def Bridge(l1, size):
    Obt = str()
    TIME = 0
    while(1):
        A = l1[0]
        if(size==1):
            Obt += str(A)
            TIME += A
            break
        B = l1[1]
        if(size==2):
            Obt += str(A) +" "+ str(B)
            TIME += B
            break
        if(size==3):
            Obt += str(A) +" "+ str(B) +"\n"+ str(A) +"\n"+ str(A) +" "+ str(l1[2])
            TIME += B+A+l1[2]
            break
        Z = l1[size-1]
        Y = l1[size-2]
        if(A+Y < (2*B)):
            Obt += str(A)+" "+str(Z)+"\n"+str(A)+"\n"+str(A)+" "+str(Y)+"\n"+str(A)+"\n"
            TIME += Z+A+Y+A
        else:
            Obt += str(A)+" "+str(B)+"\n"+str(A)+"\n"+str(Y)+" "+str(Z)+"\n"+str(B)+"\n"
            TIME += B+A+Z+B
        l1.remove(Y)
        l1.remove(Z)
        size = len(l1)
    print("\n",TIME,"\n",Obt)

loop = int(input())
print("\n\n")
for i in range(0, loop):
    size = int(input())
    l = []
    for i in range(0, size):
        l.append(int(input()))
    l.sort()
    Bridge(l, size)