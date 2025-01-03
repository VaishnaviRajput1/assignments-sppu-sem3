class stringops:
    def len_return(self,str):
        count=0
        for i in str:
            count+=1
        return count
    
    def split(self,str):
        result=[]
        current_word=""

        for char in str:
            if char=="":
                if current_word:
                    result.append(current_word)
                    current_word=""
            else:
                current_word+=char
            
            if current_word:
                result.append(current_word)

        return result


    def long(self):
        str1=input("Enter a string : ")
        l1=self.split(str1)
        print(l1)
        max=[]
        for i in range(self.len_return(l1)):
            max=l1[i]
            if(self.len_return(max)<self.len_return(l1[i-1])):
                max=l1[i-1]
        print("The longest word is : ",max)


    def charfreq(self):
        str2=input("Enter a string:")
        char=input("Enter a character:")
        a=0
        for i in range(self.len_return(str2)):
            if(char==str2[i]):
                a+=1
        print("The frequency of ",char," in ",str2," is ", a)

    def palindrome(self):
        str=input("Enter a string to check if its a palindrome:")
        a=0
        b=self.len_return(str)-1
        count=0

        while(a<=b):
            if(str[a]==str[b]):
                a=a+1
                b=b-1
                count=1
            else:
                a=a+1
                b=b-1
                continue
        
        if(count==1):
            print(str," is a palindrome")
        else:
            print(str," is not a palindrome")

    def display_index(self):
        str=input("Enter a string:")
        sub=input("Enter a substring:")
        length=self.len_return(sub)
        flag=0
        for i in range(len(str)):
            if(sub==str[i:length]):
                index=i
                flag=1
                break
            length+=1
        if(flag==1):
            print("The substring exists in string at index :", index)
        elif(flag==0):
            print("the substring is not a part of the string")

    
    def wordfreq(self):
        str=input("Enter string:")
        ui=[]
        count=[0,0,0,0,0,0,0]
        l1=self.split(str)
        len1=self.len_return(l1)
        for i in range(0,len1):
            if(l1[i] in ui):
                continue
            else:
                for j in range(i,len1):
                    if(l1[i]==l1[j]):
                        count[i]+=1
                    ui.append(l1[i])
        print("The word appears : ", l1[i], ":", count)

obj=stringops()
c='y'
while(c=='y'):
    print("1.To display length of the word")
    print("2.To determine frequency of character")
    print("3.To check if string is a palindrome")
    print("4.To display index of first appearance")
    print("5.To display ocurrence of a word")
    print("6. To Exit")
    ch=int(input("Enter your choice:"))
    if(ch==1):
        obj.long()
    elif(ch==2):
        obj.charfreq()
    elif(ch==3):
        obj.palindrome()
    elif(ch==4):
        obj.display_index()
    elif(ch==5):
        obj.wordfreq()
    else:
        print("Thank You!")
    
    c=input("Do you wish to continue (y/n):")

    









