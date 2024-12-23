f=open("/home/vikas/Desktop/practice/python/main/file_handling/textfiles/writing/sample.txt",'r')
# s=f.read() #we can pass number of characters in read 

#for example 

print(f.read(4))
print(f.seek(10))
print(f.read(4))
print(f.tell())
print("\nfile successfully loaded")