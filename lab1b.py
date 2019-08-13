def fibo(n):
    a=0;
    b=1;
    if n==1:
        print(a);
    elif n==2:
         print(str(a)+" , " +str(b),end="");
    else :
         if(n<=0):
              print("Incorrect nummber ")
         else :
              print(str(a)+" , "+str(b),end="")
    for i in range(2,int(n)):
             sum=a+b
             a=b
             b=sum
             print(" , "+str(sum),end="");
n=input("Enter a number of fibonacci series to find : ")
fibo(int(n));  
             
