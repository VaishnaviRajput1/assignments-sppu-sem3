def bubblesort(arr):
    n=len(arr)
    for i in range(n):
        for j in range(0,n-i-1):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j]
            print("\nArray after pass :",i+1)
            print(arr)

def selectionsort(arr):
    n=len(arr)
    for i in range(n):
        min=i
        for j in range(i+1,n):
            if arr[min]>arr[j]:
                min=j
        arr[i],arr[min]=arr[min],arr[i]
        print("\nArray after pass :",i)
        print(arr)

def insertionsort(arr):
    for i in range(1,len(arr)):
        key= arr[i]

        j=i-1
        while j>=0 and key<arr[j]:
            arr[j+1]=arr[j]
            j-=1
            arr[j+1]=key

        print("\nArray after pass :",i)
        print(arr)

arr=[40,20,30,10,50]
print("\n Array before sorting :",arr)

print("""Sort array using:
      1.Bubble sort
      2.Selection sort
      3.Insertion sort
      """)

ch=int(input("\nEnter your choice :"))

if ch==1:
    bubblesort(arr)
if ch==2:
    selectionsort(arr)
if ch==3:
    insertionsort(arr)
else:
    print("\nEnter valid input")

print("\nArray after sorting :",arr)
    

