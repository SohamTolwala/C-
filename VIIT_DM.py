v=int(input("ENTER VERTEX: "))
e=int(input("ENTER EDGES: "))
b=[] 

print("Enter Connections: ")
for i in range(1,e+1):
    a=list(map(int,input().split()[:2]))
    b.append(a)

count=0
print("Outdegree: ")
for i in range(1,v+1): 
    for j in range(0,e):
        if(b[j][0]==i):
            count+=1
    print("{} : {}".format(i,count))
    count=0
        
flag=0
print("Indegree: ")
for i in range(1,v+1):
    for j in range(0,e):
        if(b[j][1]==i):
            flag+=1
    print("{} : {}".format(i,flag))
    flag=0

   

