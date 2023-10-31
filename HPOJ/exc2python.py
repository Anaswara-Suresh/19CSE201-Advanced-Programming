#TASK MANAGER
a=[]
print('''1.Adding a task
         2.Adding a task at a specific position
         3.Remove a task 
         4.Clear the task list
         5.del the task list completely
         6.remove a specific task
         7.sort the task list
         8.reversing the lask list
         9.copy the task list
         10.Exit''')
while (True):
    n=int(input("ENTER YOUR CHOICE \n"))
    print("your choice is ",n)
    if(n>0 and n<=10):
        if n==1:
            t=int(input("enter the task you want to add \n"))
            a.append(t)
            print("the task manager after adding a new task\n",a)
        elif n==2:
            s=int(input("enter the index you want to add the task\n"))
            t=int(input("enter the task you want to add \n"))
            a.insert(s,t)
            print("the task manager after adding a new task in the specified position\n",a)
        elif n==3:
            t=int(input("enter the task you want to remove \n"))
            a.remove(t)
            print("the task manager after removig the task\n",a)
        elif n==4:
            a.clear()
            print("the task manager after clearing the task list\n",a)
        elif n==5:
            del(a)
            print("you task list has been deleted\n")
        elif n==6:
             t=int(input("enter the index of the task you want to remove \n"))
             a.pop(t)
             print("the task manager after removig the task\n",a)
        elif n==7:
            a.sort()
            print("the task manager after sorting\n",a)
        elif n==8:
             a.reverse()
             print("the task manager after reversing\n",a)
        elif n==9:
             b=a.copy()
             print("the task manager has been copied ")
            
        else: 
            print("EXIT\n")
            break
    else:
        print("invalid input\n")

