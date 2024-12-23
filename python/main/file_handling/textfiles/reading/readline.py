f=open("/home/vikas/Desktop/practice/python/main/file_handling/textfiles/writing/sample.txt",'r')

#first way to use read line
print(f.readline(),end="")
print(f.readline(),end="")
print(f.readline(),end="") 

# second way to use read line

while(f.readline()!=""):
    print(f.readline(),end="-")

print("\nreading done!")
f.close()
