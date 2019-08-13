list1=[]
list2=[]


for i in range(10):
     a=input("Enter a number or -1 to exit ")
     if(int(a)!=-1):
          list1.append(int(a));
     else :
          break

print(list1)

for i in range(len(list1)):
     if (list1[i]%2)==0:
        list2.append(list1[i])

print(list2)            

        
     
