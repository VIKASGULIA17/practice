with open("/home/vikas/Desktop/practice/python/main/file_handling/textfiles/writing/sample.txt","r") as f:
    s=f.readlines()
    print((s))
    for i in s:
        print(i,end="")