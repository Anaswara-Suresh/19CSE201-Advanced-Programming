myneighbours=["ananth","anaswara","arul"]
print(myneighbours)
myneighbours.append("asrita")
print("list after appending :",myneighbours)
myneighbours.insert(0,"amal")
print("list after inserting :",myneighbours)
myneighbours.pop()
print("list after pop :",myneighbours)
myneighbours.pop(3)
print("list after pop with index 3 :",myneighbours)
myneighbours.remove("anaswara")
print("list after remove :",myneighbours)
print(myneighbours.count("amal"))
myneighbours.reverse()
print("list after reverse :",myneighbours)
myneighbours.sort()
print("list after sort :",myneighbours)
myneighbours.sort(reverse=True)
print("list after sort with reverse :",myneighbours)
newlist=myneighbours.copy
print("list after copy :",myneighbours)
myneighbours.clear()
print("list after clear :",myneighbours)
del myneighbours
print("the list myneighbours is deleted")


                   
