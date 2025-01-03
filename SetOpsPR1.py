Set_U={1,2,3,4,5,6,7,8,9}
size_U=len(Set_U)
print("Set U:",Set_U)
print("Size of U:",size_U)

Set_A={1,2,3,3,4,5}
size_A=len(Set_A)
print("Set A:",Set_A)
print("Size of A:",size_A)

Set_B={5,4,6,7,8,9}
size_B=len(Set_B)
print("SSet B:",Set_B)
print("Size of B:",size_B)

Set_C={2,3,7,8,9,4}
size_C=len(Set_C)
print("Set C:",Set_C)
print("Size of C:",size_C)


print("A union B")
AuniB=[]
for x in Set_A:
    AuniB+=[x]
for x in Set_B:
    flag=0
    for y in Set_A:
        if x==y:
            flag=1
    if flag==0:
        AuniB+=[x]
print("A union B:",AuniB)

print("1)A intersection B")
AintB=[]
for x in Set_A:
    flag=0
    for y in Set_B:
        if x==y:
            flag=1
    if flag==1:
        AintB+=[x]
print("List of Students who play both cricket and badminton:",AintB)   

print("A intercection C")
AintC=[]
for x in Set_A:
    flag=0
    for y in Set_C:
        if x==y:
            flag=1
    if flag==1:
        AintC+=[x]
print("List of students who play cricket and football both:",AintC)

print("2)A union B minus A intersection B")
AuniB_AintB=[]
for x in AuniB:
    flag=0
    for y in AintB:
        if x==y:
            flag=1
    if flag==0:
        AuniB_AintB+=[x]
print("List of Students who play either cricket or badminton but not both:",AuniB_AintB)

print("3)Union minus A union B")
U_AuniB=[]
for x in Set_U:
    flag=0
    for y in AuniB:
        if x==y:
            flag=1
    if flag==0:
        U_AuniB+=[x]
print("Number of students who play neither cricket nor badminton:",U_AuniB)

print("4)A intersection C minus B")
AintC_B=[]
for x in AintC:
    flag=0
    for y in Set_B:
        if x==y:
            flag=1
    if flag==0:
        AintC_B+=[x]
print("Number of students who play cricket and football but not badminton:",AuniB_AintB)