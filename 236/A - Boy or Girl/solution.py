x=input()
l=[]
for char in x:
    if char not in l:
        l.append(char)
 
n=len(l)
if(n%2==0):
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")