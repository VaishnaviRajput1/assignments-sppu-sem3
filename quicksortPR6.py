class quick:
    list1=[20,30,10,40,60,50]

    def quicksort(self,low,high):
        if low<high:
            i=low
            j=high
            pivot=self.list1[i]

            while i<j:
                while pivot>=self.list1[i]:
                    i=i+1
                    if i<j:
                        break
                while pivot<self.list1[j]:
                    j=j-1
                if i<j:
                    temp=self.list1[i]
                    self.list1[i]=self.list1[j]
                    self.list1[j]=temp
            
            if i>=j:
                temp=pivot
                self.list1[low]=self.list1[i]
                self.list1[i]=temp
            
            print(self.list1)
            self.quicksort(low,j-1)
            self.quicksort(j+1,high)
q=quick()
q.quicksort(0,5)


