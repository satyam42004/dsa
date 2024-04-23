'''
Consider telephone book database of N clients. Make use of a hash table implementation
to quickly look up client‘s telephone number. Make use of two collision handling
techniques and compare them using number of comparisons required to find a set of
telephone numbers
'''
#Ganesh bodakhe
#A 21
number=[]
name=[]
n=int(input("Enter table size :"))
for i in range(n):
name.append(None)
number.append(None)
#First Hash Function Implementation
def linear_probing():
for i in range(n):
nname=input("Enter the name of client :")
num=int(input("Enter the telephone number of the client :"))
hash_val=num%n
if number[hash_val]==None:
number[hash_val]=num
name[hash_val]=nname
break
else:
while hash_val<n:
hash_val=(hash_val+1)%n
if number[hash_val]==None:
number[hash_val] = num
name[hash_val] = nname
break
def quadratic():
for i in range(n):
nname=input("Enter the name of the client :")
num=int(input("Enter the telephone number of client :"))
hash_val=num%n
if number[hash_val]==None:
number[hash_val]=num
name[hash_val]=nname
else:
while(hash_val<n):
index = (hash_val + i**2) % n
if number[index] is None:
number[index]=num
name[hash_val]=nname
def print_info():
for i in range(n):
print(i+1,".",name[i],":",number[i])
def search(key):
x=key%n
count=0
while x<key:
count = count + 1
if number[x]==key:
print("Key is found")
print("No. of comparision is to search to no. is",count)
break
elif x: x=(x+1)%d
else:
print("No. is not found")
break
print("\n1)Linear Probing\n2)Quadratic Probing")
a=int(input("Enter your choice :"))
if a==1:
while(1):
print("\n1)Insert client \n2)Print\n3)Search\n4)Exit")
z=int(input("\nEnter the Operation :"))
if z==1:
linear_probing()
elif z==2:
print_info()
elif z==3:
key=int(input("Enter the key :"))
search(key)
else:
break
else:
while(1):
print("\n1)Insert client \n2)Print\n3)Search\n4)Exit")
m=int(input("\nEnter the Operation :"))
if m==1:
quadratic()
elif m==2:
print_info()
elif m==3:
key=int(input("Enter the key :"))
search(key)
else:
break