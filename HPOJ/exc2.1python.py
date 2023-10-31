#TASK MANAGER
a=[]
while (True):
    n=int(input())
    if(n>0 and n<=10):
        if n==1:
            t=input()
            a.append(t)
            print("Added")
            print(a)
        elif n==2:
            s=int(input())
            t=input()
            a.insert(s,t)
            print("Added")
            print(a)
        elif n==3:
            t=input()
            a.remove(t)
            print("Removed")
            print(a)
        elif n==4:
            t=int(input())
            a.pop(t)
            print("Poped")
            print(a)
        elif n==5:
            a.pop()
            print("Poped")
            print(a)
        elif n==6:
            a.sort()
            print("Sorted")
            print(a)
        elif n==7:
            a.reverse()
            print("Reversed")
            print(a)
        elif n==8:
            t=input()
            count=a.count(t)
            print("Count of ",t," is ",count)
        elif n==9:
            a.clear()
            print("Cleared")
            print(a)
        
        else: 
            print("Exiting Loop")
            del(a)
            print("Task Sheet Deleted\n")
            break
    else:
        print("invalid input\n")

